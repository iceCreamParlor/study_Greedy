#include <cstdio>
#include <iostream>
#define MAX 51

using namespace std;
int mat[MAX][MAX], ans[MAX][MAX];
int result;

void compute(int row, int col){
	for(int i=0 ; i< 3; i++){
		for(int j=0 ; j<3 ; j++){
			mat[row+i][col+j] = 1-mat[row+i][col+j];
		}
	}
}
int main(){
	freopen("input.txt", "r", stdin);
	int row, col, check=1;
	cin >> row >> col;
	
	for(int i=0 ; i< row ; i++){
		for(int j= 0; j< col ; j++ ){
			scanf("%1d", &mat[i][j]);
		}
	}
	for(int i=0 ; i< row ; i++){
		for(int j= 0; j< col ; j++ ){
			scanf("%1d", &ans[i][j]);
		}
	}
	for(int i=0 ; i+3 <= row; i++){
		for(int j=0 ; j+3 <= col; j++){
			if(mat[i][j] != ans[i][j])
				compute(i, j); result++;
		}
	}
	for(int i=0 ; i< row ; i++){
		for(int j= 0; j< col ; j++ ){
			if(mat[i][j] != ans[i][j])
				check = -1;
		}
	}
	if(check==-1) cout << check << endl;
	else cout << result << endl;
	return 0;
}	