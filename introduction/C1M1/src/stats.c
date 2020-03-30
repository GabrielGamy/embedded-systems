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
 * @file stats.c
 * @brief This file defined the functions implementations for the Week 1 Application Assignment (Statistical analytics on a dataset)
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
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
}

/* Add other Implementation File Code Here */
void print_array(unsigned char * data, const int size) {
  printf("==== PRINT ARRAY ====\n");
  for(int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  }
  printf("\n==== END PRINT ARRAY ====\n");
}
