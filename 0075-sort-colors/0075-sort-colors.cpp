class Solution {
public:
    void sortColors(vector<int>& nums) {
        int xarray[3] = {0};
        for(int i=0; i<nums.size(); i++){
            xarray[nums[i]]++;
        }
        int index = 0;
        for(int z = 0; z<3; z++){
            for(int j=xarray[z]; j>0; j--){
                nums[index] = z;
                index++;
            }
        }
    }
};