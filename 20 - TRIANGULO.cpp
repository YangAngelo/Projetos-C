/*20. Construa um algoritmo que, dados os comprimentos dos tres lados (A, B e C) de um triangulo,
 verifique o tipo de triangulo formado. Apresentar qual e o tipo. Sabe-se que:

Triangulo do tipo Equilatero – possui os tres lados iguais
Triangulo do tipo Isosceles – possui dois lados iguais
Triangulo do tipo Escaleno – possui os tres lados diferentes*/

#include <iostream>
using namespace std;
int main()
{
    float a,b,c,l1,l2,l3;
    cout << "Entre com o 1o. Lado ---> "; cin>>l1;
    cout << "Entre com o 2o. Lado ---> "; cin>>l2;
    cout << "Entre com o 3o. Lado ---> "; cin>>l3;
    
    a = l1 + l2;
    b = l1 + l3;
    c = l3 + l2;
    
	if (a > l3 && b > l2 && c > l1)
    	{
    		cout << "\nForma um Triangulo\n"<< endl;
    		if (a==b && a==c)
    			{
    				cout << "\nTriangulo Equilatero\n";
				}
			else
				{
					if (a==b || a==c || b==c)
						{
							cout << "\nTriangulo Isoceles\n";
						}
					else
						{
							cout << "\nTriangulo Escaleno\n";
						}
				}
		}
	else
		{
			cout << "\nNao forma um Triangulo\n"<< endl;
		}
	cout << endl;
	system ("pause");
}