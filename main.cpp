//
//  main.cpp

//  Created by Eiji Adachi Medeiros Barbosa 
//

#include <iostream>
#include <cassert>
#include "Math.hpp"

void testAdd();
void testSubtract();
void testMultiply();
void testDivide();
void testFactorial();

int main(int argc, const char * argv[]) {
    
    testAdd();
    testSubtract();
    testMultiply();
    testDivide();
    testFactorial();
    
    std::cout << "All tests passed!\n";
    return 0;
}

void testAdd()
{
    assert( add(1, 1) == 2 );
    assert( add(3, 3) == 6);
    assert( add(0, 0) == 0 );
    assert( add(3, 6) == 9);
    assert( add(-3, -6) == -9);
    
    std::cout << "All add-tests passed!\n";
}

void testSubtract()
{
    assert( subtract(1, 1) == 0 );
    assert( subtract(-1, 1) == -2 );
    assert( subtract(-1, -1) == 0 );
    assert( subtract(0, 0) == 0 );
    assert( subtract(1, -1) == 2 );
    
    std::cout << "All subtract-tests passed!\n";
}

void testMultiply()
{
    assert( multiply(2, 1) == 2 );
    assert( multiply(3, 5) == 15 );
    assert( multiply(-3, 5) == -15 );
    
    std::cout << "All multiply-tests passed!\n";
}

void testDivide()
{
    assert( divide(2, 1) == 2 );
    assert( divide(-1, 1) == -1 );
    assert( divide(-1, -1) == 1 );
    
    std::cout << "All divide-tests passed!\n";
}

void testFactorial()
{
    assert( factorial(5) == 120 );
    assert( factorial(1) == 1 );
    assert( factorial(0) == 1 );
    
    std::cout << "All factorial-tests passed!\n";
}