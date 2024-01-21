/*23 - Construa um algoritmo que indique o que o motorista deve fazer de acordo com a cor do semaforo
(CS) e distancia do cruzamento (DC) fornecida pelo usuario. As condicoes sao:

(V) Vermelho = Parar
(A) Amarelo = se a distancia do cruzamento for menor que 5 metros = Passar com cuidado = se a
 distancia do cruzamento for maior ou igual a 5 metros = Parar
(D) Verde = Passar*/

# include <iostream>
using namespace std;
int main ()
{
	int DC; 
	char CS, V, A, D;
	
	cout << "\n********** Indique a cor do Semaforo ********** \n\n";
	cout << "\n[V] - VERMELHO | [A] - AMARELO | [D] - VERDE --------> "; 
	cin >> CS;
	cout << "\nInforme a distancia do Semaforo ------ > ";
	cin >> DC;
	
	if ( CS = 'V' )
		{
			cout << "\nPare no Semaforo\n" << "\nSua distancia e: " << DC << endl;
		}
	else
		{
			if ( CS = 'D' )
				{
					cout << "\nPassar pelo Semaforo\n" << "\nSua distancia e: " << DC << endl;
				}
			else
				{
					if ( CS = 'A' && DC < 5)
						{
							cout << "\nPassar com cuidado\n" << "\nSua distancia e: " << DC << endl;
						}
					else
						{
							if ( CS = 'A' && DC >= 5)
								{
									cout << "\nParar no Semaforo\n" << "\nSua distancia e: " << DC << endl;
								}
						}
				}
		}	
		
	cout << endl;
	system("pause");
}