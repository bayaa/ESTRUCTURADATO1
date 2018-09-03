#include <iostream>
using namespace std;
struct dato {
int dato1;
char dato2 [20];
};
/// con el operador ->
struct variable {
int variable1;
char variable2 [20];
struct dato dir_variable;

};
struct dato var1;
struct dato*ptr;
 int main (){
     struct variable cero;
     struct variable *ptr;
     ptr= &cero;

///////////////////////////////////////////////////////////           ////////// /////        /////// ///////       //////
cout<<"Dame el valor de la variable"<<endl;
 cin>>ptr->dir_variable.dato1;

cout<<"  >>>>>"<<ptr->dir_variable.dato1;

return 0;
}
/*/ tarea
struct dato ¨*puntero
en la parte de abajo cfreamos varios datos en main(){
}
creamos un apuntador a al estructura
dato [1] dato [3]...dato1
*/

