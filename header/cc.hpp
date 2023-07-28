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

    int getThenumberOfcoins()
    {
        int result = 0;
        for (int i = 0; i < money.size(); i++)
        {
            int x = money.top();
            if (value == 0)
                return result;
            if (value - x < 0)
                return -1;
            while (value - x >= 0)
            {
                value -= x;
                result++;
            }
            money.pop();
        }
        return -1;
    }
};
