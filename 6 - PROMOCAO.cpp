/*6 - Construa um algoritmo que leia o pre�o de um produto (P) e apresente a mensagem: �Em promocao�,
 caso o pre�o seja maior ou igual a R$ 50,00 e menor ou igual a R$ 100,00. Caso contrario, deve
  apresentar a mensagem: �Pre�o Normal�.*/

# include <iostream>
using namespace std;

int main ()
{
	float P;
	
	cout <<"\nDigite o Preco do Produto: "; cin >> P;
	
	if ( P >= 50)
	
	{
		if ( P <= 100)
		{
			cout << "\nEm Promocao.\n\n";	
		}
		else
		{
			cout << "\nPreco Normal.\n\n";
		}
	}
	else
	{
		cout << "\nPreco Normal.\n\n";
	}
	system ("pause");
}