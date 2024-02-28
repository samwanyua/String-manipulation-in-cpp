#include <iostream>
#include <string>  //string library

using namespace std;

int main(){
    //substr - accessing portions of a string
    string s = "Hello world";

    cout << s.substr(6) << endl;
    cout << s.substr(6, 4) << endl; //6 = index, 4= no. of characters




    return 0;
}