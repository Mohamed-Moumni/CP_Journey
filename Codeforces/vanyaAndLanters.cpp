#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

int main(void)
{
    long long n,l;

    cin >> n >> l;
    vector<double> vect(n);

    for (int i = 0; i < n; i++)
        cin >> vect[i];
    sort(vect.begin(), vect.end());
    double ans = 0;
    double beginOrEnd = 0;
    if (vect[0] != 0)
        beginOrEnd = vect[0];
    if (vect[n - 1] != l)
    {
        if (l -vect[n - 1] > beginOrEnd)
            beginOrEnd = l - vect[n - 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (((vect[i + 1] - vect[i]) / 2) > ans)
            ans = ((vect[i + 1] - vect[i]) / 2);
    }
    if (ans > beginOrEnd)
        cout << setprecision(10) << fixed << ans << endl;
    else
        cout << setprecision(10) << fixed << beginOrEnd << endl;
    return (0);
}