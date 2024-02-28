#include <iostream>
#include <string>  //string library

using namespace std;

int main(){

    string s = "some text";
    //length
    cout << s.length()<< endl;

    //resize
    string text = "some words";

    cout << text << endl;
    // text.resize(6);
    cout << text << endl;
    // text.resize(20);
    cout << text.length() << endl; //20
    cout << (int)text[12] << endl; //0 - Null
    
    text.resize(20, '!'); //some words!!!!!!!!!!
    cout << text << endl;

    string word;
    cout << "Enter a word: " << endl;
    getline(cin, word);

    word.resize(word.length()+3, '!');
    cout << word << endl;


    return 0;
}