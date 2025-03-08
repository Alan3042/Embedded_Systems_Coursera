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
 * @file stats.c 
 * @brief Analyzes and sorts an array of unsigned char data items
 *
 * Reports analytics on max, min, mean, and median. Reorders the set from large to small.
 *
 * @author Alan Arevalo
 * @date 03-05-2025
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int max = find_maximum(test);
  int min = find_minimum(test);
  int mean = find_mean(test);
  int median = find_median(test);
  sort_array(test, (sizeof(test) / sizeof(test[0])));
  /* Statistics and Printing Functions Go Here */
  print_statistics(max, min, mean, median);
  print_array(test);
}

void print_statistics(int max, int min, int mean, int median) {

	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	printf("Mean: %d\n", mean);
	printf("Median: %d\n", median);
}

void print_array(unsigned char *arr) {
	for (int i = 0; i < SIZE; i++)
		printf("%d, ", arr[i]);
	printf("\n");
}

int find_mean(unsigned char *arr) {
	int mean;

	for (int i = 0; i < SIZE; i++) {
		mean += arr[i];
	}

	mean = mean / SIZE;
	
	return mean;
}

int find_median(unsigned char *arr) {
	int median;
	
	if (SIZE%2 == 0)
		median = (arr[SIZE/2] + arr[SIZE/2+1])/2;
	else
		median = arr[SIZE/2+1];
	return median;
}

int find_maximum(unsigned char *arr) {
	int max;

	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

int find_minimum(unsigned char *arr) {
	int min;

	for (int i = 0; i < SIZE; i++) {
		if (min > arr[i])
			min = arr[i];
	}
	
	return min;
}

//Selection sort
void sort_array(unsigned char *arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		int max = i;
		for (int j = i + 1; j < n; j++)
			if (arr[j] > arr[max])
				max = j;
		if (max != i) {
			int temp = arr [max];
			arr[max] = arr[i];
			arr[i] = temp;
		}
	}
	       
}
