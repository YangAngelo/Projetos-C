/*12 - Construa um algoritmo que receba a leitura do termometro (T). Caso a temperatura esteja
 abaixo de 100�C, apresentar a mensagem de que a temperatura esta muito baixa. Caso a temperatura
 esteja entre 100�C e 200�C (inclusive), apresentar a mensagem de que a temperatura esta baixa.
 Caso a temperatura esteja acima de 200�C e inferior a 500�C, apresentar a mensagem de que a
 temperatura esta normal. Caso contrario, apresentar a mensagem de que a temperatura esta muito
 alta.*/

# include <iostream>
using namespace std;
int main ()
{
	float T;
	
	cout << "\nDigite a Temperatura: "; cin >> T;
	cout << endl;
	
	if ( T < 100 )
		{
			cout << "\nTemperatura esta Muito Baixa\n\n";
			cout << endl;
		}
	else
		{
			if ( T <=200 )
				{
					cout << "\nTemperatura esta Baixa\n\n";
				}
			else
				{
					if ( T < 500)
					{
						cout << "\nTemperatura esta normal\n\n";
					}
					else
					{
						cout << "\nTemperatura esta muito alto\n\n";
					}
				}
		}
	system ("pause");
		
}