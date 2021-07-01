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
	int largest=arr[0],b=0,index,temp;
		for(int j=0;j<l;j++) {
			for(int i=b;i<l;i++) {
				if(arr[i]>=largest) {
					largest=arr[i];
					index=i;
					}
				}
			temp=arr[b];
			arr[b]=arr[index];
			arr[index]=temp;
			b++;
			largest=arr[b];
			}
		}
