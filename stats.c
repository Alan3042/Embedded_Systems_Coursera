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
  /* Statistics and Printing Functions Go Here */
}

void print_statistics(int max, int min, int mean, int median) {

}

void print_array(unsigned char *arr) {

}

int find_mean(unsigned char *arr) {
	
}

int find_median(unsigned char *arr) {

}

int find_maximum(unsigned char *arr) {

}

int find_minimum(unsigned char *arr) {
	
}

void sort_array(unsigned char arr) {

}
