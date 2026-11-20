class Solution {
    public: 
    vector<vector<int>> subsets (vector<int>& nums){
        vector<vector<int>> result = {{}};

        for(int num: nums) {
            int size = result.size();
            for(int i=0; i<size; i++){
                vector<int> copy = result[i];
                copy.push_back(num);
                result.push_back(copy);
            }
        }
        return result;
    }
};