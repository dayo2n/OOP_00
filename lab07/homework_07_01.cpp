#include <iostream>
#include <fstream>
#include <string>

class AnyString
{
	std::string anyString;

public:
	AnyString(const std::string &anyString) : anyString(anyString) {}
	friend std::ostream &operator<<(std ::ostream &os, const AnyString &a);

	std::string getAnyString()
	{
		return "Stored String :: " + anyString;
	}
};

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