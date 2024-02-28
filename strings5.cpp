#include <iostream>
#include <string>  //string library

using namespace std;

/*string removal(string s){
    string newString;
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) != 'a' && s.at(i) != 'e' ){
            newString +=s.at(i);
        }
    }
    return newString;
}*/

//Here I am removing the letters and retaining numbers
/*string removal(string s){
    string newString;
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) >= '0' && s.at(i) <= '9' ){
            newString +=s.at(i);
        }
    }
    return newString;
}*/

//retaining letters
string removal(string s){
    string newString;
    for(int i = 0; i < s.length(); i++){
        if(!(s.at(i) >= '0' && s.at(i) <= '9') ){
            newString +=s.at(i);
        }
    }
    return newString;
}

int main(){
    //Removing characters from a string

    string input;
    cout << "Enter some text: " << endl;
    getline(cin, input);

    string stringNew = removal(input);
    cout << stringNew << endl;
  
}