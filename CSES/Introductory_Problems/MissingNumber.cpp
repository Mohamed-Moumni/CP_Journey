#include<iostream>

using namespace std;

int main(void)
{
  long long n;cin>>n;
  long long sum = 0;
  long long a;
  for (int i = 0; i < n - 1;i++)
  {
    cin >> a;
    sum += a;
  }
  cout << (n * (n + 1)) / 2 - sum << endl;
  return (0);
}
