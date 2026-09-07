class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool negative = (dividend < 0) ^ (divisor < 0);

        long long dvd = llabs((long long)dividend);
        long long div = llabs((long long)divisor);

        long long ans = 0;

        while (dvd >= div) {

            int count = 0;

            while (dvd >= (div << (count + 1))) {
                count++;
            }

            dvd -= (div << count);

            ans += (1 << count);
        }

        if (negative)
            ans = -ans;

        return ans;
    }
};