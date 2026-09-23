class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        // code here
        int i=0;
        while(i<arr.size()){
            if(arr[i]==x){
                return i;
            }
            int diff=arr[i]-x;
            i=i+max(1,diff/k);
        }
        
        return -1;
        
    }
};
