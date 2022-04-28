#include <stdio.h>
#define AL 5

int main() {
	int array_n[AL], i, temp;

	printf("Input the 5 members of the array:\n");
	for(i = 0; i <  AL; i++) {
		scanf("%d", &array_n[i]);
	}

	for(i = 0; i < AL; i++) {
		if(i < (AL/2)) {
			temp = array_n[i];
			array_n[i] = array_n[AL-(i+1)];
			array_n[AL-(i+1)] = temp;
		}
	}

	for(i = 0; i < AL; i++) {
		printf("array_n[%d] = %d\n", i, array_n[i]);
	}
	return 0;
}
