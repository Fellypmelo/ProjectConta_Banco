#include "Conta.h"
#include <iostream>
#include <string>

using namespace std;


void Conta::LogoBanco()
{
	cout << "\n_____________________________BANCO_______________________________\n\n";
}

//escopo :: esta indicando que o metodo pertence a class Conta
bool Conta::Sacar(double Valor)
{

	if (Saldo < Valor) {
		cout << "Saldo insuficiente para valor : R$ " << Valor <<"\n";
		cout << "Seu saldo é de :  R$ " << ConsultarSaldo() << "\n";
		return false;
	}
	else {
		Saldo -= Valor;
		cout << "Saque feito com sucesso !\n";
		cout << "Seu saldo é de :  R$ " << ConsultarSaldo() << "\n";
		return true;
	}
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor;
	cout << "Deposito de R$ " << Valor << ", efetuado com sucesso !\n";
	cout << "Seu saldo atual é de :  R$ " << ConsultarSaldo() << "\n";
}

void Conta::Transferir(Conta &Destino ,double Valor)
{
	if (Saldo < Valor) {

		cout << "Saldo insuficiente para valor : R$ " << Valor << ".Impossivel efetuar a transferencia!\n";
		cout << "Seu saldo é de :  R$ " << ConsultarSaldo() << "\n";

	}
	else if (Saldo >= Valor) {

		Destino.Depositar(Valor);
		Saldo -= Valor;

		cout << "\n_______________________Dados da transferencia____________________\n\n";
		
		cout << "Titula: "<< Destino.GetTitular()<<"\n";
		cout << "Banco: " << Destino.GetBanco() << "\n";
		cout << "Angecia:" << Destino.GetAgencia() << "\n";
		cout << "Conta:" << Destino.GetNumConta() << "\n";

		cout << "Transferencia de R$ " << Valor << ", efetuado com sucesso !\n";
		cout << "Seu saldo atual é de :  R$ " << ConsultarSaldo() << "\n";
		cout << "_________________________________________________________________\n";
	}
	else {

		cout << "Transferencia nao efetuado pois o numero da conta é invalido ou nao existe !";
	}
}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

int Conta::GetNumConta()
{
	return NumConta;
}

string Conta::GetTitular()
{
	return Titular;
}

void Conta::SetBanco(string Banco)
{
	this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void Conta::SetTitular(string Titular)
{
	this->Titular = Titular;
}


