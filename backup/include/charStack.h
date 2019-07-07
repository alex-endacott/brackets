//
// Created by Alex on 11/11/2017.
//

#ifndef BRACKETS_CHARSTACK_H
#define BRACKETS_CHARSTACK_H

#include<string>

using std::string;

class charStack {
private:
    string stackString;  //contains the stack of characters

public:
    // Constructor
    charStack();

    // Stack operations
    void push(char);
    char pop();
    bool isFull() const;
    bool isEmpty() const;
};


#endif //BRACKETS_CHARSTACK_H
