#include <iostream>
#include <string>

using namespace std; 

void MP(float *PM, int n);
void MI(float *PI, int n);

int main()
{
    int n;

    cout << "Este programa calcula la mediana de numeros ingresados por usted." << endl; 
    cout << "Por favor, ingrese la cantidad de numeros que va a utilizar." << endl; 
    cin >> n; 
    float im[n], p[n];
    
        if(n%2!=0)
        {
            MI(&im[n], n); 
        }
        if(n%2==0)
        {
            MP(&p[n], n);
        }

}
void MP(float *PM, int n)
{
    float mediana; 
    for(int i=0 ; i<n ; i++)
            {
                cout << "Digite un numero " << endl;
                cin >> PM[i];
            }
            for (int i=0 ; i<=n-2 ; i++)
            {
                for(int j=0 ; j<=n-2 ; j++)
                {
                    if (PM[j] > PM[j+1])
                    {
                        int k;
                        k=PM[j];
                        PM[j]=PM[j+1];
                        PM[j+1]=k;
                    }
                }
            }
            for(int i=0 ; i<n ; i++)
                {
                    cout << PM[i] << " ";
                }
    
    cout << endl;
    mediana=(PM[(n-1)/2]+PM[((n-1)/2)+1])/2;

    cout << "El valor de la mediana es: " << mediana << "." << endl;
    
}
void MI(float *PI, int n)
{
    float mediana; 

    for(int i=0 ; i<n ; i++)
            {
                cout << "Digite un numero " << endl;
                cin >> PI[i];
            }
            for (int i=0 ; i<=n-2 ; i++)
            {
                for(int j=0 ; j<=n-2 ; j++)
                {
                    if (PI[j] > PI[j+1])
                    {
                        int k;
                        k=PI[j];
                        PI[j]=PI[j+1];
                        PI[j+1]=k;
                    }
                }
            }
            for(int i=0 ; i<n ; i++)
                {
                    cout << PI[i] << " "; 
                }
    mediana=PI[(n/2)]; 

    cout << endl;
    cout << "El valor de la mediana es: " << mediana << "." << endl;
}