#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <ctype.h>

using namespace std;

//pseudocode
/*
play()

display hangman
while number of guesses <= max guesses
get guess
check check
update game
decide if player wins
ask to play again
if yes
    play()
else
    end game

*/

class Hangman
{
    public:
        Hangman() { m_MaxGuesses = 6; m_NumGuesses = 0; m_Guesses.push_back('\0'); } //sets allowed amount of guesses to 6 and number of guesses to 0
        ~Hangman();

        void Play(); //game play function
        //void ShowAns() const; //function to end game and show answer
        bool PlayAgain(string prompt = "\nDo you want to play again? (y/n): ") const;
        bool CheckGuess(string& word, char& letter) const;   //checks if letter is in word
        //void Update(vector <char>& guesses, char& guess);   //update guesses
        void DisplayGuess();
        int Update(string& word, char& letter, vector<char>& guesses, bool g = false); //updates word or guesses, depending on bool value
        void Reset();
        vector<char>& GetWord();

        //inlined functions
        int GetMaxGuesses() const { return m_MaxGuesses; }
        int GetGuesses() const { return m_NumGuesses; } //get number of guesses
        //char& GetGuess(char& letter) const { return letter; }

    class HMan
    {
        public:
            HMan();
            HMan(vector<char>& Man)
            {
                 CreateMan(Man);
            }
            ~HMan();

        void CreateMan(vector<char>& Man);
        void DrawMan(vector<char>& Man);
        void UpdateMan(int guess, vector<char>& man);
    };

    class HWords
    {
        public:
            HWords(vector<string>& words, bool populate = false);
            HWords(string& file);

            string m_GetWord() { return m_Word; } //inline
            vector<char>& m_GetHWord();

            void m_DisplayWord();
            void m_Populate(vector<string>& words);

        protected:
            string m_Word;
            vector<char> m_HiddenWord;
    };

    protected:
        int m_MaxGuesses;
        int m_NumGuesses;
        vector<char> m_Guesses;
        string str;
        string word;
        string hWord;
};

string& vtostr(vector<char>& chars, string& str)
{
    vector<char>::iterator iter = chars.begin();
    char a;
    for (iter = chars.begin(); iter != chars.end(); ++iter)
    {
       if (*iter != '_') { a = *iter; }
    }
    str.push_back(a);
    return str;
}

bool Hangman::CheckGuess(string& word, char& letter) const //checks if letter is in word
{
    size_t f;
    f = word.find(letter);
    return (f!=string::npos);
}
/*
void Hangman::Update(vector <char>& guesses, char& guess) //update word and guesses
{
    guesses.push_back(guess);
    sort(guesses.begin(), guesses.end());
}
*/

void Hangman::DisplayGuess()
{
    vector<char>::iterator iter = m_Guesses.begin();
    for (iter = m_Guesses.begin(); iter != m_Guesses.end(); ++iter)
    {
        cout << *iter;
    }
}

int Hangman::Update(string& word, char& letter, vector<char>& vect, bool g)
{
    vector <char>::iterator iter = vect.begin();
    if (!g) //update word
    {

        if (CheckGuess(word,letter))
        {
            vector<int> places;
            for (unsigned int i = 0; i <= word.size(); i++)
            {
                if (letter == word[i])
                {
                    places.push_back(i);
                }
            }
            vector<int>::iterator iter = places.begin();
            //vector<char>::iterator iter1 = vect.begin();
            for (iter = places.begin(); iter != places.end(); ++iter)
            {
                //for (iter1 = vect.begin(); iter1 != vect.end(); ++iter)
                //{
                    vect.erase(vect.begin()+(*iter));
                    vect.insert(vect.begin()+(*iter),letter);
                //}
            }
        }
    }
    else //update guesses
    {
        if (!CheckGuess(word,letter))
        {
            vector<char>::const_iterator iter1 = vect.begin();
            int t = 0;
            for (iter1 = vect.begin(); iter1 != vect.end(); ++iter1)
            {
                if (letter == *iter1) {++t;}
            }
            if (t <= 0) { vect.push_back(letter); }
            else { return 1; }
        }
    }

    return 0;
}

void Hangman::Reset()
{
    m_NumGuesses = 0;
    word = "";
    hWord = "";
    m_Guesses.clear();
}

vector<char>& Hangman::GetWord()
{
    return m_Guesses;
}

bool Hangman::PlayAgain(string prompt) const
{
    char choice = 'y';
    do {
        cout << prompt;
        cin >> choice;
    } while (choice != 'n' && choice != 'N' && choice != 'y' && choice != 'Y');
    return (choice == 'y' || choice == 'Y');
}

void Hangman::Play()
{
    vector<string> gWords;
    HWords gWord(gWords, true);

    vector<char> Man;
    HMan* man = 0;
    man->CreateMan(Man);

    vector<char>& vect = GetWord();
    vector<char>& vGuess = gWord.m_GetHWord();
    hWord = gWord.m_GetWord();

    char guess;
    do {
        cout << "\nWord: "; gWord.m_DisplayWord();
        cout << "\tIncorrect: "; DisplayGuess();
        cout << endl;
        man->DrawMan(Man);
        cout << "\nEnter your choice: ";
        cin >> guess;
        cout << endl;
        if (!CheckGuess(hWord,guess) && isalpha(guess))
        {
            if(Update(hWord, guess, vect, true) != 1)
            {
                ++m_NumGuesses;
                man->UpdateMan(GetGuesses()-1, Man);
            }
        }
        Update(hWord, guess, vGuess);
        word = vtostr(vGuess,str);
    } while (GetGuesses() < GetMaxGuesses() && word != hWord);

    if (word == hWord)
    {
        cout << "You won!\n";
        cout << "The word was: " << gWord.m_GetWord();
    }
    else
    {
        cout << endl;
        cout << "Sorry, you lost!\n";
        cout << "The word was: " << gWord.m_GetWord();
    }
    if (PlayAgain()) { Reset(); Play(); }
}

Hangman::HWords::HWords(vector<string>& words, bool populate)
{
    if (populate) { m_Populate(words); }
    random_shuffle(words.begin(), words.end());     //shuffles words
    srand(time(NULL));
    int w = rand()%words.size();        //sets w to random place in vector of strings
    m_Word.insert(0,words[w]);       //set word to represent random place
    for (unsigned int i = 1; i<=m_Word.size(); ++i)
    {
        m_HiddenWord.push_back('_');
    }
}

Hangman::HWords::HWords(string& file)
{
    /*
    get words from file
    push them into a vector
    shuffle them
    randomly select a single word from the vector
    set the word to the selected word
    */
}

vector<char>& Hangman::HWords::m_GetHWord()
{
    return m_HiddenWord;
}
void Hangman::HWords::m_DisplayWord()
{
    vector<char>::const_iterator iter = m_HiddenWord.begin();
    for (iter = m_HiddenWord.begin(); iter != m_HiddenWord.end(); ++iter)
    {
        cout << *iter;
    }
}

void Hangman::HWords::m_Populate(vector<string>& words)
{
    string word1 = "hello";
    string word2 = "world";
    string word3 = "love";
    string word4 = "algorithm";
    string word5 = "keyboard";
    string word6 = "programming";
    string word7 = "game";
    string word8 = "mouse";
    string word9 = "compile";

    words.reserve(9);
    words.push_back(word1);
    words.push_back(word2);
    words.push_back(word3);
    words.push_back(word4);
    words.push_back(word5);
    words.push_back(word6);
    words.push_back(word7);
    words.push_back(word8);
    words.push_back(word9);
}

void Hangman::HMan::CreateMan(vector<char>& Man)
{

    Man.push_back(' ');
    Man.push_back(' ');
    Man.push_back(' ');
    Man.push_back(' ');
    Man.push_back(' ');
    Man.push_back(' ');
}

void Hangman::HMan::DrawMan(vector <char>& Man)
{
    cout << endl;
    cout << "  +---+" << endl;
    cout << "  |   |" << endl;
    cout << "  " << Man[0] << "   |" << endl;
    cout << " " << Man[2] << Man[1] << Man[3] << "  |" << endl;
    cout << " " << Man[4] << " " << Man[5] << "  |" << endl;
    cout << " _____|" << endl;
}

void Hangman::HMan::UpdateMan(int guess, vector<char>& man)
{
    switch (guess)
    {
        case 0:
            man[0] = 'O';
            break;
        case 1:
            man[1] = '|';
            break;
        case 2:
            man[2] = '/';
            break;
        case 3:
            man[3] = '\\';
            break;
        case 4:
            man[4] = '/';
            break;
        case 5:
            man[5] = '\\';
            break;
    }
}

int main()
{
    Hangman* game = new Hangman();
    game->Play();
}