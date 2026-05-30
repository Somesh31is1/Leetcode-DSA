class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int num: nums){
            freq[num]=freq[num]+1;
            //Automatically creates key as 'num' at its index
        }

        int n = nums.size();
        for(auto pair: freq){
            if(pair.second > (n/2)){
                return pair.first;
            }
        }
        return -1;
        
    }
};
