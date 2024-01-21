/*19. Construa um algoritmo que calcule e apresente a idade REAL de uma pessoa. Sera fornecido
pelo usuario:
DN – dia do nascimento   DH – dia da data de hoje
MN – mes do nascimento   MH – mes da data de hoje
AN – ano do nascimento   AH – ano da data de hoje*/
 
# include <iostream>
using namespace std;
int main()
{
	int DN, MN, AN, DH, MH, AH, IR, CAL;
	
	cout << "Digite a Data do Nascimento\nDia: "; cin >> DN;
	cout << "\nDigite o Mes de Nascimento\nMes: "; cin >> MN;
	cout << "\nDigite o Ano de Nascimento no formato AAAA\nAno: "; cin >> AN;
	cout << "\n\nDigite o Dia Atual: \nDia: "; cin >> DH;
	cout << "\nDigite o Mes Atual: \nMes: "; cin >> MH;
	cout << "\nDigite o Ano Atual no formato AAAA: \nAno: "; cin >> AH;
	
	CAL = (DH + (MH *30) + (AH * 365 )) - (DN + (MN *30) + (AN * 365 ));
	IR = CAL / 365;
	
	cout << "\nA Idade Real e: " << IR << endl;
	cout << endl;
	system("pause");
}