#include<iostream>
#include<string>

using namespace std;

int main(void)
{
    string S;cin>>S;

    int index = -1;
    for (int i=0;i<S.size();i++)
    {
        if (S[i] == 'a')
            index = i;
    }
    if (index != -1)
        index++;
    cout << index << endl;
}