/*18. Construa um algoritmo que leia o ano de nascimento de uma pessoa (AN) e mostre a sua 
idade e, tambem verifique e mostre se essa pessoa ja tem idade para votar (16 anos ou 
mais) e se ja pode conseguir a sua carteira de habilitacao (18 anos ou mais).*/

# include <iostream>
using namespace std;
int main()
{
	int AN;
	
	cout << "\nEntre com o ano do seu Nascimento-----> "; cin >> AN ;
	
	AN = 2022 - AN;
	
	if (AN >= 18)
		{
			cout << "\nSua idade e ---> " << AN << "\n\nVoce ja pode votar e Tirar a sua CNH.\n\n";
		}
	else
		{
			if ( AN < 16)
			{
				cout << "\nSua idade e ---> " << AN << "\n\nVoce nao pode votar e nem tirar a sua CNH.\n\n";
			}
			else
			{
				if ( AN >= 16 && AN < 18)
					{
						cout << "\nSua idade e---> " << AN << "\n\nVoce ja pode votar, mas ainda nao pode tirar a sua CNH.\n\n";
					}
			}
		}
		system("pause");
}