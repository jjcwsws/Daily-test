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