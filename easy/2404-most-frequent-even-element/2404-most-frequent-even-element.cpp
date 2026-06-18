    if(num %2==0){
        mp[num]++;
    }
}
int ans = -1;
int maxFreq = 0;
for(auto it : mp){
    int num = it.first;
    int freq = it.second;
    if(freq> maxFreq){
        maxFreq = freq;
        ans = num;
    }
    else if(freq== maxFreq && num<ans){
        ans = num;
    }
}
return ans;
        
for(int num: nums){
 unordered_map<int, int> mp;
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {