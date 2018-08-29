///Ejercicio echo en clase 29/08/2018
#include <iostream>
using namespace std;
struct dato {
int dato1;
char dato2 [20];
};
struct dato var1;
struct dato*ptr;
 int main (){
ptr=&var1;///>>>>>>>>Esencial para la ejecucion
cout<<"   "<<&ptr<<endl;
cout<<"    "<<&var1;
cout<<"   \n"<<ptr;
///<<<<[ptr][][][][]>>><<<<<([][][][][])<<<<<     var1
///Los punteros apuntan a las direcciones


cout<<"\n Valor puntero int \n";
cin>>ptr->dato1;
cout<<" \n\t>>>>>>>>>>>>>>>"<<ptr->dato1;
cout<<" \n puntero"<<&ptr->dato1;
cout<<"\n valor"<<ptr->dato1;

cout<<"\n Valor puntero char\n";
cin>>ptr->dato2;
cout<<" \n\t>>>>>>>>>>>>>>>"<<ptr->dato2;
cout<<" \n puntero"<<&ptr->dato1;
cout<<"\n valor"<<ptr->dato1;

return 0;
}

