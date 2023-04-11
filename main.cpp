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

//ejercicio 3

struct Empleado{
    char nombre[20];
    float salario;
}emp[100];


//Ejercicio 4

struct atleta{
    char nombre[20];
    char pais[15];
    int numero_medallas;
}atletas[100];

//Ejercicio 5

struct promedio{
    float nota1,nota2,nota3,promedio_e;

};

struct alumno2{
    char nombre[30], sexo[20];
    int edad;
    int cantidad_alumnos;
    struct promedio prom_alumno;
}Alumnos[100];

//Ejercicio 6

struct etapas{
    int horas,minutos,segundos;
}et[100];

//ejercicio 7

struct persona{
    char nombre[30];
    bool discapacidad;

}personas[30],personasConD[30],personasSinD[30];

int main()
{
    int i = 1;
    while(i != 0){
        cout<<"Escoje una opcion"<<endl;
        cout<<"1. Basicos estrcuturas"<<endl;
        cout<<"2. Estrcuturas anidada"<<endl;
        cout<<"3. Ejercicio 1 Datos de un corredor"<<endl;
        cout<<"4. Ejercicio 2 Datos de 3 alumnos y comparar su promedio"<<endl;
        cout<<"5. Ejercicio 3 Estudiante con mejor promedio"<<endl;
        cout<<"6. Ejercicio 4 Atleta con mas medallas"<<endl;
        cout<<"7. Ejercicio 5 Promedio del mejor alumno"<<endl;
        cout<<"8. Ejercicio 6 Cuanto demora un ciclista en completar las n etapas"<<endl;
        cout<<"9. Ejercicio 7"<<endl;
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

                cout<<"Departamento: ";
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

            int mayor=0,pos = 0;

            for(int i = 0;i < 3;i++){
                cout<<"Ingrese el nombre: ";
                cin.ignore();
                cin.getline(A[i].nombre,30,'\n');

                cout<<"Ingresa edad: ";
                cin>>A[i].edad;

                cout<<"Ingresa el promedio: ";
                cin>>A[i].promedio;


                if(A[i].promedio > mayor){
                    mayor = A[i].promedio; //sacamos el mayor promedio
                    pos = i; // guardamos la posicion del mayor promedio
                }
                cout<<endl;

            }

            cout<<"\nAlumnos con el mejor Promedio: \n";
            cout<<"Nombre: "<<A[pos].nombre<<endl;
            cout<<"Edad: "<<A[pos].edad<<endl;
            cout<<"Promedio: "<<A[pos].promedio<<endl<<endl;

            break;

        }


        case 5:{
            int n_empleados,posMayor = 0, posmenor = 0 ;
            float mayor = 0, menor = 9999999;

            cout<<"Digite el numero de empleados: ";
            cin>>n_empleados;

            for(int i = 0; i<n_empleados;i++){
                cout<<i+1<<" Digite su nombre: ";
                cin.ignore();
                cin.getline(emp[i].nombre, 20, '\n');

                cout<<i+1<<" Digite el salario: ";
                cin>>emp[i].salario;

                if(emp[i].salario > mayor){
                    mayor = emp[i].salario;
                    posMayor = i;
                }

                if(emp[i].salario < menor){
                    menor = emp[i].salario;
                    posmenor = i;
                }

                cout<<endl;
            }
            cout<<"Datos del empleado con mayor salario: ";
            cout<<"Nombre: "<<emp[posMayor].nombre<<endl;
            cout<<"Salario: "<<emp[posMayor].salario<<endl;

            cout<<"Datos del empleado con menor salario: ";
            cout<<"Nombre: "<<emp[posmenor].nombre<<endl;
            cout<<"Salario: "<<emp[posmenor].salario <<endl;
            break;
        }

        case 6:{
            int num_atletas, mayor = 0, aux = 0;

            cout<<"Ingrese el numero de atletas: ";cin>>num_atletas;

            for(int i = 0; i < num_atletas; i++ ){
                cin.ignore();
                cout<<"Atleta #"<<i+1<<" Digite su nombre: ";
                cin.getline(atletas[i].nombre, 20, '\n');
                cout<<"Digite su pais: ";
                cin.getline(atletas[i].pais, 20, '\n');
                cout<<"Digite le numero de medallas: ";
                cin >> atletas[i].numero_medallas;
                cout<<endl;
                cin.ignore();

                if(atletas->numero_medallas > mayor){
                    aux = i;
                }
          }

            cout<<"Datos del atleta con mas medallas";
            cout<<"Nombre: "<<atletas[aux].nombre<<endl;
            cout<<"Pais: "<<atletas[aux].pais<<endl;
            cout<<"Numero de medallas: "<<atletas[aux].numero_medallas<<endl;

            break;
        }

        case 7:{
            float promedio = 0;
            int num_estudiantes = 0,aux = 0,mayor = 0;

            cout<<"Ingrese el numero de estudiantes: ";
            cin>>num_estudiantes;

            for(int i = 0; i < num_estudiantes; i++ ){
                cin.ignore();
                cout<<"Ingrese su nombre: ";
                cin.getline(Alumnos[i].nombre, 30, '\n');
                cout<<"Ingrese su sexo: ";
                cin.getline(Alumnos[i].sexo , 30, '\n');
                cout<<"Ingrese su edad: ";
                cin>> Alumnos[i].edad;

                cout<<"Ingrese la nota 1: ";
                cin>>Alumnos[i].prom_alumno.nota1;
                cout<<"Ingrese la nota 2: ";
                cin>>Alumnos[i].prom_alumno.nota2;
                cout<<"Ingrese la nota 3: ";
                cin>>Alumnos[i].prom_alumno.nota3;
                cout<<endl;

                promedio = (Alumnos[i].prom_alumno.nota1 + Alumnos[i].prom_alumno.nota2 + Alumnos[i].prom_alumno.nota3)/3;
                if(promedio > mayor){
                    aux = i;
                    mayor = promedio;
                }
            }

            cout<<"Datos de estudiante"<<endl;
            cout<<"Nombre: "<< Alumnos[aux].nombre <<endl;
            cout<<"Sexo: "<<Alumnos[aux].sexo<<endl;
            cout<<"Edad: "<<Alumnos[aux].edad<<endl<<endl;

            cout<<"Nota 1:"<<Alumnos[aux].prom_alumno.nota1<<endl;
            cout<<"Nota 2:"<<Alumnos[aux].prom_alumno.nota2<<endl;
            cout<<"Nota 3:"<<Alumnos[aux].prom_alumno.nota3<<endl;
            cout<<"Promedio: "<<promedio<<endl<<endl;

            break;
        }

        case 8:{

            int num_etapas,h = 0,m = 0,s = 0;

            cout<<"Ingrese el numero de etapas: ";
            cin>>num_etapas;

            for(int i = 0; i < num_etapas; i++ ){
                cout<<"Horas: ";cin >> et[i].horas;
                cout<<"Minutos: ";cin>>et[i].minutos;
                cout<<"Segundos: ";cin>>et[i].segundos;
                cout<<endl;

                h += et[i].horas;
                m += et[i].minutos;
                s += et[i].segundos;
            }

            if(s>60){
                s -= 60;
                m++;
            }

            else if(m>60){
                m -= 60;
                h++;
            }
            cout<<"El ciclista demoro un total de "<<h<<":"<<m<<":"<<s<<" en recorrer las "<<num_etapas<<" etapas."<<endl;
            break;
        }

        case 9:{
            int n_personas,j=0,k=0;

            cout<<"Digite el numero de personas: ";
            cin>>n_personas;

            for(int i=0;i<n_personas;i++){
                cin.ignore();
                cout<<"Nombre : ";
                cin.getline(personas[i].nombre,30,'\n');
                cout<<"Discapacidad (1/0)? :";
                cin>>personas[i].discapacidad;

                //Almacenamos las personas con discapacidad
                if(personas[i].discapacidad == 1){
                    strcpy(personasConD[j].nombre,personas[i].nombre);
                    j++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
                }
                //Almacenamos las personas sin Discapacidad
                else{
                    strcpy(personasSinD[k].nombre,personas[i].nombre);
                    k++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
                }
                cout<<endl;
                }

            //Mostrar las personas con Discapaciadad
            cout<<"Personas con Discapacidad"<<endl;
            for(int i=0;i<n_personas;i++){
                cout<<personasConD[i].nombre<<endl;
            }
            //Mostrar las personas sin Discapacidad
            cout<<"Personas sin Discapacidad"<<endl;
            for(int i=0;i<n_personas;i++){
                cout<<personasSinD[i].nombre<<endl;
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
