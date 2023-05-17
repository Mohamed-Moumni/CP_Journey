// #include<iostream>
// #include<vector>

// using namespace std;

// int main(void)
// {
//     int n = 2000000;
//     vector<bool> is_prime(n+1, true);
//     is_prime[0] = is_prime[1] = false;
//     for (int i = 2; i <= n; i++) {
//         if (is_prime[i] && (long long)i * i <= n) {
//             for (int j = i * i; j <= n; j += i)
//                 is_prime[j] = false;
//         }
//     }
//     int sum = 0;
//     for (int i = 2; i < n; i++)
//     {
//         if (is_prime[i])
//         {
//             sum += i;
//             cout << i << endl;
//         }
//     }
//     cout << sum << endl;
//     return (0);
// }

