class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> newArr(m+n);

        int i=0;
        int j=0;
        int k=0;

        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                newArr[k]=nums1[i];
                i++;
            }
            else{
                newArr[k]=nums2[j];
                j++;
            }
            k++;
        }
            while(i<m){
                newArr[k]=nums1[i];
                i++;
                k++;

            }
            while(j<n){
                newArr[k]=nums2[j];
                j++;
                k++;

            }
            for(int p=0;p<m+n;p++){
                nums1[p]=newArr[p];
            }
            
        
        

    }
};