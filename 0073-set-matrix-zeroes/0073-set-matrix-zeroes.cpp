class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>coordinates;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    coordinates.push_back({i,j});
                }
            }
        }
        for(int i=0;i<coordinates.size();i++){
            int row=coordinates[i][0];
            int col=coordinates[i][1];
            for(int i=0;i<n;i++){
                matrix[row][i]=0;
            }
            for(int i=0;i<m;i++){
                matrix[i][col]=0;
            }
        }
        
        

    }
};