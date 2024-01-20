/*2 - Construa um algoritmo que leia o valor de uma conta de luz (CL) e, caso o valor seja maior
 que R$ 50,00 apresente a mensagem: “Você esta gastando muito”. Caso contrario exiba a 
 mensagem: “Seu gasto foi normal”.*/

# include <iostream>
using namespace std;

int main ()
{

	float CL;
	
	cout << "Digite o Valor da Conta de Luz: R$ ";
	cin >> CL;
	
	if (CL > 50)
	{
		cout << "\nVoce esta gastando muito\n" << endl;
	}
	else
	{
		cout <<"\n Seu Gasto Foi Normal\n" << endl;
	}
}