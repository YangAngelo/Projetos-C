/*16. Construa um algoritmo que calcule e apresente quanto deve ser pago por um produto
considerando a leitura do preço de etiqueta (PE) e o codigo da condicao de pagamento (CP).
Utilize para os calculos a tabela de condicoes de pagamento a seguir:
  
Codigo da condicao de pagamento    Condicao de pagamento
1                                  A vista em dinheiro ou cheque, com 10% de desconto
2                                  A vista com cartao de credito, com 5% de desconto
3                                  Em 2 vezes, preço normal de etiqueta sem juros
4                                  Em 3 vezes, preço de etiqueta com acrescimo de 10%*/

# include <iostream>
using namespace std;
int main ()
{
	float PE, CP, RES;
	
	cout << "Digite o Preco da Etiqueta: R$ "; cin >> PE;
	cout << "\nDigite a Condicao de Pagamento:\n\n[1] - A vista em dinheiro ou cheque\n[2] - A vista com cartao de credito\n[3] - Em 2 vezes\n[4] - Em 3 vezes\n\n -------> ";
	cin >> CP;
	
	if ( CP == 1)
		{
			RES = PE - ( PE * 0.10 );
			cout << "\nPagamento A Vista em Dinheiro ou Cheque\n";
			cout << "\nO Valor pago sera: " << RES << endl;
		}	
	else
		{
			if (CP == 2)
				{
					RES = PE - ( PE * 0.05 );
					cout << "\nPagamento A Vista com cartao de credito\n";
					cout << "\nO Valor pago sera: " << RES << endl;
				}
			else
				{
					if (CP == 3)
						{
							RES = PE;
							cout << "\nPagamento Em 2 vezes\n";
							cout << "\nO Valor pago sera: " << RES << endl;
						}
					else
						{
							RES = PE + ( PE * 0.10 );
							cout << "\nPagamento Em 3 vezes\n";
							cout << "\nO Valor pago sera: " << RES << endl;
						}	
				}
		}
	cout << endl;
	system ("pause");
}