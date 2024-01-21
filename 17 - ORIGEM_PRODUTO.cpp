/*17. Construa um algoritmo que tendo como dados de entrada o preço de um produto (PR) e seu codigo
de origem (CO), apresente o preço e a sua procedencia, de acordo com a tabela abaixo:

Codigo de Origem (CO)     Procedencia
1                         Sul
2                         Sudeste
3                         Centro-Oeste
4                         Norte
5                         Nordeste*/

# include <iostream>
using namespace std;
int main()
{
	float CO;
	int PR;
	
	cout << "Digite o preco do Produto: "; cin >> CO;
	cout << "\nDigite o Codigo de Origem\n";
	cout << "\n[1] - Sul\n[2] - Suldeste\n[3] - Centro-Oeste\n[4] - Norte\n[5] - Nordeste-----> ";
	cin >> PR;
	
	switch (PR)
	{
		case 1:
			cout << "\nO Produto e do Sul\n";
		break;
		case 2:
			cout << "\nO Produto e do Suldeste\n";
		break;
		case 3:
			cout << "\nO Produto e do Centro-Oeste\n";
		break;
		case 4:
			cout << "\nO Produto e do Norte\n";
		break;
		case 5:
			cout << "\nO Produto e do Nordeste\n";
		break;
		default:
			cout << "\nOpcao Invalida\n";
	}
		cout << "\nO Preco do Produto e: " << CO << endl;
		cout << endl;
	system("pause");
	
}