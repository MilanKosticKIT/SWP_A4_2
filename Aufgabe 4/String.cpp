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
    // FIXME: This means copying the value, because of call by value?
    size = s.size;
    str = s.str;
}

//MARK: - Operators -

char& String::operator[](int index) {
    // TODO: Overload the operator []
}

String& String::operator=(String& s) {
    // TODO: Overload the operator =
}

String& String::operator+=(String& s) {
    // TODO: Overload the operator +=
}

//MARK: - Misc -

String::~String() { delete[] str; }
