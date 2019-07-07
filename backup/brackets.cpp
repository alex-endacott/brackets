// File Name: brackets.cpp
//
// Prompts the user for a filename, and then attempts to open the file
// and test for correct syntax concerning all brackets.

#include "include/charStack.h"
#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;

int main()
{
    charStack cs; //an instance of the CharStack class

    ifstream fin; //a filestream variable to input data

    string doc; //a variable to store the filename

    char testChar; //a char variabel to store the bracket being tested

    //Below is the prompt to input a filename.

    cout << "Welcome to Brackets 1.0" << endl << endl;
    cout << "Please enter the name of the document: ";
    cin >> doc;

    fin.open(doc.c_str()); //Opening the file

    if (fin) //If the file was opened succesfully
    {
        while (fin >> testChar) //For every char in the file
        {
            //This switch statement handles every possible outcome
            //when a bracket is encountered

            switch (testChar)
            {
                case '(':
                    if (cs.isFull())
                    {
                        cout << endl << "Error. Too much data." << endl << endl;
                        return 0;
                    }
                    cs.push(testChar);
                    break;

                case ')':
                    if (cs.isEmpty())
                    {
                        cout << endl << "Error. Unmatched bracket." << endl << endl;
                        return 0;
                    }
                    else if (cs.pop() != '(')
                    {
                        cout << endl << "Error. Expected (" << endl << endl;
                        return 0;
                    }
                    break;

                case '{':
                    if (cs.isFull())
                    {
                        cout << endl << "Error. Too much data." << endl << endl;
                        return 0;
                    }
                    cs.push(testChar);
                    break;

                case '}':
                    if (cs.isEmpty())
                    {
                        cout << endl << "Error. Unmatched bracket." << endl << endl;
                        return 0;
                    }
                    else if (cs.pop() != '{')
                    {
                        cout << endl << "Error. Expected {" << endl << endl;
                        return 0;
                    }
                    break;

                case '[':
                    if (cs.isFull())
                    {
                        cout << endl << "Error. Too much data." << endl << endl;
                        return 0;
                    }
                    cs.push(testChar);
                    break;

                case ']':
                    if (cs.isEmpty())
                    {
                        cout << endl << "Error. Unmatched bracket." << endl << endl;
                        return 0;
                    }
                    else if (cs.pop() != '[')
                    {
                        cout << endl << "Error. Expected [" << endl << endl;
                        return 0;
                    }
                    break;
            }
        }
        //This ternary statement tests for a rogue bracket at the end of the file

        cout << endl << (!cs.isEmpty() ? "Error. Expected closing bracket." : "Success! No errors found.") << endl;
        cout << endl;
    }
    else //If the file was not successfully opened
    {

        cout << endl << "Error. No such file exists." << endl << endl;

    }

    return 0;
}
