//       1
//     2 1
//   3 2 1
// 4 3 2 1

#include <stdio.h>

void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=n; j>0; j--){
			if(j<=i){
				printf("%d ", j);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}