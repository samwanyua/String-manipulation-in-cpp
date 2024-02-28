#include <iostream>
#include <string>  //string library

using namespace std;

int main(){
    //concantenation cont'd
    string input;
    string overallInput;

    do
    {
        cout << "Enter some text: " << endl;
        getline(cin, input);
        overallInput += input;
    }
    while(input != "!");

    cout << overallInput << endl;




    return 0;
}