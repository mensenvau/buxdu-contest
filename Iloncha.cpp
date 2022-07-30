#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int m,n,y,x;
    cin>>n>>m>>y>>x;
    if(y%2!=0) cout<<x+m*(y-1)-1;
             else  cout<<m-x+(y-1)*m;
           }

//            Iloncha
// (Vaqt: 1 sek. Xotira: 16 Мб Murakkablik: 16%)
// Quyidagi to`ldirish qoidasi orqali hosil bo`lgan N×M matritsani X – satr, Y- ustunga joylashgan elementni aniqlaydigan dasturni tuzing.
// 0	1	2	3
// 7	6	5	4
// 8	9	10	11
// Kiruvchi ma`lumotlar
// INPUT.TXT faylda N, M, Y, X (Y ≤ N ≤ 50; X ≤ M ≤ 50) sonlari berilgan. N – matritsa satrlar soni, M - matritsa ustunlar soni, izlanayotgan elementni Y va X – soni, matritsadagi satrlar va ustunlar soni
// Chiquvchi ma`lumotlar
// OUTPUT.TXT faylida izlanayotgan elementni chiqaring.
// Примеры (Misollar)
// №	INPUT.TXT	OUTPUT.TXT
// 1	3 4 2 3	5         ?
// 2	5 2 3 1	4         ?

//  
