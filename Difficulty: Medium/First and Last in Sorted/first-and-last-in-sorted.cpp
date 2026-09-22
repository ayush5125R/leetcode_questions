class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int n=arr.size();
        int first=-1;
        int last=-1;
        
        int l=0;
        int h=n-1;
        
        while(l <=h){
            int mid=l+(h-l)/2;
            
            if(arr[mid]==x){
                first=mid;
                h=mid-1;
            }
            else if(arr[mid]<x){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        l = 0;
        h = n - 1;

        while (l <= h) {
            int mid = l + (h-l)/ 2;

            if (arr[mid] == x) {
                last = mid;
                l = mid + 1;
            }
            else if (arr[mid] < x) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }

        return {first, last};

        
        
        
        // code here
        
    }
};