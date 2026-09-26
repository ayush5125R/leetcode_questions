class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int count=0;
        vector<int> SortedHe=heights;
        sort(SortedHe.begin(),SortedHe.end());

        for(int i=0;i<n;i++){
            if(heights[i]==SortedHe[i]){
                continue;
            }
            else{
                count++;
            }
            
            
        }
        return count;



        
    }
};