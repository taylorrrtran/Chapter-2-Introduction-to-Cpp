#include <iostream>
#include "Chapter1Problems.h"

int main()
{
	chapter1Problems *p1 = new chapter1Problems();
	chapter1Problems *p2 = new chapter1Problems();
	std::cout << p2->getPercent() << std::endl;
	std::cout << p1->addVariables() << std::endl;
	system("pause");
	return 0;
}