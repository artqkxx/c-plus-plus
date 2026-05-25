#include <iostream>
#include <ctime>
using namespace std;

int main() {
    /* 1 */
    srand(time(0));
    int arr1[4][5];
    cout << "Масив:\n";
    for (int i = 0;i < 4;i++) {
        for (int j = 0;j < 5;j++) {
            arr1[i][j] = rand() % 90 + 10;
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    int choice;
    cout << "Сортування (1/2): ";
    cin >> choice;
    if (choice == 1) {
        for (int j = 0;j < 5;j++) {
            for (int i = 0;i < 4 - 1;i++) {
                for (int k = 0;k < 4 - i - 1;k++) {
                    if (arr1[k][j] > arr1[k + 1][j]) {
                        int t = arr1[k][j];
                        arr1[k][j] = arr1[k + 1][j];
                        arr1[k + 1][j] = t;
                    }
                }
            }
        }
    }
}
else if (choice == 2) {
    int temp[20], idx = 0;
    for (int i = 0;i < 4;i++)
        for (int j = 0;j < 5;j++)temp[idx++] = arr1[i][j];
    for (int i = 0;i < 20 - 1;i++) {
        for (int j = 0;j < 20 - i - 1;j++) {
            if (temp[j] > temp[j + 1]) {
                int t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }
    idx = 0;
    for (int i = 0;i < 4;i++)
        for (int j = 0;j < 5;j++)arr1[i][j] = temp[idx++];
}
cout << "Результат:\n";
for (int i = 0;i < 4;i++) {
    for (int j = 0;j < 5;j++)cout << arr1[i][j] << " ";
    cout << endl;
}

/* 2
int mat[3][4]={{3,5,6,7},{12,1,1,1},{0,7,12,1}};
int rowSum[3]={0},colSum[4]={0},totalSum=0;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        rowSum[i]+=mat[i][j];
        colSum[j]+=mat[i][j];
        totalSum+=mat[i][j];}}
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++)cout<<mat[i][j]<<"\t";
    cout<<"|\t"<<rowSum[i]<<endl;}
cout<<"--------------------------------------------\n";
for(int j=0;j<4;j++)cout<<colSum[j]<<"\t";
cout<<"|\t"<<totalSum<<endl;
*/

/* 3
srand(time(0));
int M1[5][10],M2[5][5];
for(int i=0;i<5;i++){
    for(int j=0;j<10;j++)M1[i][j]=rand()%51;}
for(int i=0;i<5;i++){
    int idx=0;
    for(int j=0;j<10;j+=2){
        M2[i][idx++]=M1[i][j]+M1[i][j+1];}}
cout<<"M1:\n";
for(int i=0;i<5;i++){
    for(int j=0;j<10;j++)cout<<M1[i][j]<<"\t";
    cout<<endl;}
cout<<"M2:\n";
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++)cout<<M2[i][j]<<"\t";
    cout<<endl;}
*/

/* 4
int x,y,z,startVal;
cout<<"Розміри (X Y Z): ";
cin>>x>>y>>z;
cout<<"Число: ";
cin>>startVal;
int*** arr3=new int**[x];
for(int i=0;i<x;i++){
    arr3[i]=new int*[y];
    for(int j=0;j<y;j++)arr3[i][j]=new int[z];}
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        for(int k=0;k<z;k++){
            arr3[i][j][k]=startVal++;}}}
cout<<"Масив:\n";
for(int i=0;i<x;i++){
    cout<<"Зріз "<<i+1<<":\n";
    for(int j=0;j<y;j++){
        for(int k=0;k<z;k++)cout<<arr3[i][j][k]<<"\t";
        cout<<endl;}
    cout<<endl;}
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++)delete[] arr3[i][j];
    delete[] arr3[i];}
delete[] arr3;
*/

return 0;
}