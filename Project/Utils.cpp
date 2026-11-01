#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
    if (nums == nullptr || size == 0)
    {
        return;
    }

    Stack numStack;
    initStack(&numStack);

    for (unsigned int i = 0; i < size; i++)
    {
        push(&numStack, static_cast<unsigned int>(nums[i]));
    }

    for (unsigned int i = 0; i < size; i++)
    {
        nums[i] = static_cast<int>(pop(&numStack));
    }

    cleanStack(&numStack);
}

int* reverse10()
{
    const unsigned int ARRAY_SIZE = 10;
    int* numbersArray = new int[ARRAY_SIZE];

    std::cout << "Please enter 10 integers: ";
    for (unsigned int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cin >> numbersArray[i];
    }

    reverse(numbersArray, ARRAY_SIZE);

    return numbersArray;
}