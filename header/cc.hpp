#include <iostream>
#include <stack>
using namespace std;

class cc
{
private:
    int value;        // value of the the money we have to exchange
    stack<int> money; // the set of money
public:
    cc(int value, stack<int> money)
    {
        this->value = value;
        this->money = money;
    }
    ~cc();

    void setValue(int value)
    {
        this->value = value;
    }

    int getValue()
    {
        return value;
    }

    void setMoney(stack<int> money)
    {
        this->money = money;
    }
    stack<int> getMoney()
    {
        return money;
    }

    int getThenumberOfcoins(int value)
    {
        
    }
};
