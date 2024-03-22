#include<iostream>

using namespace std;

int main(void)
{
	long long t;cin>>t;
	long long a,b;
	while (t--)
	{
		cin >> a >> b;
		if (a == 0 and b== 0)
			cout << "YES\n";
		else if (a == 0 or b == 0)
			cout << "NO\n";
		else
		{
			if ((2 * b - a) >= 0 and (2 * a - b) >= 0 and (2 * b - a) % 3 == 0 and (2 * a - b) % 3 == 0)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
	return (0);
}
