
namespace A{
class Person{
private:
		char *name;
		int  age;
		char *works;
public:	
		void setName(char *name);
		void setAge(int age);		
		void printInfo(void);		
	
};

void printVersion(void);
}