/*10 - Construa um algoritmo que leia dois numeros (A e B). Caso A seja igual a B, apresentar a 
soma dos dois. Caso um seja maior que o outro, apresentar a diferença entre os dois numeros (sempre
 lembrando que a diferença entre dois numeros e SEMPRE positiva).*/

#include <iostream>
using namespace std;
int main ()
{
	int A, B, op;
	
	cout << "Digite dois numeros." << endl;
	cout << "\nDigite o Primeiro Numero: "; cin >> A;
	cout << "\nDigite o Segundo Numero: "; cin >> B;
	
	if(A == B)
		{
			op = A + B;
		}
		else
		{
			if (A > B)
			{
				op = A - B;
			}
			else
			{
				op = B - A;
			}
		}
	cout << "\nO Resultado e: " << op << endl;
	cout << endl;
	system ("pause");
}