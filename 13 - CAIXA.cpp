/*13 - Construa um algoritmo que leia a quantidade de dinheiro existente no caixa de uma empresa
 (CAIXA), a quantidade de produtos a ser comprada (QTD) e o preço de cada unidade (PR). Caso o
 valor total da compra seja superior a 80% do valor em caixa, a compra deve ser feita a prazo (3x),
 com juros de 10% sobre o valor total. Caso contrario, a compra devera ser realizada a vista, onde
 a empresa recebera 5% de desconto. Apresentar a forma de pagamento escolhida e o valor a ser pago
 (total a vista ou total a prazo), dependendo da escolha realizada pelo programa.*/

# include <iostream>
using namespace std;
int main ()
{
	float CAIXA, QTD, PR, VTC, RES, VT;
	
	cout << "Digite o Dinheiro no caixa da Empresa: R$ "; cin >> CAIXA;
	cout << "\nDigite a Quantidade de Produto a ser Comprado: "; cin >> QTD;
	cout << "\nDigite o Preco de cada Unidade: R$ "; cin >> PR;
	
	VTC = QTD * PR;
	RES = CAIXA * 0.8;
	
	if (RES < VTC )
		{
			VT = VTC + (VTC *0.1);
			cout << "\nA Compra deve ser feita a Prazo em 3x\n";
			cout << "\nO Valor da Compra e: R$ " << VT << endl;
		}
		else
		{
			VT = VTC - (VTC *0.05);
			cout << "\nA Compra deve ser feita a Vista\n";
			cout << "\nO Valor da Compra e: " << VT << endl;
		}
	cout << endl;
	system ("pause");
}