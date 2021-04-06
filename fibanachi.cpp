#include<iostream>
using namespace std;
int f(int a){
 
if(a<3) return 1;
else return f(a-1)+f(a-2);
}
int main (){
    int n;
    cin>>n;
    if(n==0) cout<<0;
    else
    cout<<f(n);
}

// Fibonanchi soni
// (Vaqt: 1 sek. Xotira: 16 Мб Murakkablik: 16%)
// Fibonanchi sonlar ketma-ketligi a0, a1, ..., an, ..., bunda a0 = 0, a1 = 1, ak = ak-1 + ak-2 (k > 1).
// N – Fibonanchi sonini aniqlang.
// Kiruvchi ma`lumotlar
// INPUT.TXT faylida N butun son berilgan (0 ≤ N ≤ 30).
// Chiquvchi ma`lumotlar
// OUTPUT.TXT faylida N – Fibonanchi sonini chiqaring.

// Пример (Misol)
// №	INPUT.TXT	OUTPUT.TXT
// 1	7	13

//  
