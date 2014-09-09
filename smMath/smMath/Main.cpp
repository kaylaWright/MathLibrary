/* Math Library 
* Kayla Wright // syphiliticmind
* Autumn, 2014
*/ 

#include <iostream>
#include "smMath.h" 

void main(char* argc)
{
	//initialization list for pointer to Vectors2 not work. -> why?

	smVector3 test;
	test.x = 5;
	test.y = 5;
	test.z = 1;

	std::cout << test << std::endl;

	smVector3 *test2 = new smVector3(test.x, test.y, test.z);
	
	//operators: done.
	//printing: done.
	//Dot : done.
	//Cross : done.

	std::cout << test2 << std::endl;

	system("PAUSE");
	return;
}