// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <stdio.h>

void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j<=i){
				printf("%d ", j);
			}
		}
		printf("\n");
	}
}