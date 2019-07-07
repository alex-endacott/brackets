//
// Created by Alex on 11/11/2017.
//

// File Name: charstack.cpp
//
// This file contains the function definitions for the CharStack class.

#include "../include/charStack.h"
#include <cassert>

//***********************************************************
// CharStack: This function initializes the stackString member
// variable to the empty string.
//
//***********************************************************

charStack::charStack()
{
    stackString = "";
}

//***********************************************************
// push: This function pushes a char onto the stackString
//
// newChar - This is a char entered from a file.
//
//***********************************************************

void charStack::push(char newChar)
{
    assert (!isFull());

    stackString += newChar;

}

//***********************************************************
// pop: This function returns a char from the last spot in the
// stackString.
//
//***********************************************************

char charStack::pop()
{
    assert (!isEmpty());

    char popChar;

    int length = stackString.length();

    popChar = stackString.at(length-1);

    stackString = stackString.substr(0, (length-1));

    return popChar;

}

//***********************************************************
// isFull: This function returns false.
//
//***********************************************************

bool charStack::isFull() const
{
    return false;
}

//***********************************************************
// fisEmpty: This function tests stackString to see if it is
// empty.
//
// returns: returns a bool value true if stackString is empty.
//***********************************************************

bool charStack::isEmpty() const
{

    return (stackString == "");

}







