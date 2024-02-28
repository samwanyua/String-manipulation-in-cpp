#include <iostream>
#include <string>  //string library

using namespace std;

int main(){
    //find
    string s = "abc abc abc abc pit piy";

    //for a char
    int found = s.find('b');
    cout << "Found at: " << found << endl;
    
    //for a string
    int found2 = s.find("pit");
    cout << "Found at: " << found2 << endl;
    
    int found3 = s.find("abc", 3); // 3 = index
    cout << "Found at: " << found3 << endl;

    //to keep finding
    int found4 = -1;
    do {
        found4 = s.find("abc", found4+1);
        if(found4 != -1){
            cout << "Found at: " << found4 << endl;
        }
    }while(found4 != -1);

    //find_first_of()
    //  int found5 = s.find_first_of('b');
    //  int found5 = s.find_last_of('b');
    int found5 = s.find_first_not_of('b'); //0
     cout << found5 << endl;


    return 0;
}