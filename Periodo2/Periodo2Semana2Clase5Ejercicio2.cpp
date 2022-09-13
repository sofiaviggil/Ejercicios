#include<iostream>
using namespace std;
#include<conio.h>
//Prototipo de la función mayorde
int mayorde(int a,int b,int c);
//Definiciones de funciones
main ( ){
int a,b,c;//variables locales de funcionmain
cout<<"Ingrese tres valores enteros (a,b y c):"<<endl;
cin>>a>>b>>c;
//Llamada de la funcion mayorde, directamente en el flujo salida de cout
cout<<"El numero mayor es: "<<mayorde(a,b,c)<<endl;
getch();
}//fin de main()
//Definicion de la funcion mayorde
int mayorde(int a,int b,int c){
if((a>b)&&(a>c)) return(a);
if((b>a)&&(b>c)) return(b);
if((c>a)&&(c>b)) return(c);
if((a==b)&&(b==c)){
cout<<"Los 3 numeros son iguales entre si"<<endl;
return(a);
}
}// fin funcion mayorde
