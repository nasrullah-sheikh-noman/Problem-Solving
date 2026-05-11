class Solution {
public:
    bool isBitSet(long long n, int i) {
        return (n & (1LL << i)) != 0;
        
    }
};