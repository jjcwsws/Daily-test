#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void ArrayPrint(int* a, int n);
void InsertSort(int* a, int n);
void ShellSort(int* a, int n);
void SelectSort(int* a, int n);

void Adjustdown(int* a, int n, int parent);
void Heapsort(int* a, int n);
void BubbleSort(int* a, int n);
// 快速排序hoare版本
int PartSort1(int* a, int left, int right);
// 快速排序挖坑法
int PartSort2(int* a, int left, int right);
// 快速排序前后指针法
int PartSort3(int* a, int left, int right);
void QuickSort(int* a, int left, int right);

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right);