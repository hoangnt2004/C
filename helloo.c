#include <stdio.h>
void bubblesort(int arr[], int size){
    for(int step = 0; step < size -1; step++){

		for(int i = 0; i < size - step - 1;i++){

			if(arr[i] > arr[i+1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
}
int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n;i++){
		scanf("%d", &arr[i]);
	}
	bubblesort(arr,n);
	for(int i = 0 ; i < n;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
