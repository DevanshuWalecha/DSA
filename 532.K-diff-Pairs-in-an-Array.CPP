class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int counts = 0;
        int flag = INT_MIN;
        if (k != 0) {
            nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
            for (int i = 0; i < nums.size(); i++) {
                for (int j = i+1; j < nums.size(); j++) {
                    if (nums[j]-nums[i] == k) {
                        counts++;
                        break;
                    }
                }
            }
        }else {
           map<int,int> m;
            for(int i = 0 ; i < nums.size(); ++i){
                if(m[nums[i]]==1) ++counts;
                ++m[nums[i]];
            }
            return counts;
        }
        return counts;
    }
};
