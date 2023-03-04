#include<iostream>

using namespace std;

int main()
{
    string phrase = "Software Engineer";
    cout << phrase.length() << endl;
    cout << phrase[3] << endl;
    cout << phrase.find("e") << endl;
    cout << phrase.find("ftwa") << endl;
    phrase[0] = 'A';
    cout << phrase << endl;
    cout << phrase.substr(5, 4) << endl;
    string phrasesub = phrase.substr(5, 4);
    cout << phrasesub << endl;


    return 0;
}