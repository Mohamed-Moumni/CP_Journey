#include<iostream>
#include<vector>
#include<map>
#include<pair>

using namespace std;

int main(void)
{
    int a,b;
    map<pair<int,int>, int>mp;
    for (int i=0;i<3;i++)
    {
        cin >> a >> b;
        mp.push_back(make_pair(a,b), a-b);
    }
    int step = 0;
    for (int i=0;i<100;i++)
    {
        if (step < 2)
        {
            if ()
        }
        else
        {

        }
        if (step == 2)
            step = 0;
        else
            step++;
    }
}