#include "../header/cc.hpp"
#include <iostream>
#include <stack>
using namespace std;


int main()
{
    stack<int> money;
    cout << "enter the money: " << endl; 
    int value = 0;
    while (value!= -1)
    {
        cin >> value;
        money.push(value);
    }
    money.pop();
    cout << "enter the ammount: " << endl;
    int x;
    cin >> x;
    cc *coin = new cc(x, money);
    int result = coin->getThenumberOfcoins();
    cout << result << endl;
}