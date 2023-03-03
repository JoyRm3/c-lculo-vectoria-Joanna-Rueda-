#include<iostream>
#include<cmath>
#define PI 3.14159
#define E 2.718281828459045235
#include <stdio.h>
using namespace std;
float x=0;
float y=0;
float r=0;
float z=0;
float teta=0;
float gra=0;
float rad=0;
float x1=0;
float Y1=0;
float z1=0;
float x2=0;
float y2=0;
float z2=0;
float î=0;
float î1=0;
float î2=0;
float j=0;
float j2=0;
float j3=0;
float k=0;
float k1=0;
float k2=0;
float n=0;
float teta1=0;
float r1=0; 
float e=0;
float Xm=0;
float Ym=0;
float p1=0;
float p2=0;
float f=0;
float f1=0;
float f2=0;
float f3=0;
float w=0;
float w1=0;
float w2=0;
float w3=0;
float U1=0;
float U2=0;
float U3=0;
float V=0;
float V1=0;
float V2=0;
float V3=0;
float x0=0;
float Y0=0;
float z0=0;
float d1=0;
float d2=0;
float d3=0;
float y3=0;
int recapol(float x, float y){
	r=sqrt((x*x)+(y*y));
	teta=atan(y/x);
	cout<<"("<<r<<","<<teta<<")";
	return 0;
}
	
int polarec (float r, float teta){
	x=r*cos(teta);
	y=r*sin(teta);
	cout<<"("<<x<<","<<y<<")";
	return 0;
}

int grarad (float gra){
	rad=(gra*PI)/180;
	cout<<"radianes:"<<rad<<endl;
}

int radgra(float rad){
	gra=(rad*180)/PI;
	cout<<"grados:"<<gra<<endl;
}

int distp1p2 (float x2, float x1, float y2, float Y1, float z2, float z1){
	float distp1p2=sqrt(((x2-x1)*(x2-x1))+((y2-Y1)*(y2-Y1))+((z2-z1)*(z2-z1)));
	cout<<"distancia entre puntos"<<distp1p2<<endl;
}

int multi (float r, float r1, float teta, float teta1){
	e=(r*r1);
	î=(teta-teta1);
	cout<<"("<<e<<","<<î<<")";
	return 0;
}

int divi (float r, float r1, float teta, float teta1){
	e=(r/r1);
	î=(teta-teta1);
	cout<<"("<<e<<","<<î<<")";
	return 0;
}

int expon (float r, float teta, float n){
	î=n*teta;
	e=(n*teta)*r;
	cout<<"exponente"<<"("<<î<<","<<e<<")"<<expon<<endl;
}

int Pm (float x1, float x2, float y1, float y2){
	Xm=(x1+x2)/2;
	Ym=(y1+y2)/2;
	cout<<"("<<Xm<<","<<Ym<<")";
	return 0;
}

int Puntm (float p1, float p2){
	float Puntm=(p1+p2)/2;
	cout<<"punto medio"<<Puntm<<endl;
}

int corpol (float r, float teta, float z){
	x=r*cos(teta);
	y=r*sin(teta);
	z=z;
	cout<<"C O contra Hipo -y-, C A abajo -x- y r hipo "<<"("<<x<<","<<y<<","<<z<<")"<<corpol<<endl;
}

int Pesca (float x, float y, float z){
	float Pesca=((x*x)+(y*y)+(z*z));
	cout<<"producto escalar"<<Pesca<<endl;
}

int Aumev (float f, float x, float y, float z){
	f1=(f*x);
	f2=(f*y);
	f3=(f*z);
	cout<<"("<<f1<<","<<f2<<","<<f3<<")"<<Aumev<<endl;
}

int Suvec (float U1, float U2, float U3, float V1, float V2, float V3){
	w1=(U1+V1);
	w2=(U2+V2);
	w3=(U3+V3);
	cout<<"("<<w1<<","<<w2<<","<<w3<<")"<<Suvec<<endl;
}

int Sumvec (float V1, float V2, float V3, float U1, float U2, float U3){
	w1=(V1+U1);
	w2=(V2+U2);
	w3=(V3+U3);
	cout<<"("<<w1<<","<<w2<<","<<w3<<")"<<Sumvec<<endl;
}

int Revec (float U1, float U2, float U3, float V1, float V2, float V3){
	w1=(U1-V1);
	w2=(U2-V2);
	w3=(U3-V3);
	cout<<"("<<w1<<","<<w2<<","<<w3<<")"<<Revec<<endl;
}

int Resvec (float V1, float V2, float V3, float U1, float U2, float U3){
	w1=(V1-U1);
	w2=(V2-U2);
	w3=(V3-U3);
	cout<<"("<<w1<<","<<w2<<","<<w3<<")"<<Resvec<<endl;
}

int Veput (float U1, float U2, float U3, float V1, float V2, float V3){
	w1=(U1*V1);
	w2=(U2*V2);
	w3=(U3*V3);
	cout<<"("<<w1<<","<<w2<<","<<w3<<")"<<Veput<<endl;
}

int Vesput (float V1, float V2, float V3, float U1, float U2, float U3){
	w1=(V1*U1);
	w2=(V2*U2);
	w3=(V3*U3);
	cout<<"("<<w1<<","<<w2<<","<<w3<<")"<<Vesput<<endl;
}

int Vecas (float w1, float w2, float w3){
    w1=(a2*b3)-(b2*b3)
    w2=-(a1*b3)-(b*a3)
    w3= (a2*b2)- (b*a2)
	
cout<<"<"<<w1<<","<<w2<<","<<w3<<">"<<endl;
}


int Pamrec (float x0, float Y0, float z0, float d1, float d2, float d3){
	x=x0*d1;
	y=Y0*d2;
	z=z0*d3;
	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}

int Norve (float U1, float U2, float U3){
	V1=sqrt((U1*U1)+(U2*U2)+(U3*U3));
	U1=U1/V1;
	U2=U2/V1;
	U3=U3/V1;
	cout<<"("<<U1<<","<<U2<<","<<U3<<")"<<Norve<<endl;
}

int Trip (float U1, float U2, float U3, float V1, float V2, float V3,float w1, float w2, float w3){
	f1=(V2*w3)-(w2*V3);
	f2=(V1*w3)-(w1*V3);
	f3=(V1*w2)-(w1*V2);
	y1=sqrt(U1*f1);
	y2=(U2*f2);
	y3=(U3*f3);
	cout<<"("<<y1<<","<<y2<<","<<y3<<")"<<Trip<<endl;
    }