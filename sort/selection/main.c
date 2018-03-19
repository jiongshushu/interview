/***************************************************************************
 * 
 * Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file main.c
 * @author jiong(jiong@baidu.com)
 * @date 2018/03/02 02:54:54
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>

void printArr(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }

    printf("\n");
}

void selectionSort(int arr[], int n)
{
    int i, j, min, tmp;

    for (i = 0; i < n; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }
}

int main(int argc, char* argv)
{   
    int arr[] = {34, 90, 53, 32, 12, 45, 45};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);
    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}


/* vim: set ts=4 sw=4 sts=4 tw=100 */
