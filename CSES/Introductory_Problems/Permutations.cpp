#include<iostream>

using namespace std;

int main(void)
{
  long long n;cin>>n;
  if (n == 1)
  {
    cout << n << endl;
    exit(0);
  }
  if (n <= 3)
      cout << "NO SOLUTION" << endl;
  else
  {
    if (n % 2 == 0)
    {
      for (int i = n - 1; i > 0;i=i-2)
        cout << i << " ";
      for (int i = n; i > 2; i=i-2)
        cout << i << " ";
      cout << "2\n";
    }
    else
    {
      for (int i = n - 2; i > 0;i=i-2)
        cout << i << " ";
      for (int i = n - 1; i > 0; i=i-2)
        cout << i << " ";
      cout << n << "\n";
    }
  }
  return (0);
}
