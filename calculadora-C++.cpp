#include <iostream>

using namespace std;

unsigned int calcular(int operandoUm, int operandoDois, char operador);

int main()
{
    unsigned int resultado = 0;
    int operandoUm;
    int operandoDois;
    char operador;

    operandoUm = 14;
    operandoDois = 8;
    operador = '-';
    resultado = calcular(operandoUm, operandoDois, operador);
    cout << operandoUm << " " << operador << " " << operandoDois << " = " << resultado << endl;

    operandoUm = 5;
    operandoDois = 6;
    operador = '*';
    resultado = calcular(operandoUm, operandoDois, operador);
    cout << operandoUm << " " << operador << " " << operandoDois << " = " << resultado << endl;

    operandoUm = 2147483647;
    operandoDois = 2;
    operador = '+';
    resultado = calcular(operandoUm, operandoDois, operador);
    cout << operandoUm << " " << operador << " " << operandoDois << " = " << resultado << endl;

    operandoUm = 18;
    operandoDois = 3;
    operador = '/';
    resultado = calcular(operandoUm, operandoDois, operador);
    cout << operandoUm << " " << operador << " " << operandoDois << " = " << resultado;

}
    unsigned int calcular(int operandoUm, int operandoDois, char operador){
        int resultado = 0;

    switch (operador)
    {
    case '+':
        resultado = operandoUm + operandoDois;
        return resultado;
        break;
    case '-':
        resultado = operandoUm - operandoDois;
        return resultado;
        break;
    case '*':
        resultado = operandoUm * operandoDois;
        return resultado;
        break;
    case '/':
        resultado = operandoUm / operandoDois;
        return resultado;
        break;
    default:
        return 0;

    }

    }




