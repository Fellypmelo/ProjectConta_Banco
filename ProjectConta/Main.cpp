#include <iostream>
#include <string>
#include "Conta.h"
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");

	Conta Logo;
	Logo.LogoBanco();

	//Criando 3 objetos do tipo Conta com pouco tempo de duraçao
	//pois vao estar alocados na Stack
	
	Conta Client01;
	Conta Client02;
	Conta Client03;

	//Client01
	Client01.SetBanco("Bradesco");
	Client01.SetAgencia(1234);
	Client01.SetNumConta(1111);
	Client01.SetTitular("João");
	cout << "[" << Client01.GetTitular() << "]: ";
	Client01.Depositar(21500);
	cout << "[" << Client01.GetTitular() << "]: ";
	Client01.Sacar(500);

	//Client02
	Client02.SetBanco("Banco do Brasil");
	Client02.SetAgencia(2345);
	Client02.SetNumConta(2222);
	Client02.SetTitular("Pedro");
	cout << "[" << Client02.GetTitular() << "]: ";
	Client02.Sacar(500);

	//Client03
	Client03.SetBanco("Nubank");
	Client03.SetAgencia(3456);
	Client03.SetNumConta(3333);
	Client03.SetTitular("Lucas");
	Client03.GetTitular();
	//Cliente03 ainda nao tem como sacar pois nao tem saldo
	//tentativa de saque
	cout << "[" << Client03.GetTitular() << "]: ";
	Client03.Sacar(500);
	
	//Efetuando transferencia de client01 para client03
	cout << "De :"<< Client01.GetTitular() <<" ,para "<< Client03.GetTitular() << " : ";
	Client01.Transferir(Client03, 500);
	
	cout << "[" << Client03.GetTitular() << "]: ";
	Client03.Sacar(450);
	cout << "[" << Client03.GetTitular() << "]: ";
	Client03.Sacar(51);


	cout << "\n\n";
	system("PAUSE");
	return 0;
}