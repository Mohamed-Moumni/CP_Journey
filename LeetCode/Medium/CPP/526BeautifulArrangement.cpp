#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
    int n;cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        vec[i] = (i+1);
    }
    int ans = 0;
    do
    {
        int i = 0;
        while (i < n)
        {
            if ((vec[i] % (i +1) ) != 0 && ((i + 1) % vec[i]) != 0)
                break ;
            i++;
        }
        if (i == n)
            ans++;
    }while (next_permutation(vec.begin(), vec.end()));
    cout << ans << endl;
    return (0);
}