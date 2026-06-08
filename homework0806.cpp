#include <iostream>
using namespace std;

int main() {
    /* 1 */
    int A1[7], B1[7], C1[14];
    cout << "Масив A (7): ";
    for (int i = 0;i < 7;i++)cin >> A1[i];
    cout << "Масив B (7): ";
    for (int i = 0;i < 7;i++)cin >> B1[i];
    int idx1 = 0;
    for (int i = 0;i < 7;i++)C1[idx1++] = A1[i];
    for (int i = 0;i < 7;i++)C1[idx1++] = B1[i];
    cout << "C1: ";
    for (int i = 0;i < 14;i++)cout << C1[i] << " ";
    cout << endl;

    /* 2
    int A2[7],B2[7],C2[7],idx2=0;
    cout<<"Масив A (7): ";
    for(int i=0;i<7;i++)cin>>A2[i];
    cout<<"Масив B (7): ";
    for(int i=0;i<7;i++)cin>>B2[i];
    for(int i=0;i<7;i++){
        bool inB=false,inC=false;
        for(int j=0;j<7;j++){
            if(A2[i]==B2[j]){inB=true;break;}}
        if(inB){
            for(int j=0;j<idx2;j++){
                if(A2[i]==C2[j]){inC=true;break;}}
            if(!inC)C2[idx2++]=A2[i];}}
    cout<<"C2: ";
    for(int i=0;i<idx2;i++)cout<<C2[i]<<" ";
    cout<<endl;
    */

    /* 3
    int A3[7],C3[7],idx3=0,choice;
    cout<<"Масив (7): ";
    for(int i=0;i<7;i++)cin>>A3[i];
    cout<<"Видалити (1-парні, 2-непарні): ";
    cin>>choice;
    for(int i=0;i<7;i++){
        if(choice==1&&A3[i]%2!=0)C3[idx3++]=A3[i];
        else if(choice==2&&A3[i]%2==0)C3[idx3++]=A3[i];}
    cout<<"Результат: ";
    for(int i=0;i<idx3;i++)cout<<C3[i]<<" ";
    cout<<endl;
    */

    /* 4
    int A4[8];
    cout<<"Масив (8 чисел): ";
    for(int i=0;i<8;i++)cin>>A4[i];
    int* ptr=A4;
    for(int i=0;i<8;i+=2){
        int t=*(ptr+i);
        *(ptr+i)=*(ptr+i+1);
        *(ptr+i+1)=t;}
    cout<<"Результат: ";
    for(int i=0;i<8;i++)cout<<A4[i]<<" ";
    cout<<endl;
    */

    return 0;
}