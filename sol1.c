#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void** my2DAlloc(int m,int n);
void my2DFree(void** ptr,int m);

int main()
{
 /* ?\n;||(or) e &&(and)*/

	int m = 3;
	int n = 4;
	int** matrix = (int**) my2DAlloc(m,n);
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			matrix[i][j] = i+j;
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	my2DFree(matrix,n);

 return 0;
}

void** my2DAlloc(int m,int n){

	void** ptr = malloc(sizeof(void*)*m);
	for(int i = 0;i < n;i++){
		ptr[i] = malloc(sizeof(void)*n);
	}
	return ptr;
}

void my2DFree(void** ptr,int n){
	for(int i = 0;i < n;i++){
		free(ptr[i]);
	}
	free(ptr);
}

