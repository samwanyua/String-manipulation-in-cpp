#include <iostream>
#include <string>  //string library

using namespace std;

int main(){
    //inserting text to an existing string

    string words = "one two three";
    string word = "zero";

    //to insert at the front
    words = word + " "  + words;
    cout << words << endl;


    //as the second element
    int found = words.find(" ");
    word = "new_word";
    words = words.substr(0, found) + " " + word + words.substr(found);
    cout << words << endl;

    //between 2 and 3
    int found2 = -1;
    int lastSpace = 0;
    do {
        found2 = words.find(" ",found +1);
        if(found2 != -1){
            lastSpace = found2;
        }
    }while(found2 != -1);

    words = words.substr(0, lastSpace) + " " + word + words.substr(lastSpace + 1);

     cout << words << endl;



    return 0;
}