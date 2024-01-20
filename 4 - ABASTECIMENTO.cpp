/*4 - Construa um algoritmo que determine quanto sera gasto para encher o tanque de um carro (VG),
 sabendo-se que o preço da gasolina e de R$ 1,80 e o preço do alcool e de R$ 1,00. O usuario
  fornecera os seguintes dados: Tipo de carro (TC) (G – gasolina ou A – álcool) e Capacidade
   do tanque (CT), em litros.*/

# include <iostream>
using namespace std;

int main ()
{

	float TC, CT, VG;
	
	//cout << "Digite o Tipo do seu Carro: "; cin >> VG;
	cout << "\nDigite o Tipo de Combustivel. ";
	cout << "\n[1] - GASOLINA | [2] - ALCOOL: "; cin >> TC; 
	cout << "\nDigite a Capacidade do Tanque de Combustivel do seu carro: "; cin >> CT;
	
	if ( TC == 1)
	{
		VG = CT * 1.8;
		cout << "\nO Seu carro usa o Combustivel: Gasolina." << endl;
		cout << "\nVoce gasta: " << VG << " Litros para encher o seu tanque de combustivel.\n";
	}
	else
	{
		VG = CT * 1.0;
		cout << "\nO Seu carro usa o Combustivel: ALCOOL." << endl;
		cout << "\nVoce gasta: " << VG << " Litros para encher o seu tanque de combustivel.\n" << endl;
	}
	cout << endl;
	system ("pause");
}