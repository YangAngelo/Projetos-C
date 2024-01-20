/*11 - Construa um algoritmo que leia o codigo de um livro (CL) e apresente a categoria do livro,
 conforme a tabela abaixo:
 
Código do Livro (CL)       Categoria
A                          Ficção
B                          Não-Ficcao
Qualquer outro codigo      Invalido*/

# include <iostream>
using namespace std;
int main ()
{
	char CL, A, B, C, Categoria;
	
	cout << "Insira a Categoria do Livro com Letras Maiusculas	:\n [A] - Ficcao | [B] - Nao-Ficcao\n--> "; cin >> CL;
	
	switch (CL)
		{
			case 'A':
				cout << "\nFiccao\n";
				break;
			case 'B':
				cout << "\nNao-Ficcao\n";
				break;
			default : 
				cout << "\nInvalido\n"; 
		}
	cout << endl;
	system ("pause");
}