/*21. Construa um algoritmo que, dada a idade de um nadador (ID), classifique-o em uma das seguintes
categorias e apresente a categoria:

Idade (ID)          Categoria
5 ate 7 anos        Infantil A
8 ate 10 anos       Infantil B
11 ate 13 anos      Juvenil A
14 ate 17 anos      Juvenil B
Acima de 18 anos    Adulto*/

# include <iostream>
using namespace std;
int main ()
{
	int ID;
	
	cout << "\nDigite a Idade do nadador: "; cin >> ID;
	
	if ( ID >= 5 && ID <= 7)
		{
			cout << "\nCategoria Infantil A\n";
		}
	else
		{
			if ( ID >= 8 && ID <= 10)
				{
					cout << "\nCategoria Infantil B\n";
				}
			else
				{
					if ( ID >= 11 && ID <= 13)
						{
							cout << "\nCategoria Juvenil A\n";
						}
					else
						{
							if ( ID >= 14 && ID <= 17)
								{
									cout << "\nCategoria Juvenil B\n";
								}
							else
								{
									cout << "\nCategoria Adulto\n";
								}
						}
				}
		}
		cout << endl;
	system ("pause");
}