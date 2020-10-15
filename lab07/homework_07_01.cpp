#include <iostream>
#include <fstream>
#include <string>

class AnyString
{
	std::string anyString;

public:
	AnyString(const std::string &anyString) : anyString(anyString) {}
	friend std::ostream &operator<<(std ::ostream &os, const AnyString &a);
	//연산자 <<에 대한 오버로딩 선언

	std::string getAnyString()
	{
		return "Stored String :: " + anyString;
	}
};

// <<에 대해 재정의
std ::ostream &operator<<(std::ostream &os, const AnyString &a)
{
	os << a.anyString << std ::endl;
	return os;
}

int main()
{
	std::ofstream out("testOveroding.txt");
	AnyString a("Hello, this is operator overloading test!!!");
	// std::string output = a.getAnyString();
	// out << output << std::endl;
	out << a << std ::endl;

	return 0;
}