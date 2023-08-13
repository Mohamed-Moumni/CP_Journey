#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
  long long n;cin>>n;
  vector<int> vec(n);
  long long ans = 0;

  for (int i = 0; i < n; i++)
    cin >> vec[i];
  for (int i = 0; i < n - 1; i++)
  {
    if (vec[i] > vec[i+1])
    {
      ans += vec[i] - vec[i+1];
      vec[i+1] = vec[i];
    }
  }
  cout << ans << endl;
  return (0);
}
