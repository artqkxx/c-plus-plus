#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <ctime>
using namespace std;

int main() {
    /* 1 */
    srand(time(0));
    string p;
    cout<<"Пароль: ";
    cin>>p;
    vector<char> v(p.begin(),p.end());
    bool low=false,up=false,dig=false,sp=false,same=true;
    for(size_t i=0;i<v.size();i++){
        if(islower(v[i]))low=true;
        else if(isupper(v[i]))up=true;
        else if(isdigit(v[i]))dig=true;
        else sp=true;
        if(i>0&&v[i]!=v[i-1])same=false;}
    bool ok=true;
    if(v.size()<6||same)ok=false;
    if((low&&!up&&!dig&&!sp)||(up&&!low&&!dig&&!sp)||(dig&&!low&&!up&&!sp))ok=false;
    if(v.size()>6&&low&&up&&dig&&sp)ok=true;
    if(ok){
        cout<<"Надійний\n";}
    else{
        cout<<"Ненадійний\n";
        string sym="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
        vector<char> gen;
        gen.push_back("abcdefghijklmnopqrstuvwxyz"[rand()%26]);
        gen.push_back("ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand()%26]);
        gen.push_back("0123456789"[rand()%10]);
        gen.push_back("!@#$%^Layout*"[rand()%12]);
        while(gen.size()<8){
            gen.push_back(sym[rand()%sym.length()]);}
        for(size_t i=0;i<gen.size();i++){
            int r=rand()%gen.size();
            swap(gen[i],gen[r]);}
        cout<<"Новий: ";
        for(size_t i=0;i<gen.size();i++)cout<<gen[i];
        cout<<endl;}

    /* 2
    char rep='y';
    while(rep=='y'||rep=='Y'){
        vector<char> b(9,' ');
        int turns=0,win=0;
        char cur='X';
        while(turns<9&&win==0){
            cout<<"=======\n";
            for(int i=0;i<9;i+=3)cout<<"|"<<(b[i]==' '?char('1'+i):b[i])<<"|"<<(b[i+1]==' '?char('2'+i):b[i+1])<<"|"<<(b[i+2]==' '?char('3'+i):b[i+2])<<"|\n";
            cout<<"=======\n";
            int m;
            cout<<cur<<" (1-9): ";
            cin>>m;m--;
            if(m<0||m>8||b[m]!=' '){cout<<"Помилка\n";continue;}
            b[m]=cur;turns++;
            int w[8][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
            for(int i=0;i<8;i++){
                if(b[w[i][0]]==cur&&b[w[i][1]]==cur&&b[w[i][2]]==cur)win=(cur=='X'?1:2);}
            cur=(cur=='X'?'O':'X');}
        cout<<"=======\n";
        for(int i=0;i<9;i+=3)cout<<"|"<<b[i]<<"|"<<b[i+1]<<"|"<<b[i+2]<<"|\n";
        cout<<"=======\n";
        if(win==1)cout<<"Переміг X\n";
        else if(win==2)cout<<"Переміг O\n";
        else cout<<"Нічия\n";
        cout<<"Ще раз? (y/n): ";
        cin>>rep;}
    */

    return 0;
}