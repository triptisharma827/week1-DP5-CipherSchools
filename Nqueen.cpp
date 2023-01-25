class Solution {
public:
    // helper-function-1
    bool canBePlaced(vector<string>& arr, int x, int y){
        // checking in left-right-line
        for (int i = 0; i < arr.size(); i++) {
            if (arr[x][i] == 'Q') {return false;}
        }
        // checking in top-bottom-line
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i][y] == 'Q') {return false;}
        }
        // checking in top-right-diagonal
        int a = x;
        int b = y;
        while( (a < arr.size())  &&  (b > 0) ){
            if (arr[a][b] == 'Q') {return false;}
            a++;
            b--;
        }
        // checking in bottom-right-diagonal
        a = x;
        b = y;
        while( (a < arr.size())  &&  (b < arr.size()) ){
            if (arr[a][b] == 'Q') {return false;}
            a++;
            b++;
        }
        // checking in top-left-diagonal
        a = x;
        b = y;
        while( (a >= 0)  &&  (b >= 0) ){
            if (arr[a][b] == 'Q') {return false;}
            a--;
            b--;
        }
        // checking in bottom-left-diagonal
        a = x;
        b = y;
        while( (a >= 0 )  &&  (b < arr.size()) ){
            if (arr[a][b] == 'Q') {return false;}
            a--;
            b++;
        }
        return true;
    }

    // helper-function-2
    void nqueen(vector<vector<string>>& vec, vector<string>& arr, int row = 0){
        if(row == arr.size()){
            vec.push_back(arr);
            return;
        }

        for(int i=0 ; i<arr.size() ; i++){
            if(canBePlaced(arr, row, i)){
                arr[row][i] = 'Q';
                nqueen(vec, arr, row+1);
                arr[row][i] = '.';
            }
        }
    }
    
    // main-function
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> vec;
        // creating the vector with initial value as '.'
        vector<string> arr;
        for(int i=0 ; i<n ; i++){
            string str;
            for(int j=0 ; j<n ; j++){
                str.push_back('.');
            }
            arr.push_back(str);
        }
        nqueen(vec, arr);
        return vec;
    }
};