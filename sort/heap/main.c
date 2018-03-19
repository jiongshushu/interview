/***************************************************************************
 * 
 * Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file main.c
 * @author jiong(jiong@baidu.com)
 * @date 2018/03/19 16:52:36
 * @version $Revision$ 
 * @brief 
 *  
 **/
#include <stdio.h>
#include "heap.h"

int main(int argc, char *argv[])
{
    int i;
    int arr[] = {34, 90, 53, 32, 12, 45, 45};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);
    for (i = 0; i < n; i++) {
        minHeapInsert(arr, i);
    }
    printArr(arr, n);

    for (i = n; i >= 0; i--) {
        minHeapRemove(arr, i);
    }
    printArr(arr, n);

    return 0;
}
/* vim: set ts=4 sw=4 sts=4 tw=100 */
