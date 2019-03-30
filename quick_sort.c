#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
void main()
{	
	int i;
	int *array;
	
	array = (int *)malloc(sizeof(int)*MAX_SIZE);

	for(i=MAX_SIZE-1; i>=0; i--){
		scanf("%d",&array[i]);
	}
	quick_sort(array ,0, MAX_SIZE-1);

	for(i=0; i<MAX_SIZE; i++){
		printf("%d\n",array[i]);
	}
	free(array);
}

void quick_sort(int *array, int MIN, int MAX)
{
	int min = MIN;
	int max = MAX-1;
	int compare, temp;
	int *array_temp;
	i = min;
	j = max;
	compare = array[1];
	array_temp = array;

	while(i != j){
		if(array_temp[i] > compare){
			temp = array_temp[1];
			array_temp[1] = array_temp[i];
			array_temp[i] = temp;
			
			if(array_temp[j] < compare){
				temp = array_temp[i];
				array_temp[i] = array_temp[j];
				array_temp[j] = temp;
				i++;
			}else if(array_temp[j] >= compare){
				j--;
			}
		}else if(array_temp[i] <= compare){
			i++;
		}
	}
	if((max - min) <1){
		return ;
	}
	quick_sort(&array[min], min, i);
	quick_sort(&array[i], i, max);
}









