/*
 * Ok, so the first thing is ++ is a compiled  language, meaning that
 * you have to push the brick button up there ^^ before you can push
 * the cogs and run it. The errors in your program will be thrown at 
 * compilation down in the text box under this window. 
 * 
 * Your geany isn't going to run this right off the bat, it'll throw 
 * some compilation error, just type it into google and see how to 
 * fix it.
 * 
 * Good luck!
 */


//This is an include statement.
//Its not important now, but you have to at least have this one to
//run any program using C++
#include <iostream>

//This is the using statement.
//If you don't have this, you would have to write 'std::' in front
//of  every line in your program, dumb right?
using namespace std;

//This is int main() its a function. 
//int main() is where all of your program's logic goes
int main(){// All functions, if-else statements, and for-loops use
	       // curly braces instead of indentation to indicate where they
		   // begin and end.
	string message = "Hello World!"; // Every line of your program has
									 // to end in a semicolon. C++ does
									 // not recognize 'Enter' as an end
									 // line indicator.
	
	cout << message << endl; // This is = to a print() function in 
							 // python. 'cout' stands for 
							 // 'characters out.'  These things '<<'
							 // always point towards the 'cout' part.
							 // 'endl' means 'end line'. It indicates
							 // basically an enter button, and even 
							 //though there is no more text here, its
							 // good C++ practice to put an endl anyway.
	
	return 0; // 'return 0' tells the compiler that int main() is done. 
	
} // end int main() with a closing brace. 


