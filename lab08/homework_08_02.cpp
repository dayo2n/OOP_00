#include <iostream>

class Strategy
{
public:
    virtual void doOperation(int num1, int num2) = 0;
};

//class Add가 Strategy 인터페이스를 implements한다는 느낌 : 오버라이딩 필요
class OperationAdd : public Strategy
{
public:
    void doOperation(int num1, int num2)
    {

        std::cout << (num1 + num2) << std::endl;
    }
};

class OperationSub : public Strategy
{
public:
    void doOperation(int num1, int num2)
    {
        std::cout << (num1 - num2) << std::endl;
    }
};

class OperationMul : public Strategy
{
public:
    void doOperation(int num1, int num2)
    {
        std::cout << (num1 * num2) << std::endl;
    }
};

class Context
{
private:
    Strategy *s;

public:
    Context(Strategy *s)
    {
        this->s = s;
    }

    void execute(int num1, int num2)
    {
        s->doOperation(num1, num2);
    }
};

int main()
{
    Context *c = new Context(new OperationAdd());
    std::cout << "10 + 5 = ";
    c->execute(10, 5);

    c = new Context(new OperationSub());
    std::cout << "10 - 5 = ";
    c->execute(10, 5);

    c = new Context(new OperationMul());
    std::cout << "10 * 5 = ";
    c->execute(10, 5);

    return 0;
}