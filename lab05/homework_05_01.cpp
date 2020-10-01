#include <iostream>
#include <memory>

class Animal
{
public:
	char *name;
	int age;

	Animal(int age_, const char *name_)
	{
		age = age_;
		name = new char[strlen(name_) + 1];
		strcpy(name, name_);
	}

	Animal(Animal &a)
	{ //복사 생성자
		age = a.age;
		name = new char[strlen(a.name) + 1];
		strcpy(name, a.name);
	}
	void changeName(const char *newName)
	{
		strcpy(name, newName);
	}
	void printAnimal()
	{
		std::cout << "Name: " << name << " Age: "
				  << age << std::endl;
	}
};

int main()
{
	Animal A(10, "Jenny"); //create age 10 Jenny
	Animal B = A;		   // Copy A(age 10, Jenny) to B
	A.age = 22;			   //Change A's age to 22
	A.changeName("Brown"); //Change A's name Brown

	A.printAnimal();
	B.printAnimal();

	getchar();

	return 0;
}