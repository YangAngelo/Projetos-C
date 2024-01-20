/*3 - Construa um algoritmo que, tendo como dados de entrada a altura (H) e o sexo (S) de uma
 pessoa calcule e apresente seu peso ideal utilizando as seguintes formulas:
Para homens: Peso ideal (P) = (72,7 * H) – 58
Para mulheres: Peso ideal (P) = (62,1 * H) – 44,7*/

# include <iostream>
using namespace std;

int main ()
{
	float H, S, P;
	cout << "Qual o seu Sexo?\n [1] - Masculino | [2] - Feminino: "; cin >> S;
	cout << "\nDigite a sua Altura: "; cin >> H;
	
	if (S == 1)
	{
		P = (72.7 * H) - 58;
		cout << "\nSeu Peso Ideal e: " << P << endl;
	}
	else
	{
		P = (62.1 * H) - 44.7;
		cout << "\nSeu Peso Ideal e: " << P << endl;
	}
	cout << endl;
	system ("pause");
}