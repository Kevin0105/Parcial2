#include <iostream>
#include <string>

using namespace std;

/*Desarrolle una estructura estudiante, que contenga nombre, edad,
documento de identidad y semestre académico.*/

struct estudiante
{
    string nombre;
    int edad, id, semestre;
};

int main(int argc, char** argv)
{
    estudiante x;
    x.nombre = "Kevin Santiago Lopez Criollo";
    x.edad = 18;
    x.id = 1004548269;
    x.semestre = 4;

    cout << "Este programa muestra los datos de un estudiante: nombre, numero id, edad y el semestre que cursa." << endl; 
    cout << "El nombre es: " << x.nombre << endl; 
    cout << "El numero de identificacion es: " << x.edad << endl; 
    cout << "La edad del estudiante es: " << x.id << endl; 
    cout << "Esta en el semestre numero: " << x.semestre << endl; 
}