#include <iostream> 

int main () 
{


    int N1, N2, Resultado; 
    char operador;

    std::cout << "Digite um número: " << std::endl;
    std::cin >> N1;

    std::cout << "Digite o segundo número" << std:: endl;
    std::cin >> N2; 

    std::cout << "Digite a operação desejada" << std::endl;
    std::cin >> operador; 

    switch (operador)
    {
    case '+': // Como o caracter é reconhecido como int na tabela ASK é possível usar eles no (switch)
        Resultado = N1 + N2; 

        std::cout << "A soma dos números é: " << Resultado << std::endl;
        break;

    case '-':
        Resultado = N1 - N2; 
        std::cout << "A subtração dos números é: " << Resultado << std::endl;
        break;

    case '*':
        Resultado = N1 * N2;
        std::cout << "A multiplicação dos números é: " << Resultado << std::endl;
        break;

    case '/':
        Resultado = N1 / N2; 
        std::cout << "A divisão dos números é: " << Resultado << std::endl;
        break;
    
    default:

        std::cout << "Valor inválido" << std::endl;
        break;
    }



    return 0; 
}