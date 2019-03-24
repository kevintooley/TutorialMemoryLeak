//============================================================================
// Name        : TutorialMemoryLeak.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * Hi everyone, Kevin here with a few of the basics on MEMORY LEAKS IN C++
 *
 * C++ is a very powerful language and still one of the most popular
 * The C++ standards committee designed the C++ language to give the programmer
 * control over everything.
 * This is actually one of the things that makes C++ so powerful, yet so difficult
 *
 * One of the difficult concepts to grasp in C++ is memory management, therefore
 * this tutorial will focus on one small aspect that that.
 *
 * These days we focus a lot of time in Java which has garbage collection and
 * some automated memory management features but in C++ we programmers
 * have to manage the memory.
 *
 * Remember, the standards committee made C++ do what you say
 *
 * If you tell an application to leak memory, it will do so.
 *
 * YOU TOLD it to leak memory
 *
 * So our objective here today is to give you the basics of one simple
 * question:  WHAT IS A MEMORY LEAK IN C++
 *
 * ****
 *
 * Let’s define a memory leak.  So what is it?
 * A memory leak is when a program does not release memory after it has been used.
 *
 * Plain and simple.  We use memory to do something and should release it when
 * done, but when we fail to do so the memory is “leaked”
 *
 * Let me give you an example
 *
 * For instance, let’s say an application consumes some memory to do some basic math.
 * 2 + 3 = 5 for instance.
 * Let's say the application sets up a constant 3
 * The application then dynamically uses some memory to hold a 2
 * The application then adds the two numbers together to get 5
 *
 * Let’s do exactly this example in C++ code
 */

/*
 * Step 4:  Create the pointer function
 *
 * The function will be returning an integer, so we need to put that in the
 * definition.
 *
 * Also, it is going to return a pointer, so we need to put that in the definition
 *
 * Let's create pointer b and set it to 2
 *
 * NOTE: when initializing a pointer, *b means "pointer b"
 *
 * Let's demonstrate that if we print b, since its a pointer, we will print an address
 *
 * Finally, lets return the item we created
 */
int * GetOtherInteger() {

	// Create the integer
	int *b = new int;
	*b = 2;

	cout << "b = " << b << endl;

	return b;
}

int main() {

	/*
	 * Step 1: Create a "TutorialMemoryLeak" project
	 *
	 * Set the standard as C++11; this tutorial won't use these new functions, but
	 * we will use in a later tutorial
	 *
	 * Compile and run
	 */

	/*
	 * Step 2: Lets setup the integers we need for the arithmetic
	 */
	int a = 3;
	int b;

	/*
	 * Step 3: We need a function to set our integer 'b' with a value of '2' that we
	 * dynamically created in memory
	 */
	b = *GetOtherInteger();  // Lets get into the basics of a pointer

	/*
	 * A pointer is a variable that POINTS to a location in memory.  That's it!  The
	 * name implies what it does.  It points.
	 *
	 * If we print the raw value of a pointer we will see something like 0x7feb19500000
	 *
	 * In order to see the value of what is in that memory location, we need to
	 * DEREFERENCE the object.  To do that, we use the '*' character.
	 *
	 * * = "value pointed to by"  (remember that phrase)
	 *
	 * So that means that *b (or the value pointed to by 'b') will equal 2
	 *
	 * If we print *b (value pointed to by "b") then we will get '2'
	 */

	/*
	 * Step 5:  Let's print the output
	 */
	cout << "The answer is " << a + b << endl;

	/*
	 * Step 6:  Summary and recap
	 */

	return 0;
}
