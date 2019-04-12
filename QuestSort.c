#include<stdio.h>

//min:start 0   max:length - 1
void QuestSort(int *list, int left, int right)
{
	int i, j;
	int cmp;
	int temp;

	while(left!=right){
		cmp = list[left];
		i = left;
		j = right;

		while(i!=j){
			if(list[j]<cmp){
				list[i] = list[j];
				if(list[i]>cmp){
					list[j] = list[i];
				}else{
					i++;
				}
			}else{
				j--;
			}
		}
		list[i] = cmp;
		QuestSort(list, left, i);
		QuestSort(list, i, right);
	}

	return ;
}

void main()
{
	int i;
	int array[] = {0,8,7,6,8,5,6,4,4,2,1};
	int length = sizeof(array);

	QuestSort(array, 0, length-1);

	for(i=0; i<length; i++){
		prinf("%d\n", array[i]);
	}

	return ;
}

