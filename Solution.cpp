class Solution {
public:
    int pivotInteger(int n) {
        int total = n * (n + 1) / 2, cur = 0;
        for (int i = 1; i <= n; i++) {
            cur += i;
            int rem = total - cur;
            if (rem + i == cur)
                return i;
        }
        return -1;
    }
};
