class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> k=arr;
        int n=arr.size();
        

        for(int i=0;i<n;i++){
            k[i]=-1;
            for(int j=i+1;j<n;j++){
                if(arr[j]>k[i]){
                    k[i]=arr[j];
                }

            }
        }
        
        return k;
        
    }
};