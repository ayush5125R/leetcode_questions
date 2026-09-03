class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        vector<vector<int>>prefix=mat;
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                prefix[i][j]+=prefix[i][j-1];


            }
            
        }
        for(int j=0;j<n;j++){
            for(int i=1;i<m;i++){
                prefix[i][j]+=prefix[i-1][j];
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int sum=0;
                int r1 = max(i-k,0);
                int c1 = max(j-k, 0 );
                int r2 = min(i+k,m-1);
                int c2 = min(j+k,n-1);
                sum=prefix[r2][c2];
                if(r1>0){
                    sum = sum - prefix[r1-1][c2];
                }
                if(c1>0){
                    sum = sum - prefix[r2][c1-1];
                }
                if(c1> 0 && r1>0){
                    sum = sum + prefix[r1-1][c1-1];
                }
                ans[i][j]=sum;

                

            }
        }
        return ans;
    }
};