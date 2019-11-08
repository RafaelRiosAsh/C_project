#include <iostream>

/**
 * C++ beginner program designed to learn about the project testing object oriented programming
 * @author Rafael Rios
 * @version 2.0 since 1.0
 */
//function to simplify printing to console to save time
template < typename T > void print(T t){
    std::cout << t << std::flush;
}
template < typename T, typename ...F > void print(T t, F ...f) {
    std::cout << t;
    print(f...);
}

template < typename T > void printl(T t){
    std::cout << t << std::endl;
}
template < typename T, typename ...F > void printl(T t, F ...f) {
    std::cout << t;
    printl(f...);
}

//end of function to simplify printing to console to save time

static bool contains(std::string list, char character){

    for (int i = 0; i < list.size(); i++){
        if (character == list.at(i)){
            return true;
        }
    }
    return false;
}

//fun test function to make C++ look more like Java or python
template < typename T > auto input (T t){
    std::string ans;
    printl(t);
    std::cin >> ans;
    return ans;
}

int main() {
    std::string age;
    std::string name;
    std::string lastName;

    printl("please enter your name");
    std::cin >> name;
    std::cin >> lastName;

    printl("your name is ",name," your last name is ",lastName," your age is ",age);

    //random test function that checks if a character is inside a string
    bool hasWord = contains("Frogissima", 'a');
    if (hasWord){
        printl("the word contains the character");
    }
    else {
        printl("the word does not contain the character");
    }
    return 0;
}