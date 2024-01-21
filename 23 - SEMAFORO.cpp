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
	cout << "\n[V] - VERMELHO | [A] - AMARELO | [D] - VERDE\n\n --------> "; 
	cin >> CS;
	cout << "\nInforme a distancia do Semaforo ------ > ";
	cin >> DC;
	
	
	switch(CS)
	{
		case V:
			cout << "\n\nPare no Semaforo\n";
			cout << "\nSua Distancia e ---> " << DC << "\n";
		break;
		case A:
			if ( DC < 5)
				{
					cout << "\n\nPasse com cuidado\n";
					cout << "\nSua Distancia e ---> " << DC << "\n";
				}
			else
				{
					if( DC >= 5)
					{
						cout << "\n\nPare no Semaforo\n";
						cout << "\nSua Distancia e ---> " << DC << "\n";
					}
				}
		break;
		case D:
			cout << "\n\nPasse pelo Semaforo\n";
			cout << "\nSua Distancia e ---> " << DC << "\n";
		break;
		default:
			cout << "\n\nOpcao errada";
			cout << "\nSua Distancia e ---> " << DC << "\n";
	}
	cout << endl;
	system("pause");
}