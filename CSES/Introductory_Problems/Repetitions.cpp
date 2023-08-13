#include<iostream>

using namespace std;

int main(void)
{
  string s;cin>>s;
  int size = s.size();
  int ans = 0;
  int max = 1;
  int i = 0;
  while(i < size - 1)
  {
    if (s[i] == s[i+1])
    {
      max++;
    }
    else
    {
      if (ans < max)
          ans = max;
      max = 1;
    }
    i++;
  }
  if (ans < max)
    ans = max;
  cout << ans << endl;
  return (0);
}
