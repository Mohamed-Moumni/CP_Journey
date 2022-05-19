#include<iostream>
#include<algorithm>
#include<vector>

#define nl "\n"
using namespace std;

int main(void)
{
    int n;
    int t;
    cin >> n;
    while (n--){
        cin >> t;
        vector<int> alpha;
        for (int i = 2; i * i <= t; i++){
            if (t % i == 0)
            {
                int power = 0;
                while (t % i == 0)
                {
                    power++;
                    t = t / i;
                }
                alpha.push_back(power);
            }
        }
    if (t != 1)
        alpha.push_back(1);
    int result = 1;
    for(int i : alpha)
        result *= (i + 1);
    cout << result << nl;
    }
}