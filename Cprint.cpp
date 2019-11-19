//
// Created by rafael rios garcia on 11/18/19.
//

#include "Cprint.h"
#include <iostream>
namespace Cprint{
    template <typename T, typename ...F>  void Cprint::print(T t, F... f) {
        std::cout << t;
        (std::cout << ... << f) << std::endl;
    }
    template <typename T, typename ...F>  void Cprint::printl(T t, F... f) {
        std::cout << t;
        (std::cout << ... << f) << std::flush;
    }
}
