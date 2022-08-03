#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
    int sum = 0;
    
    for (int j = 0; j < 1000 ; j++)
    {
        if (j % 3 == 0 || j % 5 == 0)
            sum += j;
    }
    cout << sum << "\n";
}
