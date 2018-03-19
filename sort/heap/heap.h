/***************************************************************************
 * 
 * Copyright (c) 2018 Baidu.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file heap.h
 * @author jiong(jiong@baidu.com)
 * @date 2018/03/19 16:52:42
 * @version $Revision$ 
 * @brief 
 *  
 **/
#ifndef HEAP_H
#define HEAP_H

void printArr(int arr[], int n);
void maxHeapInsert(int arr[], int size);
void maxHeapRemove(int arr[], int n);
void minHeapInsert(int arr[], int size);
void minHeapRemove(int arr[], int n);

#endif  // HEAP_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
