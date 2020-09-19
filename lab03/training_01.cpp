#include <iostream>

class SetValue
{
public: //public으로 지정해주어야함, 디폴트는 private
    int x, y;
};

int main()
{
    SetValue obj;
    obj.x = 33;
    obj.y = 44;

    std ::cout << "X = " << obj.x << ",Y = " << obj.y << std::endl;
    return 0;
};