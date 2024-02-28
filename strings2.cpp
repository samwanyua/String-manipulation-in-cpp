#include <iostream>
#include <string>  //string library

using namespace std;

int main(){
    //string at -> you access individual characters from a string
    string s = "some text";

    cout  << s.at(2) << endl;

    //reassign a letter
    s.at(3) = 'r';
    cout << s << endl;

    //last character
    cout << s.at(s.length() - 1) << endl;


    return 0;
}