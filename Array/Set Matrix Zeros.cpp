void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> temp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                temp[i][j] = matrix[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0 && temp[i][j]==0){
                    int upper=0,lower=0,left=0,right=0;
                    if(i>0){
                        upper =temp[i-1][j];
                        matrix[i-1][j]=0;
                    }
                    if(j>0){left = temp[i][j-1];
                        matrix[i][j-1]=0;
                    }
                    if(i<n-1){lower = temp[i+1][j];
                        matrix[i+1][j]=0;
                    }
                    if(j<m-1){right = temp[i][j+1];
                        matrix[i][j+1]=0;
                    }
                    matrix[i][j] = upper+lower+right+left;
                }
            }
        }
