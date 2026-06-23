#pragma once
#include <iostream>
#include <ctime>

void fillInt(int arr[], int sz);
void showInt(int arr[], int sz);
int minInt(int arr[], int sz);
int maxInt(int arr[], int sz);
void sortInt(int arr[], int sz);
void editInt(int arr[], int sz, int idx, int val);

#ifdef INTEGER
#define fill fillInt
#define show showInt
#define getMin minInt
#define getMax maxInt
#define sortArr sortInt
#define edit editInt
#endif