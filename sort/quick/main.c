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

void quickSort(int arr[], int l, int h)
{
    int val, i, j;

    if (l >= h)
        return;

    i = l;
    j = h;
    val = arr[i];

    while (i < j) {
        while (i < j && val < arr[j])
            j--;
        if (i < j) 
            arr[i++] = arr[j];

        while(i < j && val > arr[i])
            i++;
        if (i < j)
            arr[j--] =  arr[i];
    }
    arr[i] = val;
    
    quickSort(arr, l, i-1);
    quickSort(arr, j+1, h);
}

int main(int argc, char* argv)
{   
    int arr[] = {34, 90, 53, 32, 12, 45, 45};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);
    quickSort(arr, 0, n-1);
    printArr(arr, n);

    return 0;
}


/* vim: set ts=4 sw=4 sts=4 tw=100 */
