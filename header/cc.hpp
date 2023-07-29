#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class cc
{
private:
    int value;         // value of the the money we have to exchange
    vector<int> money; // the set of money
    vector<int> dp;    // a dp vector

public:
    cc(int value, vector<int> money, vector<int> dp)
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

    void setMoney(vector<int> money)
    {
        this->money = money;
    }
    vector<int> getMoney()
    {
        return money;
    }

    int coins(int value)
    {
        if (value == 0)
            return 0;
        int ans = INT_MAX;
        if (dp[value] != -1)
        {
            cout <<value<< "="<< dp.at(value) << endl;
            return dp[value];
        }
        for (int i : money)
        {
            if (value - i >= 0)
                ans = min(ans, coins(value - i) + 1);
        }
        return dp[value] = ans;
    }
    int getThenumberOfcoins(int value)
    {
        int ans = coins(value);
        return ans == INT_MAX ? -1 : ans;
    }
};
