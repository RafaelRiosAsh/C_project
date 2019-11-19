#include <iostream>
/**
 * @author Rafael Rios
 * simple function and main to show how functions and simple arithmetic calculations work
 *
 * this class includes the functions print and printl design to simplify printing in c++
 * and an input class to simplify the input
 */


/* two functions to simplify printing, "print" creates a new line after printing, printl just calls flush
* input is
*/

/* this functions have a type T and a type F both defined by the parameter that is entered,
 * the function prints the first parameter and then it unpacks the ..f parameter which can
 * contain infinite parameters of different types
 */
template < typename T, typename ...F > void print(T t, F ...f) {
    std::cout << t;
    (std::cout << ... << f) << std::endl;
}
template < typename T, typename ...F > void printl(T t, F ...f) {
    std::cout << t;
    (std::cout << ... << f) << std::flush;
}
/*
 * this function has a type T defined by the parameter that is entered,
 * it gets the input from the user using cin and returns the value in the type the user specified
 */
template <typename T> T input (T t){
    T ans;
    std::cin >> ans;
    return ans;
}

/**
 * this is a simple function to print a square with a defined width and height
 * @param width
 * @param length
 * @return
 */
void square(int width, int length){

    for (int i = 0; i < width; ++i) {
        printl(" *");
    }
    print("");
    for (int y = 0; y < length; ++y) {
        printl("*");
        for (int x = 0; x < width; ++x) {
            printl("  ");
        }
        printl("*");
        print("");
    }

    for (int i = 0; i < width; ++i) {
        printl(" *");
    }

}

/*int main(){
    print("please enter the height and width of the rectangle");
    int length = input(length);
    int width = input(width);
    square(width,length);
    return 0;
}*/