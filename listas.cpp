#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * @author Rafael Rios
 *
 * simple program to count all the elements in a list
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

int pairCount(int numbers[]){
    int count = 0;
    for (int number = 0; number < sizeof(numbers); ++number) {
        if (numbers[number] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int oddCount(int numbers[]){
    int count = 0;
    for (int number = 0; number < sizeof(numbers); ++number) {
        if (numbers[number] % 2 != 0) {
            count++;
        }
    }
    return count;
}
/*
int main(){

    print("how long do you want the list to be?");
    int usrAns = input(usrAns);
    print(usrAns);
    int numbers[usrAns];

    srand((int)time(0));
    for (int i = 0; i < sizeof(numbers); ++i) {
        numbers[i] = (rand()%20)+1;
    }
    print("your list is: ", numbers,"\nthere are ",pairCount(numbers)," even numbers\n",
            "there are ",oddCount(numbers)," odd numbers");
    return 0;
}*/