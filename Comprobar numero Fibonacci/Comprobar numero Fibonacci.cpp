// Enunciado:
// Torres de Hanoi 
//
// Fecha de entrega:
// 16/1/23
//
// Participantes:
// 1- John Luis Del Rosario Sánchez - ID 1106940
// 2- Ashly Marisell Paula Ynoa - ID 1108023
// 3- Elián Matos Díaz - ID 1106901
// 4- Juan Daniel Ubiera Méndez - ID 1107248
// 5- Kelvin Arístides García Espinal - ID 1107646
#include <iostream>
#include <string>
using namespace std;

string ValidarNumero(string str)// metodo para comprobar si el dato introducido es entero
{
    bool notNum = false;
    int i = 0;
    while ((str[i] != '\0') && notNum != true) //'\0' es el character que marca el final del string
    {
        if (isdigit(str[i]) == false)// compara cada caracter de la cadena para saber si es numerico
        {
            str = "";
            notNum = true;
            break;
        }
        i++;
    }
    return str; //devuelve un str igual si no se encontraron letras
}

bool VerificarFibonacci(int n) //Funcion booleana que comprueba si el numero introducido es Fibonacci.
{
    int a = 0, b = 1;

    if (b == n || a == n) return true;

    while (b < n)
    {
        b += a;
        a = b - a;

        if (b == n) return true;
    }
    return false;
}

int main()
{
    string dato; //Numero entero que debe introducir el usuario
    int numero;// dato ya verificado y listo para la insercion
    do
    {
        cout << "Bienvenido al programa de verificar si el numero que usted introduce es Fibonacci o no.\n";
        cout << "\nDigite un numero: ";
        cin >> dato;

        if (ValidarNumero(dato) != dato) {
            cout << "Tipo de dato incorrecto, solo se permiten numeros, intente de nuevo" << endl;
            system("PAUSE");
            system("CLS");

            continue;
        }
        numero = stoi(dato);

        if (VerificarFibonacci(numero))
        {
            cout << "El numero " << numero << " pertenece a la serie de Fibonacci." << endl;
        }
        else
        {
            cout << "El numero " << numero << " no pertenece a la serie de Fibonacci." << endl;
        }
        return 0;
    } while (true);
}