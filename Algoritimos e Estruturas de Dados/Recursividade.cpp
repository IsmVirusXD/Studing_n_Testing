/* 
Recursividade:
Definição Basica -> Quando temos uma função que fica se chamando sucessivamente até chegar em um caso 
					resolvendo assim o caso base para depois resolver todas as suas outras chamadas
					chegando no resultado desejado
*/


# include <iostream>

using namespace std;



//Funções 
int fatorial(int num);
int fibonacci(int num);


int main()
{
	int n = 0, valor = 0;
	
	cout << "Digite um numero: ";
	cin >> n;
	valor = fatorial(n);
	cout << "Fatorial = " << valor << endl;
	valor = fibonacci(n);
	cout << "Casa de Fibonaci = " << valor << endl;
		
	
	return 0;
	
	
}


// Funções Recusivas
int fatorial(int num) // Fatorial = é um excelente exemplo de uma funação recusiva
{	
	/*
	 O fatorial é definindo por um numero N multiplicado k vezes por seus respectivos tal que R = N * (n-1) * (n-2) * ... * (1)
	 sendo que 1! e 0! = 1  (Podendo ser nosso caso Base)
	*/
	
	int numero = 0;
	if (num != 0)
	{
		//Demais funções
		numero = fatorial(num-1);
	}
	else
	{
		//Caso Base
		return 1;
	}
	
	return (num * numero);
}

int fibonacci(int num) // Fibonnacci = outra função matematica que pode ser categaorizado como uma função recursiva
{
	int numero = (num == 0 || num == 1) ?
	num : (fibonacci(num-1) + fibonacci(num-2));
	return numero;
}
