class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i = 1;
        int size = flowerbed.size();
        int ans = 0;
        vector<int> tmp(size + 2, 0);
        for (int j = 1; j <= size; j++)
        {
            tmp[j] = flowerbed[j - 1];
        }
        while (i <= size)
        {
            if (tmp[i] == 0 && tmp[i - 1] == 0 && tmp[i + 1] == 0)
            {
                tmp[i] = 1;
                ans++;
            }
            i++;
        }
        if (ans >= n)
            return true;
        return false;
    }
};

int main(void)
{
	Solution s;
	vector<int> vect;
	vect.push_back(1);
	vect.push_back(0);
	vect.push_back(0);
	vect.push_back(0);
	if (s.canPlaceFlowers(vect, 1))
		cout << "True\n";
	else
		cout << "False\n";
	return (0);
}
