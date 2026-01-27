class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        if (pivot != -1) {
            for (int j = n - 1; j > pivot; j--) {
                if (nums[j] > nums[pivot]) {
                    swap(nums[j], nums[pivot]);
                    break;
                }
            }
        }
         int left = pivot + 1;
        int right = n - 1;
        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[n-1-i]>nums[n-1]){
        //         swap(nums[n-1-i],nums[n-1]);
        //             for(int j = n-i; j<nums.size(); j++){
        //                 int smallest = j;
        //                 for(int z=j+1; z<nums.size(); z++){
        //                     if(nums[smallest]>nums[z]){
        //                         smallest = z;
        //                     }
        //                 }
        //                 swap(nums[j],nums[smallest]);
        //             }
                
        //     }
        //     n--;
        // }
    }
};