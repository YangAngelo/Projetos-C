/*7 - Construa um algoritmo que, recebendo os valores de vendas do mes de determinado vendedor (VM)
 e o nome do mesmo (NOME), apresente o nome, quando o valor da venda estiver entre R$ 10.000,00
  e R$ 50.000,00 (inclusive).*/

# include <iostream>
using namespace std;
int main ()
{
	float VM;
	string NOME;
		
	cout << "\nDigite o Valor da Venda do Vendedor: "; cin >> VM;
	cout << "\nDigite o Nome do Vendedor: "; cin >> NOME;
	cout << endl;
	if (VM >= 10000 &&  VM <= 50000 )
		{
			cout << "O nome do Vendedor e: " << NOME << endl;	
		}
	else
		{
			cout << "";		
		}
	cout << endl;
	system("pause");
}