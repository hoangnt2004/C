#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
char a[9][9];
int checkRow(int row){
	int temp[9]={0};
	for(int i = 0; i < 9; i++){
		if(a[row][i] != '.'){
			int num = a[row][i] - '0';
			if(temp[num-1] == 1){
				return 0;
			}
			temp[num -1] = 1;
		}
	}
	return 1;
}
int checkCol(int col){
	int temp[9] = {0};
	for(int i = 0;i < 9; i++){
		if(a[i][col] != '.'){
			int num = a[i][col] - '0';
			if(temp[num -1] == 1){
				return 0;
			}
			temp[num - 1] = 1;
		}
	}
	return 1;
}
int checkSok( ){
	for(int row = 0 ; row < 9; row += 3){
		for(int col =0; col <9; col += 3){
			int temp[9] = {0};
			for(int r = row ;r < row + 3;r++){
				for(int c = col; c< col + 3; c++){
				    if(a[r][c] != '.'){
				    	int num = a[r][c] - '0';
				    	if(temp[num-1] == 0){
				    		return 0;
						}
						temp[num - 1] = 1;
					}
					
				}
			}
		}

	}
	return 1;
}
int main(){
    for(int i = 0;i < 9; i++){
    	for(int j=0; j < 9; j++){
    		scanf(" %c", &a[i][j]);
		}
	}
	int check = 1;
	if(checkSok()==0){
		check = 0;
	}else
	{
		for(int i = 0;i < 9;i++){
		 if(checkRow(i)==0||checkCol(i)==0){
		 	check=0;
		 	break;
		 }
	}
	}
	
	if(check==1){
		printf("TRUE\n");
	}else{
		printf("FAlSE\n");
	}
}
