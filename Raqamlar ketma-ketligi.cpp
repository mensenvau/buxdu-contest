#include <iostream>
using namespace std;
int main()
{

long long n,s=1,x=0,m,l;

cin>>n;

while(s*2<n) s=s*2;
m=s;l=n-s;

while(s>0)
{

if(l>s/2){ x++;l-=s/2;}s/=2;}
if(x%3==2) cout<<"2";
if(x%3==1) cout<<"1"; 
if(x%3==0)cout<<"0";

}



// Raqamlar ketma-ketligi
//  (Vaqt: 1 sek. Xotira: 16 Мб Murakkablik: 35%)
// Raqamlar ketma-ketligi quyidagi ko`rinishda 011212201220200112… quriladi: aavval 0 yoziladi, keyin quyidagi amallar bajariladi: Oldin yozilgan qismni olib, 0 ga 1, 1 ga 2, 2 ga 0 bilan almashtirib oldin yozilgan qismni davomiga qo`shiladi. Shu jarayon yana davom ettirilaveradi.
// Berilgan N natural son uchun, N-tartibda turgan raqamni aniqlaydigan dastur tuzish talab qilinadi.
// Kiruvchi ma`lumotlar
// INPUT.TXT faylda N natural son berilgan (1 ≤ N ≤ 2147483647).
// Chiquvchi ma`lumotlar
// OUTPUT.TXT faylida izlanayotgan raqamni aniqlang.
// Примеры (Misollar)
// №	INPUT.TXT	OUTPUT.TXT
// 1	1	0
// 2	10	2

//  
