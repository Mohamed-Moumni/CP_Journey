#include<iostream>
#include<vector>
#include<algorithm>
#include<string>


using namespace std;

int main(void)
{
    long t,n;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> str;
        long mid = (n/2);
        int i = mid;
        long res = 0;
        while (str[mid] == str[i] && i < n)
        {
            res++;
            i++;
        }
        i = mid - 1;
        while (str[mid] == str[i] && i >= 0)
        {
            res++;
            i--;
        }
        cout << res << "\n";
    }
}