#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void addCol(int**& arr, int r, int& c, int pos) {
    int** tmp=new int*[r];
    for(int i=0;i<r;i++){
        tmp[i]=new int[c+1];
        int ni=0;
        for(int j=0;j<=c;j++){
            if(j==pos) tmp[i][j]=99;
            else tmp[i][j]=arr[i][ni++];}}
    for(int i=0;i<r;i++) delete[] arr[i];
    delete[] arr; arr=tmp; c++;
}

int main() {
    /* 1 */
    string names[5];
    cout<<"5 прізвищ: ";
    for(int i=0;i<5;i++) cin>>names[i];
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(names[j]>names[j+1]){
                string t=names[j]; names[j]=names[j+1]; names[j+1]=t;}}}
    cout<<"Результат:\n";
    for(int i=0;i<5;i++) cout<<names[i]<<endl;

    /* 2
    srand(time(0));
    int r2=4,c2=4;
    int** a2=new int*[r2];
    cout<<"Масив:\n";
    for(int i=0;i<r2;i++){
        a2[i]=new int[c2];
        for(int j=0;j<c2;j++){
            a2[i][j]=rand()%5;
            cout<<a2[i][j]<<"\t";}
        cout<<endl;}
    int validRows=0;
    for(int i=0;i<r2;i++){
        bool hasZero=false;
        for(int j=0;j<c2;j++){
            if(a2[i][j]==0){hasZero=true;break;}}
        if(!hasZero) validRows++;}
    int** tmp2=new int*[validRows];
    int nRow=0;
    for(int i=0;i<r2;i++){
        bool hasZero=false;
        for(int j=0;j<c2;j++){
            if(a2[i][j]==0){hasZero=true;break;}}
        if(!hasZero){
            tmp2[nRow]=new int[c2];
            for(int j=0;j<c2;j++) tmp2[nRow][j]=a2[i][j];
            nRow++;}
        delete[] a2[i];}
    delete[] a2; a2=tmp2; r2=validRows;
    cout<<"Результат:\n";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++) cout<<a2[i][j]<<"\t";
        cout<<endl; delete[] a2[i];}
    delete[] a2;
    */

    /* 3
    int r3=3,c3=3,p3;
    int** a3=new int*[r3];
    cout<<"Масив:\n";
    for(int i=0;i<r3;i++){
        a3[i]=new int[c3];
        for(int j=0;j<c3;j++){ a3[i][j]=i+j+1; cout<<a3[i][j]<<"\t"; }
        cout<<endl;}
    cout<<"Позиція: "; cin>>p3;
    addCol(a3,r3,c3,p3);
    cout<<"Результат:\n";
    for(int i=0;i<r3;i++){
        for(int j=0;j<c3;j++) cout<<a3[i][j]<<"\t";
        cout<<endl; delete[] a3[i];}
    delete[] a3;
    */

    return 0;
}