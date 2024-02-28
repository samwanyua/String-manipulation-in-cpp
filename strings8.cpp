#include <iostream>
#include <string>  //string library

using namespace std;

int main(){
    //ASCII Values
    char littlea = 'a';
    char biga = 'A';

    cout << (int)littlea << endl; //97
    cout << (int)biga << endl; //65 ...the diff is 32

    string s = "hello";

    //simple for loop to capitalize
    for(int i = 0; i < s.length(); i++ ){
        s.at(i) -=32;
    }
   
    string t = "SAMUEL";
    //to lowercase
    for(int i = 0; i < t.length(); i++ ){
        t.at(i) +=32;
    }

    cout << s << endl;
    cout << t << endl;
    return 0;
}