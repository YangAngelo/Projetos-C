# include <iostream>
using namespace std;
int main ()
{
	float HT, VH, SL, SB, INSS, IR, SBI, ALI, VD, TINSS;
	
	cout << "\nDigite as Horas Trabalhadas: "; cin >> HT;
	cout << "\nDigite o Valor das Horas Trabalhadas: R$ "; cin >> VH;
	
	SB = HT * VH;
	INSS = SB * 0.11;
	SBI = SB - INSS;
	
	if ( SBI <= 1257.12 )
		{
			IR = SBI * 0;
			SL = SBI - IR;
		}
	else
		{
			if (SBI <= 2512.08 )
				{
					IR = SBI * .15 - 188.57;
					SL = SBI - IR;
				}
			else
				{
					IR = SBI * .275 - 502.58;
					SL = SBI - IR;
				}
		}
	
	cout << "\nSalario Liquido: R$ " << SL << endl;
	cout << endl;
	system ("pause");
	
}