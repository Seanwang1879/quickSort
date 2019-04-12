#include<stdio.h>

void QueckSort(int *list, int left, int right)
{
	int i, j;
	iny cmp;
	
	while(left!=right){
		i = left;
		j = right;
		cmp = list[i];

		while(i!=j){
			if(list[j]>cmp){
				j--;
			}
			list[i] = list[j];
			
			if(list[i]<cmp){
				i++;
			}
			list[j] = list[i];
		}
		list[i] = cmp;
		
		QueckSort(list, left, i);
		QueckSort(list, i, right);
	}
	
	return ;
}

void main()
{
	int array[] = {9,0,5,6,8,7,4,6,2,3};
	int length = sizeof(array)-1;

	QueckSort(array, 0, length);
	
	return ;
}
