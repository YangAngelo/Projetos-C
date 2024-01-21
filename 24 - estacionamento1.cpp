/*24. Construa um algoritmo para calcular o valor a ser pago pelo periodo de estacionamento do
automovel (PAG). O usuario entra com os seguintes dados: hora (HE) e minuto (ME) de entrada, 
hora (HS) e minuto (MS) de saida. Sabe-se que este estacionamento cobra hora cheia, ou seja,
se passar um minuto ele cobra a hora inteira. O valor cobrado pelo estacionamento e R$ 4,00*/

# include <iostream>
using namespace std;
int main ()
{
	
	int HE, ME, HS, MS, PE, CADH, CADM, AD, PAG;
	
	
	cout << "\nDigite a Hora da entrada: "; cin >> HE ;
	cout << "\nDigite os Minutos da entrada: "; cin >> ME ;
	cout << "\nDigite a Hora da Saida: "; cin >> HS ;
	cout << "\nDigite os Minutos da Saida: "; cin >> MS ;
	
	HE = HE * 60;
	HS = HS * 60;
	PAG = (HS + MS) - (HE + ME);
	CADH = PAG/60;
	CADM = PAG % 60;
	ADH = 6 + (CADH + CADM);
	ADM = 
	
	//PAG > 120 60 = 1,00
	
	
	if (CADH < 1 && CADM < 60)
		{
			cout << "\nO Valor a ser Pago e R$ 4,00";
			cout << endl;
		}
		else
		{
			if (CADH == 1 && CADM == 0)
			{
				cout << "\nO Valor a ser Pago e R$ 4,00";
				cout << endl;
			}
			else
			{
				if (CADH > 1 && CADM < 60)
				{
					cout << "\nO Valor a ser Pago e: R$ " << AD << endl;
					cout << endl;
				}
				else
				{
					if (CADH < 1 && CADM == 0)
					{
						cout << "\nO Valor a ser Pago e: R$ " << AD << endl;
						cout << endl;
					}
				}
				
			}
		}
	
	system ("pause");
}
