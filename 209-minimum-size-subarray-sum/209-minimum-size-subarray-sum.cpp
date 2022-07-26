class Solution {
public:
    int minSubArrayLen(int t, vector<int>& s) {
        int c=INT_MAX,i=0,j=0;int sum=0;
        while(j<s.size()){
            sum+=s[j];
          
                while(sum>=t){
                     c=min(c,j-i+1);
                    sum-=s[i++];
                }
            
            j++;
        }
        if(c==INT_MAX)return 0;
        return c;
    }
};