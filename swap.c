#include <stdio.h>

void swap_max(int arr[],int l, int n) {
	int largest=0,index,temp;
	for(int i=n;i<l;i++) {
		if(arr[i]>largest) {
			largest=arr[i];
			index=i;
			}
		}
	temp=arr[n];
	arr[n]=arr[index];
	arr[index]=temp;
	}
	
void ssort(int arr[],int l) {
	int largest=0,index,temp;
	for(int i=0;i<l;i++) {
		if(arr[i]>largest) {
			largest=arr[i];
			index=i;
			temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
				}
			}
		}
