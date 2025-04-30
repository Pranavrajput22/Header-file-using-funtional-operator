#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

// Function declarations
int find_max(int arr[], int size);
int array_sum(int arr[], int size);
void reverse_array(int arr[], int size);

// Function pointer types
typedef int (*operation_ptr)(int[], int);
typedef void (*void_operation_ptr)(int[], int);

#endif
