//  ex1-2_returnValue.cpp -- return value test.
//  - Exercise 1.2, Chapter 1, C++ Primer, 5th, Page 30.
// 
// 	Change the program to return -1. A return value of -1 is often treated as an indicator 
// 	that the program failed. Recompile and rerun your program to see how your system treats 
// 	a failure indicator from main.
// 
//  Created by Yinghua Han on 04/11/2021.
//  Copyright © 2021 Yinghua Han. All rights reserved.

int main()
{
	return -1;	// when return -1, run the program, then run "echo $?" will get 255. 
				// system : macOS v11.2.3, compiler : gcc v10.2
}