#include <Sort.h>

//all indexes are 0 based.

void Sort::mergeSort(int[] A, int startIndex, int endIndex)
{
	if(startIndex < endIndex)
	{
		int midIndex = (startIndex + endIndex) / 2;
		mergeSort(A, startIndex, midIndex);
		mergeSort(A, midIndex+1, endIndex);
		mergeSortHelper(A, startIndex, midIndex, endIndex);
	}
}

void Sort::mergeSortHelper(int[] A, int startIndex, int midIndex, int endIndex)
{
	int leftArraySize = midIndex - startIndex + 1;
	int rightArraySize = endIndex - midIndex;
	
	int* leftArray = new int[leftArraySize];
	int* rightArray = new int[rightArraySize];
	for(int i=0, k=startIndex; k<=midIndex; i++, k++)
	{
		leftArray[i] = A[k];
	}
	for(int j=0, k=midIndex+1; k<=endIndex; j++, k++)
	{
		rightArray[j] = A[k];
	}

	for(int i=0, j=0, k=startIndex; k<=endIndex; k++)
	{
		if( i < leftArraySize && j < rightArraySize && leftArray[i] < rightArray[j])
		{
			A[k] = leftArray[i];
			i++;
		}
		else if(j < rightArraySize) {
			A[k] = rightArray[j];
			j++;
		}
		else if(i < leftArraySize) {
			A[k] = leftArray[i];
			i++;
		}
	}
}
