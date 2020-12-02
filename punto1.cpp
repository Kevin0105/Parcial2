#include <iostream>
#include <string>
#include <time.h>

using namespace std;

//Desarrolle programa que calcule el número mayor y menor de un arreglo bidimensional con tamaño nxn y genere como resultado el promedio de  ambos valores.//

int main()
{
    int n, menor=10000, mayor, promedio;

    cout << "Este programa crea un arreglo bidimensional o matriz nxn,";
    cout << " con n siendo un numero ingresado por usted.";
    cout << " Tambien, de todos los numeros de la matriz selecciona cual es el mayor, menor";
    cout << " y el promedio de ellos." << endl;
    cout << "Por favor, ingrese las dimensiones nxn de la matriz." << endl;
    cin >> n;

    int arreglo1[n][n];

    srand(time(NULL));

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            arreglo1[i][j]=rand() % (0-300); 
            cout << arreglo1[i][j] << " ";
        }
    cout << endl;
    }
    

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(menor>=arreglo1[i][j])
            {
                menor=arreglo1[i][j];
            }
        }        
    }

    cout << "El valor menor de la matriz es: " << menor << endl; 

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(mayor<arreglo1[i][j])
            {
                mayor=arreglo1[i][j];
            }
        }
            
    }
    cout << "El valor mayor de la mtriz es: " << mayor << endl;

    promedio=((menor+mayor)/2);

    cout << "El promedio de los dos resultados es: " << promedio << endl;
}