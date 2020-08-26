#include <stdio.h>
#include "dog.h"

namespace c{
void Dog::setName(char *name)
		{
			this->name = name;
		}

void Dog::setAge(int age)
		{
			this->age = age;
		}
void Dog::printInfo(void)
		{
			printf("name = %s,age = %d,works = %s \r\n",this->name,this->age,this->works);
		}
void printVersion(void)
{

	printf("dog,v1 by chenfashang \n");
}

}