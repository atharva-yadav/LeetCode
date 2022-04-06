class Solution
{
public:
    int threeSumMulti(vector<int> &arr, int target)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int ans = 0;
        int mod = 7 + 1e9;
        for (int i = 0; i < n - 2; i++)
        {
            int sum = target - arr[i];
            if (sum < 0)
                break;
            int pt1 = i + 1, pt2 = n - 1;
            while (pt1 < pt2)
            {
                if (arr[pt1] + arr[pt2] == sum)
                {
                    if (arr[pt1] == arr[pt2])
                    {
                        int temp = pt2 - pt1 + 1;
                        ans = (ans + (temp * (temp - 1)) / 2) % mod;
                        break;
                    }
                    int cnt1 = 1, cnt2 = 1;
                    pt1++, pt2--;
                    while (arr[pt1] == arr[pt1 - 1])
                        pt1++, cnt1++;
                    while (arr[pt2] == arr[pt2 + 1])
                        pt2--, cnt2++;
                    ans = (ans + cnt1 * cnt2) % mod;
                }
                else if (arr[pt1] + arr[pt2] > sum)
                    pt2--;
                else
                    pt1++;
            }
        }
        return ans;
    }
};