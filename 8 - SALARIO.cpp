/*8 - Construa um algoritmo que apresente o nome e o salario dos funcionarios, de acordo com os
 seguintes criterios: 
 - Salarios que sejam maiores ou iguais a R$ 1000,00 e menores ou iguais a R$ 1500,00,
 - Funcionarios pertencentes aos departamentos de producao ou engenharia.
Obs: Os departamentos sao reconhecidos pelas letras (P) Producao e (E) Engenharia,
São fornecidos o nome do funcionario (NF), o seu salario (SAL) e o departamento onde trabalha (DEP).*/

# include <iostream>
using namespace std;
int main ()
{
	float SAL;
	string NF;
	char P, E, DEP;
	
	cout << "\n Nome do Funcionario--> "; cin >> NF;
	cout << "\n Salario do Funcionario--> "; cin >> SAL;
	cout << "\n Informe o Departamento: [E] - Engenharia | [P] - Producao--> "; cin >> DEP;
	
	
	if (SAL >= 1000 && SAL <= 1500)
	{
		cout << "\nNome do Funcionario e: " << NF << endl;
		cout << "\nO Salario do Funcionario e: " << SAL << endl;
		
	}
	else
	{
		cout << "\n";
	}
	cout << endl;
	system("pause");
}