/*9 - Construa um algoritmo que calcule o novo salario (SAL_NOVO) de um funcionario. Considere que
 o funcionario devera receber um reajuste de 15% caso seu salario (SAL) seja menor que 500. Se o
  salario for maior ou igual a 500, mas menor ou igual a 1000, o reajuste deve ser de 10%. Caso
   o salario seja maior que 1000, o reajuste deve ser de 5%.*/

# include <iostream>
using namespace std;
int main ()
{
	float SAL_NOVO, SAL;
	
	cout << "\nDigite o seu Salario: R$ "; cin >> SAL;
	
	if (SAL < 500)
		{
			SAL_NOVO = SAL + (SAL * 0.15);
		}
	else
		{
			if (SAL <= 1000)
				{
					SAL_NOVO = SAL + ( SAL * 0.10);
				}
			else
				{
					SAL_NOVO = SAL + ( SAL * 0.05);
				}
		}
	cout << "\nO Novo Salario e: " << SAL_NOVO << endl;	
	cout << endl;
	system ("pause");
}