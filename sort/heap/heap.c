/***************************************************************************
 * 
 * Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/

/**
 * @file maxHeap.c
 * @author jiong(jiong@baidu.com)
 * @date 2018/03/19 15:31:28
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>
#include "heap.h"

void printArr(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }

    printf("\n");
}

void maxHeapInsert(int arr[], int size)
{
    int i = (size - 1) / 2;
    int j = size;
    int tmp;

    while(j > 0) {

        if (arr[j] > arr[i]) {
            tmp = arr[i];
            arr[i] =  arr[j];
            arr[j] = tmp;
        } else {
            break;
        }

        j = i;
        i = (i - 1) / 2;
    }
}

void maxHeapRemove(int arr[], int n)
{
    int l = 1, i = 0;
    int tmp;

    if (n <= 0)
        return;

    tmp = arr[i];
    arr[i] = arr[n-1];
    arr[n-1] = tmp;

    while (l < n - 1) {
        if (l+1 < n -1 && arr[l] < arr[l+1]) {
            l++;
        }

        if (arr[i] >= arr[l]) {
            break;
        } else {
            tmp = arr[i];
            arr[i] = arr[l];
            arr[l] = tmp;
            
            i = l;
            l = 2 * l + 1;
        }
    }
}

void minHeapInsert(int arr[], int size)
{
    int i = (size - 1) / 2;
    int j = size;
    int tmp;

    while(j > 0) {

        if (arr[j] <= arr[i]) {
            tmp = arr[i];
            arr[i] =  arr[j];
            arr[j] = tmp;
        } else {
            break;
        }

        j = i;
        i = (i - 1) / 2;
    }
}

void minHeapRemove(int arr[], int n)
{
    int i = 0;
    int l = 2 * i + 1;
    int tmp;

    if (n <= 0)
        return;

    tmp = arr[i];
    arr[i] = arr[n-1];
    arr[n-1] = tmp;

    while (l < n - 1) {
        if (l + 1 < n -1 && arr[l] >= arr[l+1]) {
            l++;
        }

        if (arr[i] <= arr[l]) {
            break;
        } else {
            tmp = arr[i];
            arr[i] = arr[l];
            arr[l] = tmp;
            
            i = l;
            l = 2 * l + 1;
        }
    }

}

/* vim: set ts=4 sw=4 sts=4 tw=100 */
