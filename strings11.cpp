#include <iostream>
#include <string>  //string library

using namespace std;

int main(){
    // subtituting a text with different text
    string um = "These um are um my um words and um I want um us to stop um talking um like this";

    string target = "um";
    string replace = "like";

    int found = -1;
    do {
        found = um.find(target, found+1);
        if(found != -1){
            um = um.substr(0, found) + replace + um.substr(found + target.length());
        }
    } while(found != -1);

    cout << um << endl;

    return 0;
}