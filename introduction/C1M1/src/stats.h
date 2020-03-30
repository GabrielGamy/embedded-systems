/******************************************************************************
 * Copyright (C) 2017 by Gabriel Gamy - Software Developer
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
 * @brief This file defined the prototypes for the Week 1 Application Assignment (Statistical analytics on a dataset)
 *
 * In this programming assignment you will create a simple application that performs statistical analytics on a dataset. 
 * This assignment will help you get re-oriented with c-programming syntax and host machine compilation. 
 * We begin by setting up a version control repository on your local machine. 
 * You will then develop and test your code there. When complete, you will upload a zip of your repository to Coursera. 
 * Please read through all instructions before starting.
 *
 * @author Gabriel Gamy
 * @date 2020-03-29
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param data - A unsigned char pointer to an n-element data array
 * @param size - An unsigned integer as the size of the array
 *
 * @return void
 */
void print_statistics(unsigned char * data, const int size);

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * @param data - A unsigned char pointer to an n-element data array
 * @param size - An unsigned integer as the size of the array
 *
 * @return void
 */
void print_array(unsigned char * data, const int size);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 * @param data - A unsigned char pointer to an n-element data array
 * @param size - An unsigned integer as the size of the array
 *
 * @return int
 */
int find_median(unsigned char * data, const int size);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * @param data - A unsigned char pointer to an n-element data array
 * @param size - An unsigned integer as the size of the array
 *
 * @return int
 */
int find_mean(unsigned char * data, const int size);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * @param data - A unsigned char pointer to an n-element data array
 * @param size - An unsigned integer as the size of the array
 *
 * @return int
 */
int find_maximum(unsigned char * data, const int size);

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 * @param data - A unsigned char pointer to an n-element data array
 * @param size - An unsigned integer as the size of the array
 *
 * @return int
 */
int find_minimum(unsigned char * data, const int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. 
 *
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 * 
 * @param data - A unsigned char pointer to an n-element data array
 * @param size - An unsigned integer as the size of the array
 *
 * @return int
 */
int find_minimum(unsigned char * data, const int size);

#endif /* __STATS_H__ */
