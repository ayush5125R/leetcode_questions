class Solution {
public:
    int thirdMax(vector<int>& arr) {
        int n=arr.size();
        long long first=LLONG_MIN;
        long long second=LLONG_MIN;
        long long third =LLONG_MIN;

        for(int x=0;x<n;x++){
            if(arr[x]==first || arr[x]==second || arr[x]==third){
                continue;
            }
            if(arr[x]>first){
                third=second;
                second=first;
                first=arr[x];
            }
            else if(arr[x]>second){
                third=second;
                second=arr[x];
            }
            else if(arr[x]>third){
                third=arr[x];
            }
        }
        if(third==LLONG_MIN){
            return first;
        }
        return third;
        
    }
};