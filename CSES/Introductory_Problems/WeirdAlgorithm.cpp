#include<iostream>

using namespace std;

int main(void)
{
  long long n;

  cin >> n;
  while (true)
  {
    cout << n;
    if (n == 1)
      break ;
    if (n % 2)
      n = n * 3 + 1;
    else
      n /= 2;
    cout << " ";
  }
  return (0);
}
