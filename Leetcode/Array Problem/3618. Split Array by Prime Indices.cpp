
class Solution {
public:
    vector<bool> isPrimeArr;

    // Precompute prime numbers up to n using Sieve of Eratosthenes
    void sieve(int n) {
        isPrimeArr.assign(n + 1, true);
        isPrimeArr[0] = isPrimeArr[1] = false;

        for (int i = 2; i * i <= n; ++i) {
            if (isPrimeArr[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrimeArr[j] = false;
                }
            }
        }
    }

    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        sieve(n);  // precompute primes up to n

        long long sumA = 0;
        long long sumB = 0;

        for (int i = 0; i < n; i++) {
            if (isPrimeArr[i])
                sumA += nums[i];
            else
                sumB += nums[i];
        }

        return abs(sumA - sumB);
    }
};
