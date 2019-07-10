#include "library/function1.h"
#include "library/function2.h"
#include "library/function3.h"
#include "library/function4.h"
#include <iostream>

int main() {

    double number = return2();
    bool boolean = returnTrue();
    std::string blabla = returnBlabla();
    int one = returnOne();

    std::cout << one << ' ' << blabla << ' ' << number << ' ' << boolean << '\n';

    return 0;

}