#include <iostream>
#include <math.h>
#include <string>
#include <cmath>
using namespace std;

float odpor(float U,float P,float I){
 if (U!=0&&I!=0){
   float R = U/I; return R;}
   else if (U!=0&&P!=0){
   float R = (U*U)/P; return R;}
   else{
   float R = P/(I*I);
   return R;}
}
float napeti(float R,float P,float I){
if (R!=0&&I!=0){
   float U = R*I; return U;}
   else if (R!=0&&P!=0){
   float U = sqrt(R*P); return U;}
   else{
   float U = P/I;
   return U;}
}
int proud(float R,float P,float U){
if (R!=0&&U!=0){
   float I = U/R; return I;}
   else if (R!=0&&P!=0){
   float I = sqrt(P/R); return I;}
   else{
   float I = P/U;
   return I;}
}
float vykon(float R,float U,float I){
if (R!=0&&U!=0){
   float P = (U*U)/R; return P;}
   else if (R!=0&&I!=0){
   float P = (I*I)*R; return P;}
   else{
   float P = U*I;
   return P;}
}

int main()
{
float R,U,I,P;
cout <<"zadejte R "<< endl;
cin >> R;
cout <<"zadejte U "<< endl;
cin >> U;
cout <<"zadejte I "<< endl;
cin >> I;
cout <<"zadejte P "<< endl;
cin >> P;
if  (R==0){
 R=odpor(U,P,I);
}
if  (U==0){
 U=napeti(R,P,I);
}
if  (I==0){
 I=proud(R,P,U);
}
if  (P==0){
 P=vykon(R,U,I);
}
cout <<"R je: " << R << " ohm" << endl;
cout <<"U je: " << U << " V" << endl;
cout <<"I je: " << I << " A" << endl;
cout <<"P je: " << P << " W" << endl;


return 0;
}


