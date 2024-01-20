/*5 - Construa um algoritmo que leia um numero inteiro (positivo ou negativo) e apresente o seu
 modulo (numero sem sinal).*/

# include <iostream>
using namespace std;

int main ()
{
	int num, mod;
	cout << "\nDigite um numero positivo ou negativo: "; cin >> num;
	
	if (num < 0)
	{
		mod = num * (-1);
		cout << "\nO Modulo do numero e: " << mod << endl; 
		cout << endl;
	}
	else
	{
		cout << "\nO Modulo do numero e: " << num << endl;
		cout << endl;
	}
	system("pause");
}