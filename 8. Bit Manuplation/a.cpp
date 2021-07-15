#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearBit(int n, int pos)
{
    return (n & (~(1 << pos)));
}

int updateBit(int n, int pos, int value)
{
    n = clearBit(n, pos);
    return n | (value << pos);
}

int main()
{
    int n = 5, i = 1;
    //cout<<getBit(n,i)<<endl;
    //cout<<setBit(n,i)<<endl;
    //cout<<clearBit(n,i)<<endl;
    cout << updateBit(n, i, 1) << endl;
    return 0;
}