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
 * @file stats.h 
 * @brief Header file for stats program.
 *
 * <Add Extended Description Here>
 *
 * @author Alan Arevalo
 * @date 03/07/2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(int max, int min, int mean, int median);
/**
 * @brief Prints max, min, mean and median of array.
 *
 * @param max - Maximum of array
 * @param min - Minimum of array
 * @param mean - Mean of array
 * @param median - Median of array
 */

void print_array(unsigned char *arr);
/**
 * @brief Prints array to the screen
 *
 * @param arr - Given array with data 
 */
int find_mean(unsigned char *arr);
/**
 * @brief Calculates mean value of array
 *
 * All values are added and then divided by the number of elements in the array.
 *
 * @param arr - Given array with data 
 *
 * @return Returns mean of values in array.
 */
int find_median(unsigned char *arr);
/**
 * @brief Calculates median value of array
 * 
 * Median value is calulated by determining first whether number of elements is even or odd. If even, middle of array and the value 
 * after is added and divided by 2. Otherwise middle of array is used.
 *
 * @param arr - Given array with data 
 *
 * @return Returns median of values in array.
 */
int find_maximum(unsigned char *arr);
/**
 * @brief Calculates maximum value of array
 *
 * Array is traversed and values are compared to find the largest of all values.
 *
 * @param arr - Given array with data 
 *
 * @return Returns maximum of values in array.
 */
int find_minimum(unsigned char *arr); 
/**
 * @brief Calculates minimum value of array
 *
 * Array is traversed and values are compared to find the smallest of all values.
 *
 * @param arr - Given array with data 
 *
 * @return Returns minimum of values in array.
 */
void sort_array(unsigned char *arr, int low, int high); 
/**
 * @brief Array is sorted from largest to smallest
 *
 * <Add Extended Description Here>
 *
 * @param arr - Given array with values.
 */

int partition(unsigned char *arr, int low, int high);

void swap (unsigned char* a, unsigned char* b);
#endif /* __STATS_H__ */
