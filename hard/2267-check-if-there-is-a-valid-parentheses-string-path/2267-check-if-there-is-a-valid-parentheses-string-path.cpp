    if(i+1 < m) {
        if(solve(i + 1, j, openCount, grid))
        return t[i][j][openCount] =true;
    }
    //mode right 
    if(j+1 < n) {
        if(solve(i, j + 1, openCount, grid))
        return t[i][j][openCount] = true;
    }
    return t[i][j][openCount] = false;
}
    //mode down 
if(i == m-1 && j == n-1)
    return t[i][j][openCount] = (openCount == 0);
if(t[i][j][openCount] != -1) {
    return t[i][j][openCount];
}
     if(openCount < 0)
    return false;
bool solve(int i, int j, int openCount, vector<vector<char>> & grid) {
    openCount += (grid[i][j] == '(') ? 1: -1;
int m , n;
int t[101][101][201];
class Solution {
public: