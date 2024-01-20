/*1 - Construa um algoritmo que leia o valor de uma conta de luz (CL) e, caso o valor seja maior
 que R$ 50,00 apresente a mensagem: “Voce esta gastando muito”. Caso contrario nao exiba mensagem
 nenhuma.*/

# include <iostream>
using namespace std;

int main ()
{
	float CL;
	
	cout << "\nDigite o Valor da Conta de Luz: R$ ";
	cin >> CL;
	
	if (CL > 50)
	{
		cout << "\nVoce esta gastando muito\n";
	}
	else
	{
		cout <<"";
	}
}