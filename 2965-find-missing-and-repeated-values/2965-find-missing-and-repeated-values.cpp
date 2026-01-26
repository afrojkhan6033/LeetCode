class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = grid.size();
        long long N = n * n;

        long long sumActual = 0, sumSqActual = 0;

        for (auto &row : grid) {
            for (int x : row) {
                sumActual += x;
                sumSqActual += (long long)x * x;
            }
        }

        long long S = N * (N + 1) / 2;
        long long S2 = N * (N + 1) * (2 * N + 1) / 6;

        long long diff = sumActual - S;
        long long sqDiff = sumSqActual - S2;

        long long sum = sqDiff / diff;

        long long a = (diff + sum) / 2;
        long long b = a - diff;

        return {(int)a, (int)b};
    }
};
