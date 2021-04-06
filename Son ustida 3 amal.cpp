#include<iostream>
using namespace std;
int min(int a,int b)
{
    if(a>b) return b; else return a;
}
int main()
{
    int n;
    cin>>n;
     
int  a[n];
a[0]=0; 
a[1]=0;
 
int x,y,m;
 

for(int i=2;i<=n;i++)
{
if(i%2==0) x=a[i/2]; else x=1000000;    
if(i%3==0) y=a[i/3]; else y=1000000;    
m=a[i-1];   
a[i]=min(min(m,x),y)+1;
}


cout<<a[n];
 
}


// Son ustida 3 amal
// (Vaqt: 2 sek. Xotira: 64 Мб Murakkablik: 35%)
// N natural soni berilgan. Unda quyidagi amallar to'plamini bajarish mumkin.
// •	birni ayrish;
// •	uchga bo`lish, agar uchga karrali bo`lsa;
// •	ikkiga bo`lish, agar juft son bo`lsa.
// Amallardan birini bajargandan so'ng, olingan natijaga ham amallarni birini qo'llanilishi mumkin va bu natija 1 ga teng bo'lgunga qadar amalga oshiriladi.
// Kiruvchi ma`lumotlar
// INPUT.TXT faylida N natural son berilgan N (N ≤ 106).
// Chiquvchi ma`lumotlar
// OUTPUT.TXT da bir natijasiga olib keladigan eng kam amallar sonini chop eting.

