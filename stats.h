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
 * @file <stats.h> 
 * @brief Statistical analyses to data vector.
 * Analyze an array of unsigned char data items and report analytics on the 
 * maximum, minimum, mean, and median of the data set. The data set is ordered 
 * from large to small. All statistics should be rounded down to the nearest integer. 
 * The data should be printed to the screen in nicely formatted presentation.
 *
 * @author <Nahed Touati>
 * @date <04 February 2021>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


 unsigned char find_minimum(unsigned char *T, int N);
/**
 * @brief Calculate array data minimum value.
 *
 * Given an array of data and a length, returns the minimum.

 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @returns The data minimum value
 */



   unsigned char find_maximum(unsigned char *T, int N);
/**
 * @brief Calculate array data maximum value.
 *
 * Given an array of data and a length, returns the maximum.

 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @returns The data maximum value
 */

   unsigned char find_mean(unsigned char *T, int N);
/**
 * @brief Calculate array data mean value.
 *
 * Given an array of data and a length, returns the mean.

 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @returns The data mean value
 */

 unsigned char find_median(unsigned char *T, int N);
/**
 * @brief Calculate array data median value.
 *
 * Given an array of data and a length, returns the median.

 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @returns The data median value
 */

 void print_statistics(unsigned char min,unsigned char max,unsigned char mean,unsigned char median);
/**
 * @brief Prints array to screen.
 *
 * Given an array of data and a length, prints the array to the screen.
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @returns void
 */ 
 void print_array(unsigned char *T, int N);
/**
 * @brief Print data array statistics.
 *
 * A function that prints the statistics of an array including minimum, maximum, 
 * mean, and median.
 *
 * @param median 	Median value
 * @param mean 	 	Mean value	
 * @param maximum 	Maximum value	
 * @param minimum 	Minimum value	
 *
 * @returns void
 */

 unsigned char sort_array(unsigned char *T, int N);
/**
 * @brief Calculate array data mean value.
 *
 * Given an array of data and a length, sorts the array from 
 * largest to smallest. (The zeroth Element should be the largest 
 * value, and the last element (n-1) should be the smallest value).
 *
 * @param data 	Char data array
 * @param len 	Array length	
 *
 * @returns void
 */
 


#endif /* __STATS_H__ */
