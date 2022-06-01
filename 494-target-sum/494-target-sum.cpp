class Solution {
 public:
  
    int findTargetSumWays(vector<int>& s, int t) {
        int n=s.size(),l=0;
        if(s.size()==1)return abs(s[0])==abs(t);
        
                 for(auto i:s)l+=i; 
       
              int k=(l+t)/2;
        if((l+t)%2||abs(l)<abs(t))return 0;
        int dp[n+1][k+1];
          for(int i=0;i<=n;i++){
              for(int j=0;j<=k;j++){
                  if(i==0)dp[i][j]=0;
                  else if(j==0) dp[i][j]=1;
              }}
        dp[0][0]=1;
               for(int i=1;i<=n;i++){
              for(int j=0;j<=k;j++){
                   if(s[i-1]<=j)
                  {
                      dp[i][j]=dp[i-1][j]+dp[i-1][j-s[i-1]];
                  }
                  else
                      dp[i][j]=dp[i-1][j];
              }
          } 
        return dp[n][k];
    }
};