        if(board[i][col]== 'Q'){
            return 0;
        }
     }
      //check left diagonal upwards
     for(int i = row-1, j = col-1; i >= 0 && 
     j >= 0; i--, j--){
        if(board[i][j] == 'Q') {
            return false;
        }
     }
      for(int i = row-1, j = col+1; i >= 
      0 && j < N; i--, j++){
        if(board[i][j] == 'Q') {
            return false;
        }
     }
     return true;
}
void solve(vector<string>& board, int row) {
    if(row >= N){
        result.push_back(board);
        return;
    }
    for(int col = 0; col < N; col++){
        if(isValid(board, row, col)) {
            board[row][col] = 'Q';