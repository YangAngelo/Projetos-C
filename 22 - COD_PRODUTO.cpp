/*22. Construa um algoritmo que leia o codigo de um determinado produto (CP) e mostre a sua
classificacao, utilizando a seguinte tabela:

Codigo do Produto (CP)         Classificacao
1                              Alimento nao perecivel
2, 3 ou 4                      Alimento perecivel
5 ou 6                         Vestuario
7                              Higiene Pessoal
8 ou 9                         Limpeza e Utensilios Domesticos
Qualquer outro codigo          Invalido*/

# include <iostream>
using namespace std;
int main ()
{
	int CP;
	
	cout << "\n**********Digite o Codigo do Produto**********\n";
	cout << "\n[1] - Alimento Nao Perecivel\n\n[2], [3], [4] - Alimento Perecivel\n\n[5], [6] - Vestuario\n\n[7] - Higiene Pessoal\n\n[8] ,[9] - Limpeza e Utensilios Domesticos---------> ";

	cin >> CP;
	
	switch (CP)
		{
			case 1:
				cout << "\nAlimento Nao Perecivel\n\n";
			break;
			case 2:
			case 3:
			case 4:
				cout << "\nAlimento Perecivel\n\n";
			break;
			case 5:
			case 6:
				cout << "\nVestuario\n\n";
			break;
			case 7:
				cout << "\nHigiene Pessoal\n\n";
			break;
			case 8:
			case 9:
				cout << "\nLimpeza e Utensilios Domesticos\n\n";
			break;
			default:
				cout << "\nCodigo Invalido\n\n";
		}
	system("pause");
	
}