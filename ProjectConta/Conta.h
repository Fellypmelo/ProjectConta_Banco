#pragma once
#include <iostream>
#include <string>

using namespace std;

class Conta {
	
	//Atributos da class Conta
	private:
		string Banco;
		int Agencia;
		int NumConta;
		string Titular;
		double Saldo {0.0};

	//Metodos da class Conta
	public:
		bool Sacar(double Valor);
		void Depositar(double Valor);
		void Transferir(Conta &Destino,double Valor);
		double ConsultarSaldo();
		
		string GetBanco();
		int GetAgencia();
		int GetNumConta();
		string GetTitular();

		void SetBanco(string Banco);
		void SetAgencia(int Agencia);
		void SetTitular(string Titular);
		void SetNumConta(int NumConta);

		static void LogoBanco();

};