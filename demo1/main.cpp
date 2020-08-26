#include <stdio.h>
#include "person.h"
#include "dog.h"

using namespace A;
using namespace c;

int main(int argc,char *argv[])
{
	Person person;
	person.setName("chenfashang");
	person.setAge(20);	
	person.printInfo();

	Dog dog;
	dog.setAge(1);
	dog.setName("wangcai");
	dog.printInfo();

	A::printVersion();
	c::printVersion();

	return 0;
}
