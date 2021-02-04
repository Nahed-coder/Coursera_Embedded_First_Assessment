/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief Statistical analyses to data vector.
 * Analyze an array of unsigned char data items and report analytics on the 
 * maximum, minimum, mean, and median of the data set. The data set is ordered 
 * from large to small. All statistics should be rounded down to the nearest integer. 
 * The data should be printed to the screen in nicely formatted presentation.
 *
 * @author <Nahed Touati>
 * @date <03 February 2021>
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)




unsigned char find_minimum(unsigned char *T, int N){
	unsigned char min=T[0];
	int i;

	for(i=1;i<N;i++)
	{
	if (T[i]<min)
		min=T[i];
	}
	return min;

}
unsigned char find_maximum(unsigned char *T, int N){
	unsigned char max=T[0];
	int i;
	for(i=1;i<N;i++)
	{
	if(T[i]>max)
		max=T[i];
	}
	return max;
}
unsigned char find_mean(unsigned char *T, int N){
	unsigned char s=0,m=0,s1=0;
	int i;
	for(i=1;i<N;i++)
	{
	m+=i;
	s1+=T[i];
	s+=s1/m;
	}
	return s;
}
unsigned char find_median(unsigned char *T, int N){
	unsigned char med=0,M=0;

	M=N%2;
	med=N/2;
	if (M==0)
		return T[med];
	else
		return T[med+1];

}

void print_statistics(unsigned char min,unsigned char max,unsigned char mean,unsigned char median){

	printf("Minimum: %u \n", min);
	printf("Maximum: %u \n",max);
	printf("Mean: %u \n",mean);
	printf("Median: %u \n",median);
}

void print_array(unsigned char *T, int N)
{int i;
printf("[ ");
for(i=0;i<N;i++)
	printf("%u \t",T[i]);
printf(" ]\n");
}


unsigned char sort_array(unsigned char *T, int N){
int i,j;
unsigned char aux;
	for(i=0;i<N-1;i++){
	for(j=i+1;j<N;j++){
		if(T[j]>T[i])
{
			aux=T[i];
			T[i]=T[j];
			T[j]=aux;
}
	}
}
}

unsigned char main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

unsigned char min;  
unsigned char max;  
unsigned char mean;  
unsigned char median;  
/* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
 
min=find_minimum(test,SIZE);
max=find_maximum(test,SIZE);
mean=find_mean(test,SIZE);
median=find_median(test,SIZE);

print_statistics(min,max,mean,median);
printf("unordered array : ");
print_array(test,SIZE);

sort_array(test,SIZE);
printf("ordered array : ");
print_array(test,SIZE);

}



