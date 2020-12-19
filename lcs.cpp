int lcs(int a, int b, string x, string y) {
    int dp[a+1][b+1];
    for (int i=0 ; i<=a ; i++)
        dp[i][0] = 0 ;
    for (int i=0 ; i<=b ; i++)
        dp[0][i] = 0 ;
    for (int j=1 ; j<=b ; j++) {
        for (int i=1 ; i<=a ; i++) {
            if(x[i-1] == y[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else 
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[a][b];
}
