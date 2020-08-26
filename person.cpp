#include<stdio.h>

class Person{
private:
		char *name;
		int  age;
		char *works;
public:	
		void setName(char *name)
		{
			this->name = name;
		}
		void setAge(int age)
		{
			this->age = age;
		}	
		void printInfo(void)
		{
			printf("name = %s,age = %d,works = %s \r\n",this->name,this->age,this->works);
		}	
	
};

int main(int argc,char *argv[])
{
	Person person;
	person.setName("chenfashang");
	person.setAge(20);	
	
	person.printInfo();

	return 0;
}