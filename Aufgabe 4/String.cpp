#include <iostream>
using namespace std;

#include "String.h"

//MARK: - Constructors -

String::String() {
    size = 0;
    str = new char[1];
    str[0] = '\0';
}


String::String(char c) {
    size = 1;
    str = new char[2];
    str[0] = c;
    str[1] = '\0';
}

String::String(const char *s) {
    int counter;
    for(counter = 0; *s != '\0'; counter++){
        }
    size = counter;
    str = new char[size + 1];
    for(counter = 0; *s != '\0'; counter++){
        str[counter] = s[counter];
    }
    str[counter] = s[counter];
}

String::String(const String& s) {
    // FIXME: This means copying the value, because of call by value, doesn't it?
    size = s.size;
    str = s.str;
}

//MARK: - Operators -

char& String::operator[](int index) {
    // FIXME: Is that right? I'm not sure of the use of pointers anymore.
    char* searchPointer = str;
    for(int counter = 0; counter < index; counter++){
        searchPointer++;
    }
    return *searchPointer;
}

String& String::operator=(String& s) {
    // TODO: Overload the operator =
    
    return s;
}

String& String::operator+=(String& s) {
    // TODO: Overload the operator +=
    int newSize = String::size + s.size + 1;
    char* collection = new char[newSize];
    int counterOne;
    for (counterOne = 0; counterOne < String::size; counterOne++) {
        collection[counterOne] = String::str[counterOne];
    }
    int counterTwo;
    for (counterTwo = 0; counterTwo < s.size; counterTwo++) {
        collection[counterOne + counterTwo] = s.str[counterTwo];
    }
    collection[newSize] = '\0';
    String returnString;
    returnString.str = collection;
    returnString.size = newSize;
    delete[] collection;
    return returnString;
    // FIXME: Potential deleted Item, before possible use of it.
}

//MARK: - Misc -

String::~String() { delete[] str; }
