#include <iostream>
#include <string>  //string library

using namespace std;

int main(){
    //concantenation -- must be a string or a char
    string s1 = "Hello";
    string s2 = "Saroti";
    char exclaim = '!';

    string s3 = s1 + " " +  s2 + exclaim;

    cout << s3 << endl;

    return 0;
}