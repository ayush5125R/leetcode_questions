class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> SquareArr=nums;
        int n=SquareArr.size();

        for(int i=0; i<n;i++){
            SquareArr[i]=nums[i]*nums[i];
        }

        sort(SquareArr.begin(),SquareArr.end());

        return SquareArr;



        
    }
};