#include <iostream>

void print(int arr[], int size)
{
	for(int i = 0; i < size; ++i){
		std::cout << arr[i] << " "; 
	}
	std::cout << std::endl;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void equalizer(int arr[], int size)
{
	while(true){
		int even_num = 0;
		int odd_num = 1;
		while(even_num < size && arr[even_num] % 2 == 0){
			even_num += 2;
		}
		while(odd_num < size && arr[odd_num] % 2 == 1){
			odd_num += 2;
		}
		if(even_num < size && odd_num < size){
			swap(&arr[even_num], &arr[odd_num]);
		} else { 
			break;
		}
	}
}

int main()
{
	int arr[] = {2, 8, 0, 3, 6, 4, 5, 7, 9, 1};
	int size = sizeof(arr) / sizeof(arr[0]);
	print(arr, size);
	equalizer(arr, size);
	print(arr, size);
	return 0;
}
