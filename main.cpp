#include <iostream>
#include <string.h>

using namespace std;

//1. Basicos estrcuturas
struct Persona{
    char nombre[50];
    int edad;
}
persona1,persona2
;

//2. Estrcuturas anidada

struct info_direction{
    char direction[30];
    char ciudad[20];
    char departamento[20];
};

struct empleado{
    char nombre[20];
    struct info_direction dir_empleado;
    double salario;
}empleados[2];

//ejercicio 1 Datos de un corredor

struct corredor{
    char nombre[30];
    int edad;
    char sexo[20];
    char club [30];

}c1;


//Ejercicio 2 Datos de 3 alumnos y comparar su promedio

struct alumno{
    char nombre[30];
    int edad;
    float promedio;
}A[3];

int main()
{
    int i = 1;
    while(i != 0){
        cout<<"Escoje una opcion"<<endl;
        cout<<"1. Basicos estrcuturas"<<endl;
        cout<<"2. Estrcuturas anidada"<<endl;
        cout<<"3. Ejercicio 1 Datos de un corredor"<<endl;
        cout<<"4. Ejercicio 2 Datos de 3 alumnos y comparar su promedio"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Escoje: ";cin>> i;

        switch (i) {
        case 1:{
            cout<<"Ingrese el nombre 1: ";
            cin.ignore();
            cin.getline(persona1.nombre,20,'\n');
            cout<<"Ingresa edad 1: ";
            cin>>persona1.edad;

            cout<<"Ingrese el nombre 2: ";
            cin.ignore();
            cin.getline(persona2.nombre,20,'\n');
            cout<<"Ingresa edad 2: ";
            cin>>persona2.edad;

            cout<<"Nombre 1: "<<persona1.nombre<<endl;
            cout<<"Edad 1: "<<persona1.edad<<endl<<endl;

            cout<<"Nombre 2: "<<persona2.nombre<<endl;
            cout<<"Edad 2: "<<persona2.edad<<endl<<endl;
            break;
        }
        case 2:{
            for(int i = 0;i < 2;i++){
                cout<<"Digite su nombre: ";
                cin.ignore();
                cin.getline(empleados[i].nombre,20,'\n');

                cout<<"Digite su direccion: ";
                cin.getline(empleados[i].dir_empleado.direction,30,'\n');

                cout<<"Ciudad: ";
                cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');

                cout<<"Departaento: ";
                cin.getline(empleados[i].dir_empleado.departamento,20,'\n');

                cout<<"Digite su Salario: ";
                cin>>(empleados[i].salario);
                cout<<endl;
            }

            for(int i=0;i<2;i++){
                cout<<"Nombre: "<<empleados[i].nombre<<endl;
                cout<<"Direccion: "<<empleados[i].dir_empleado.direction<<endl;
                cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
                cout<<"Departamento: "<<empleados[i].dir_empleado.departamento<<endl;
                cout<<"Salario: "<<empleados[i].salario<<endl<<endl;
                cout<<endl;
            }
            break;
        }

        case 3:{
            char categoria[10];
            cout<<"Ingrese el nombre: ";
            cin.ignore();
            cin.getline(c1.nombre,30,'\n');

            cout<<"Ingresa edad: ";
            cin>>c1.edad;

            cout<<"Ingrese su sexo: ";
            cin.ignore();
            cin.getline(c1.sexo,20,'\n');
            cout<<"Ingrese su club: ";
            cin.getline(c1.club ,20,'\n');

            if(c1.edad <= 18) strcpy(categoria,"Juvenil");
            else if(c1.edad <= 40)strcpy(categoria,"Senior");
            else strcpy(categoria,"Senior");

            cout<<endl<<"Datos del corredor: "<<endl;
            cout<<"Nombre: "<<c1.nombre<<endl;
            cout<<"Edad: "<<c1.edad<<endl;
            cout<<"Sexo: "<<c1.sexo <<endl;
            cout<<"club: "<<c1.club<<endl;
            cout<<"Categoria: "<<categoria<<endl<<endl;
            break;
        }

        case 4:{

            for(int i = 0;i < 3;i++){
                cout<<"Ingrese el nombre: ";
                cin.ignore();
                cin.getline(A[i].nombre,30,'\n');

                cout<<"Ingresa edad: ";
                cin>>A[i].edad;

                cout<<"Ingresa el promedio: ";
                cin>>A[i].promedio;
                cout<<endl;
            }

            if((A[0].promedio > A[1].promedio) && (A[0].promedio > A[2].promedio)){
                cout<<"Nombre: "<<A[0].nombre<<endl;
                cout<<"Edad: "<<A[0].edad <<endl;
                cout<<"Promedio: "<<A[0].promedio <<endl<<endl;
            }
            else if(A[1].promedio > A[2].promedio){
                cout<<"Nombre: "<<A[1].nombre<<endl;
                cout<<"Edad: "<<A[1].edad <<endl;
                cout<<"Promedio: "<<A[1].promedio <<endl<<endl;
            }
            else{
                cout<<"Nombre: "<<A[2].nombre<<endl;
                cout<<"Edad: "<<A[2].edad <<endl;
                cout<<"Promedio: "<<A[2].promedio <<endl<<endl;
            }
            break;

        }
        case 0:{
            i = 0;
            break;
        }
        }
    }
    return 0;
}
