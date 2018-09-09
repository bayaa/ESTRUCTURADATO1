#include <iostream>
#include<conio.h>
using namespace std;
struct Tienda {
int costo;
char nombre [20];
struct Tienda *ptr;
} producto1, producto2, *cero;

 int main (){
    cero=&producto1;
    cero->ptr=&producto2;
    cout<<"costo del producto\n";
    cin>>cero->costo;
    cout<<"Nombre del producto 1";
    fflush(stdin);
    cin.getline(cero->nombre,20,'\n');
    cout<<"Costo producto2";
    cin>>cero->ptr->costo;
    cout<<"nombre del producto";
    fflush(stdin);
    cin.getline(cero->nombre,20,'\n');
    int totaldeproductoes=10;
    struct Tienda producto3;
    cero->ptr->ptr=&producto3;
    cout<<"costo del producto 3";
    cin>>cero->ptr->ptr->costo;
    cout<<" nombre del producto 3";
    fflush(stdin);
    cin.getline((cero+2)->nombre,20,'\n');
    cout<<"Direccion del cero"<<&cero<<endl;
    cout<<"direccion Tienda1"<<&producto1<<endl;
    cout<<"direccion Tienda2"<<&producto2<<endl;
    cout<<"costo que se guardo 1: "<<cero->costo<<endl;
    cout<<"nombre que se guardo 1: "<<cero->nombre<<endl;
    cout<<"costo que se guardo 2: "<<cero->ptr->costo<<endl;
    cout<<"nombre que se guardo 2: "<<cero->ptr->nombre<<endl;
    cout<<"nombre 3: "<<cero->ptr->ptr->nombre<<endl;
    cout<<"costo:   "<<cero->ptr->ptr->costo<<endl;
    cin.get();

return 0;
}
