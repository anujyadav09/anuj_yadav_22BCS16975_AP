class Solution {
    public void moveZeroes(int[] nums) {
        int n =nums.length;
        for(int i=0;i< n-1;i++){
             for(int j=0;j< n-1;j++){
            if(nums[j]==0){
                int a= nums[j];
                nums[j]=nums[j+1];
                nums[j+1]= a; 
            }
       }}
    }
}