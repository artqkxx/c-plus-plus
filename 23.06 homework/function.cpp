#include "function.h"
using namespace std;

void fillInt(int arr[], int sz) {
    for(int i=0;i<sz;i++) arr[i]=rand()%100;
}
void showInt(int arr[], int sz) {
    for(int i=0;i<sz;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int minInt(int arr[], int sz) {
    int mn=arr[0];
    for(int i=1;i<sz;i++) if(arr[i]<mn) mn=arr[i];
    return mn;
}
int maxInt(int arr[], int sz) {
    int mx=arr[0];
    for(int i=1;i<sz;i++) if(arr[i]>mx) mx=arr[i];
    return mx;
}
void sortInt(int arr[], int sz) {
    for(int i=0;i<sz-1;i++)
        for(int j=0;j<sz-i-1;j++)
            if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
}
void editInt(int arr[], int sz, int idx, int val) {
    if(idx>=0&&idx<sz) arr[idx]=val;
}