#include <iostream>
#include "person.h"

using namespace std;

namespace A{
void Person::setName(char *name)
		{
			this->name = name;
		}

void Person::setAge(int age)
		{
			this->age = age;
		}
void Person::printInfo(void)
		{
			cout<<"name = "<<this->name<<"age ="<<this->age<<"works = "<<this->works<<endl;
		}
void printVersion(void)
{

	cout<<"person,v1 by chenfashang"<<endl;
}

}