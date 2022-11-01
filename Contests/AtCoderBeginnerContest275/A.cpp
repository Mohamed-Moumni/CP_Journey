#include<iostream>
using namespace std;
int main(void)
{
    int n;cin>>n;
    int index,max = 0;
    int a;
    for (int i=0;i<n;i++)
    {
        cin >> a;
        if (a > max)
        {
            max = a;
            index =i;
        }
    }
    cout << index + 1 << endl;
}