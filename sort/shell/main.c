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

void sort(int arr[], int n, int i, int gap)
{
    int j, k, tmp;

    for (j = i + gap; j < n; j += gap) {
        if (arr[j] < arr[j-gap]) {
            tmp = arr[j];
            k = j - gap;
            while (k >= 0 && arr[k] > tmp) {
                arr[k+gap] = arr[k];
                k -= gap;
            }
            arr[k+gap] = tmp;
        }
    }
}

void shellSort(int arr[], int n)
{
    int i, gap;

    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = 0; i < gap; i++) {
            sort(arr, n, i, gap);
        }
    }
}

int main(int argc, char* argv)
{   
    int arr[] = {34, 90, 53, 32, 12, 45, 45};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);
    shellSort(arr, n);
    printArr(arr, n);

    return 0;
}

/* vim: set ts=4 sw=4 sts=4 tw=100 */
