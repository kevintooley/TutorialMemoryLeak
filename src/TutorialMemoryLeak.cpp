//============================================================================
// Name        : TutorialMemoryLeak.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int * GetOtherInteger() {

	int *b = new int;
	cout << "b = " << b << endl;

	*b = 2;  // * = "Value pointed to by..."

	return b;

}

int main() {

	// 3 + 2 = 5

	// setup the integers
	int a = 3;
	int b;

	b = *GetOtherInteger();

	cout << "3 + 2 = " << a + b << endl;

	return 0;
}
