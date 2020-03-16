/** -*- coding: utf-8 -*-
*
* Jesse@FDU-VTS-MIA
* created @date: 2020-03-16 
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxValue(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        int dp[m][n] = {grid[0][0]};
        for(int i=1; i<m; ++i)
            dp[i][0] = dp[i-1][0] + grid[i][0]; 
        for(int j=1; j<n; ++j)
            dp[0][j] = dp[0][j-1] + grid[0][j];
        for(int i=1; i<m; ++i)
            for(int j=1; j<n; ++j)
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        return dp[m-1][n-1];
    }
};
int main(){
    
    return 0;
}