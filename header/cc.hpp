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

    void nextMoneyValue()
    {
        if (this->value - this->money.top() < 0)
        {
            money.pop();
        }
    }

    int getThenumberOfcoins(int value)
    {
        //cout << money.top() <<endl;
        if (value == 0)
            return 0;
        if (money.empty())
            return -1;
        
        if (value - money.top() >= 0)
        {
            int result = value / money.top();
            value -= (result * money.top());
            return result + this->getThenumberOfcoins(value);
        }
        else
        {
            money.pop();
            return this->getThenumberOfcoins(value);
        }
    }
};
