﻿#include <iostream>

void printArr(int* arr, int lenArr = 0);

int main() {
    int arr[2] = { 0, 1 };
    printf("%d", sizeof(arr));
    printf("%s ", "Enter the amount of either 0 1 you want to be printed : ");
    printArr(arr);


    return 0;
}

void printArr(int arr[], int lenArr) {
    for (int i = 0; i < sizeof(arr) / 4; i++) {
        printf("%d ", arr[i]);
    }
 }