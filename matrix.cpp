#include <iostream>
using namespace std;



//in function column is compursory
bool linearsearch(int mat[][3],int rows, int cols,int keys){
for(int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){
          if(mat[i][j]==keys){
            cout << "pair index" << i <<" " << j <<endl;
            return true;

          }
       }
}
cout << -1 <<endl;
return false;
}

int maxrowssum(int mat[][3],int rows,int cols){
  int maxsum =INT_MIN;
  for(int i=0;i<rows;i++){
    int rowsumi =0;
    for(int j=0;j<cols;j++){
        rowsumi += mat[i][j];
    }
    maxsum = max(maxsum,rowsumi);
  }
  return maxsum;
}

int maxcolssum(int mat[][3],int rows, int cols){
   int maxsum= INT_MIN;
   for(int i=0;i<cols;i++){
    int jcol=0;
    for(int j=0;j<rows;j++){
        jcol += mat[j][i];
    }
    maxsum = max(maxsum,jcol);
   }
   return maxsum;
}

int diagonalSum(int mat[][3],int rows,int cols){
    int totalSum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           if(i==j){
            totalSum += mat[i][j];
           }
           else if(j == cols-1-i){
            totalSum += mat[i][j];
           }
        }
    }
    return totalSum;
}

int diagonalSumOptimal(int mat[][3],int rows,int cols){
    int totalSumOp=0;
    for(int i=0;i<rows;i++){
        totalSumOp += mat[i][i];
        if(i != rows-i-1){
            totalSumOp += mat[i][rows-1-i];
        }
    }
    return totalSumOp;
}
int main(){
    //array
    int arr[5] ={1,2,3,4,5};
    //2d array
    int matrix[4][3] ={{1,2,3},{4,5,6},{7,8,9}};
    int rows = 4;
    int cols = 3;
    //2d vector
    vector<vector<int>> vectormatrix ={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // int matrix[4][3]; //rows=>vectormatrix.size();columns=vectormatrix[i].size();
    vector<vector<int>> vectormat ={{1,2,3},{4,5,6,10,11},{7,8,9},{10,11,12}};
    // (it is possible to add any numbers of element in 2 d vector because of dyanmic nature/memeory)
    
    
   
 // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout << "Enter matrix\n";
    //         cin >> matrix[i][j] ;
    //     }
    // }

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //  cout << endl;
   

int target =8;
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if((matrix[i][j]) == 8){
                cout << i << j << endl;
             }
        }
        
     }
    // 1 2 3 
    // 4 5 6 
    // 7 8 9 
    // 10 11 12 
    // 4*4 matrix

    cout << linearsearch(matrix,rows,cols,target) << endl;//it exit
    
    cout << "maximum rows sum " << maxrowssum(matrix,rows,cols) << endl;//it exit
   
    cout << "maximum cols sum " << maxcolssum(matrix,rows,cols) << endl;//it exit
    cout << "Diagoanal primary as well as secondary sum " <<diagonalSum(matrix,rows,cols) << endl;
    cout << "Diagoanal primary as well as secondary sum Optimal " <<diagonalSumOptimal(matrix,rows,cols) << endl;
   
cout << "Vector 2 d matrix iteration" << endl;
   
   for(int i=0;i<vectormatrix.size();i++){
    for(int j=0;j<vectormatrix[i][j];j++){
        cout << vectormatrix[i][j] << " ";
    }
    cout << endl;
   }
   cout << "Vector 2 d matrix iteration of any numbers element" << endl;
    for(int i=0;i<vectormat.size();i++){
    for(int j=0;j<vectormat[i][j];j++){
        cout << vectormat[i][j] << " ";
    }
    cout << endl;
   }
    return 0;
}