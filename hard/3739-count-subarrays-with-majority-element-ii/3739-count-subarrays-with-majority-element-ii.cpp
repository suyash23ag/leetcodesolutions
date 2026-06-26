    long long countMajoritySubarrays(vector<int>& nums, int target) {
    };
            return res;
        }
                idx -= idx & -idx;
            }
                res += bit[idx];
            while (idx > 0) {
            long long res = 0;
        long long query(int idx) {
            }
        }
                idx += idx & -idx;
                bit[idx] += val;
            while (idx <= n) {
        void update(int idx, int val) {
            bit.assign(n + 1, 0);
        }
        Fenwick(int sz) {
            n = sz;
    struct Fenwick {
        int n;
        vector<long long> bit;
class Solution {
public: