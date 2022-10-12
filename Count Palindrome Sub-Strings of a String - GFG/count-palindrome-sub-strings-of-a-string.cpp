//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends


int CountPS(char S[], int N)
{
    //code here
    int dp[N][N], ctr = 0;
    memset(dp,0,sizeof(dp));
    for(int gap=0; gap<N; gap++){
        for(int i=0,j=gap; j<N; i++,j++){
            if(gap == 0){
                dp[i][j] = 1;
            }
            else if(gap == 1){
                if(S[i] == S[j]){
                    dp[i][j] = 1;
                    ctr+=1;
                }
                else{
                    dp[i][j] = 0;
                }
            }
            else{
                if(S[i] == S[j] and dp[i+1][j-1] == 1){
                    dp[i][j] = 1;
                    ctr+=1;
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
    }
    return ctr;

}