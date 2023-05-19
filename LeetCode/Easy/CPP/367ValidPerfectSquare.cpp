class Solution {
public:
    bool isPerfectSquare(int num)
    {
        double l = 1, r = num;
        while (l <= r)
        {
            double mid = l + (r - l) / 2;
            if (floor(mid) * floor(mid) == num)
                return true;
            if (mid * mid > (double)num)
                r = floor(mid - 1);
            else
                l = floor(mid + 1);
        }
        return (false);
    }
};

int main(void)
{
    Solution s;

    if (s.isPerfectSquare(16))
        cout << "True\n";
    else
        cout << "False\n";
    return (0);
}