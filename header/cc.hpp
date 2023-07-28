#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class cc
{
private:
    int value;        // value of the the money we have to exchange
    stack<int> money; // the set of money
    vector<int> dp;   // a dp vector

public:
    cc(int value, stack<int> money, vector<int> dp)
    {
        this->value = value;
        this->money = money;
        this->dp = dp;
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
        //! create a new money so that we can save the original value
        stack<int> money1;
        money1 = money;
        // cout << money.top() <<endl;
        if (value == 0)
            return 0;
        if (money1.empty())
            return -1;
        if (dp.at(value) != -1)
        {
            cout << "s";
            return dp.at(value);
        }
        if (value - money1.top() >= 0)
        {
            int result = value / money1.top();
            dp.at(value) = result;
            value -= (result * money1.top());
            cout << dp.at(value) << endl;
            return result + this->getThenumberOfcoins(value);
        }
        else
        {
            money1.pop();
            return this->getThenumberOfcoins(value);
        }
    }
};
