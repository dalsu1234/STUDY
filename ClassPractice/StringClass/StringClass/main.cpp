#include <iostream>
#include "toString.h"
#include <string.h>
int main()
{
	String st1("test");
	String st2("1234");
	String st3("1234");
	String st4(20);
	String st5(st1);
	String st6;
	
	st2 = st1 + st3;
	std::cout << st2 << std::endl;
	std::cout << st5 << std::endl;
	std::cout << st6 << std::endl;
	std::cout << st4 << std::endl;
	std::cout << st3 << std::endl;

}
