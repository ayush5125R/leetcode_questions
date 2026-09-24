class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        vector<vector<int>> ans ;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        map<vector<int>,int> mp ; 
        for(int i = 0 ; i < n-3;i++){
            for(int j = i+1;j<n-2;j++){
                int l = j+1;
                int r = n-1;
                while(l<r){
                    int sum = arr[i] + arr[j] + arr[l] + arr[r];
                    if(sum > target){
                        r -- ;

                    }
                    else if(sum < target){
                        l++;
                    }
                    else {
                        vector<int> temp = { arr[i] , arr[j] , arr[l] , arr[r]};

                        if(mp.find(temp) == mp.end()){
                            ans.push_back(temp);
                            mp[temp] ++;
                        }
                        l++;
                        r--;
                        }
                    }
                }
            }


        return ans ;


    }
};