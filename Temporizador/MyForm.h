#pragma once

namespace Temporizador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btIniciar;
	private: System::Windows::Forms::Button^ btParar;
	private: System::Windows::Forms::Label^ lbContador;
	private: System::Windows::Forms::Timer^ timerContador;
	protected:



	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btIniciar = (gcnew System::Windows::Forms::Button());
			this->btParar = (gcnew System::Windows::Forms::Button());
			this->lbContador = (gcnew System::Windows::Forms::Label());
			this->timerContador = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// btIniciar
			// 
			this->btIniciar->Location = System::Drawing::Point(12, 25);
			this->btIniciar->Name = L"btIniciar";
			this->btIniciar->Size = System::Drawing::Size(75, 23);
			this->btIniciar->TabIndex = 0;
			this->btIniciar->Text = L"Iniciar";
			this->btIniciar->UseVisualStyleBackColor = true;
			this->btIniciar->Click += gcnew System::EventHandler(this, &MyForm::btIniciar_Click);
			// 
			// btParar
			// 
			this->btParar->Location = System::Drawing::Point(12, 68);
			this->btParar->Name = L"btParar";
			this->btParar->Size = System::Drawing::Size(75, 23);
			this->btParar->TabIndex = 0;
			this->btParar->Text = L"Parar";
			this->btParar->UseVisualStyleBackColor = true;
			this->btParar->Click += gcnew System::EventHandler(this, &MyForm::btParar_Click);
			// 
			// lbContador
			// 
			this->lbContador->AutoSize = true;
			this->lbContador->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbContador->Location = System::Drawing::Point(209, 41);
			this->lbContador->Name = L"lbContador";
			this->lbContador->Size = System::Drawing::Size(33, 36);
			this->lbContador->TabIndex = 1;
			this->lbContador->Text = L"0";
			// 
			// timerContador
			// 
			this->timerContador->Tick += gcnew System::EventHandler(this, &MyForm::timerContador_tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 114);
			this->Controls->Add(this->lbContador);
			this->Controls->Add(this->btParar);
			this->Controls->Add(this->btIniciar);
			this->Name = L"MyForm";
			this->Text = L"Contador";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// limitado pra quando a variavel contador encher
		int contador = 0;
	private: System::Void timerContador_tick(System::Object^ sender, System::EventArgs^ e) {
		contador++;
		lbContador->Text = Convert::ToString(contador);
	}
	private: System::Void btIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		timerContador->Enabled = true;
	}
	private: System::Void btParar_Click(System::Object^ sender, System::EventArgs^ e) {
		timerContador->Enabled = false;
	}
};
}
