#include <iostream>
#include <string>

int main(){
    //adding on to a string
    std::string text;

    char letter;
    for(int i = 0; i <= 5; i++){
        std::cout << "Enter character: " << std::endl;
        std::cin >> letter;
        text += letter;
    }

    std::cout << "Text" << std::endl;
    std::cout << text << std::endl;

    return 0;
}