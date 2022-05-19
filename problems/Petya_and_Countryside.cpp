#include<iostream>
#include<string>
#include<vector>

using namespace std;

void	left_road(vector<long> tab, long index, long *res);
void	right_road(vector<long> tab, long index, long *res, long n);

void	solve(vector<long> tab, long n)
{
	vector<long> result(n);
	long res;
	long max = 0;

	for (int i = 0; i < n; i++)
	{
		res = 1;
		left_road(tab, i, &res);
		right_road(tab, i, &res, n);
		result[i] = res;
	}
	max = result[0];
	for (int i = 0; i < n; i++)
	{
		if (result[i] > max)
		{
			max = result[i];
		}
	}

	cout << max << "\n";
}

void	left_road(vector<long> tab, long index, long *res)
{
	long i = index - 1;
	long check;

	check = tab[index];
	while (i >= 0)
	{
		if (check >= tab[i])
		{
			check = tab[i];
			(*res)++;
		}
		else
			break ;
		i--;
	}
}

void	right_road(vector<long> tab, long index, long *res, long n)
{
	long i = index + 1;
	long check;

	check = tab[index];
	while (i < n)
	{
		if (check >= tab[i])
		{
			check = tab[i];
			(*res)++;
		}
		else
			break ;
		i++;
	}
}


int main(void)
{
	long n;

	cin >> n;
	vector<long> tab(n);
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
	}
	solve(tab, n);
	return (0);
}
