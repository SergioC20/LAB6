#pragma once
#include <string>
#include "Objeto.h"
#include "Ordenamiento.h"
#include <fstream>

namespace LABORATORIO6SERGIOCARDONA1222419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Collections::Generic;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Threading;

	Pokemon archivo;
	Ordenamiento datos;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSelectionSort;
	private: System::Windows::Forms::Button^ btnShellSort;
	private: System::Windows::Forms::Button^ btnQuickSort;
	protected:

	protected:


	private: System::Windows::Forms::Button^ btnCargarArchivo;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBoxNationalNumber;




	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ListBox^ listBoxPokemon;

	private: System::Windows::Forms::ListBox^ listBoxGeneracion;
	private: System::Windows::Forms::OpenFileDialog^ openFile;
	private: System::Windows::Forms::Button^ btnSelctionSortG;
	private: System::Windows::Forms::Button^ btnQuickSortG;
	private: System::Windows::Forms::Button^ btnShellSortG;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnSelectionSort = (gcnew System::Windows::Forms::Button());
			this->btnShellSort = (gcnew System::Windows::Forms::Button());
			this->btnQuickSort = (gcnew System::Windows::Forms::Button());
			this->btnCargarArchivo = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBoxNationalNumber = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBoxPokemon = (gcnew System::Windows::Forms::ListBox());
			this->listBoxGeneracion = (gcnew System::Windows::Forms::ListBox());
			this->openFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnSelctionSortG = (gcnew System::Windows::Forms::Button());
			this->btnQuickSortG = (gcnew System::Windows::Forms::Button());
			this->btnShellSortG = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSelectionSort
			// 
			this->btnSelectionSort->Location = System::Drawing::Point(808, 188);
			this->btnSelectionSort->Name = L"btnSelectionSort";
			this->btnSelectionSort->Size = System::Drawing::Size(134, 23);
			this->btnSelectionSort->TabIndex = 0;
			this->btnSelectionSort->Text = L"Selection Sort";
			this->btnSelectionSort->UseVisualStyleBackColor = true;
			this->btnSelectionSort->Click += gcnew System::EventHandler(this, &MyForm::btnSelectionSort_Click);
			// 
			// btnShellSort
			// 
			this->btnShellSort->Location = System::Drawing::Point(808, 349);
			this->btnShellSort->Name = L"btnShellSort";
			this->btnShellSort->Size = System::Drawing::Size(134, 23);
			this->btnShellSort->TabIndex = 1;
			this->btnShellSort->Text = L"Shell Sort";
			this->btnShellSort->UseVisualStyleBackColor = true;
			this->btnShellSort->Click += gcnew System::EventHandler(this, &MyForm::btnShellSort_Click);
			// 
			// btnQuickSort
			// 
			this->btnQuickSort->Location = System::Drawing::Point(808, 263);
			this->btnQuickSort->Name = L"btnQuickSort";
			this->btnQuickSort->Size = System::Drawing::Size(134, 23);
			this->btnQuickSort->TabIndex = 2;
			this->btnQuickSort->Text = L"Quick Sort";
			this->btnQuickSort->UseVisualStyleBackColor = true;
			this->btnQuickSort->Click += gcnew System::EventHandler(this, &MyForm::btnQuickSort_Click);
			// 
			// btnCargarArchivo
			// 
			this->btnCargarArchivo->Location = System::Drawing::Point(808, 32);
			this->btnCargarArchivo->Name = L"btnCargarArchivo";
			this->btnCargarArchivo->Size = System::Drawing::Size(121, 23);
			this->btnCargarArchivo->TabIndex = 3;
			this->btnCargarArchivo->Text = L"Cargar Archivo";
			this->btnCargarArchivo->UseVisualStyleBackColor = true;
			this->btnCargarArchivo->Click += gcnew System::EventHandler(this, &MyForm::btnCargarArchivo_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(452, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"POKÉDEX";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"National Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(606, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Generación";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(837, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Ordenar por:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(366, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Pokémon";
			// 
			// listBoxNationalNumber
			// 
			this->listBoxNationalNumber->FormattingEnabled = true;
			this->listBoxNationalNumber->ItemHeight = 16;
			this->listBoxNationalNumber->Location = System::Drawing::Point(73, 92);
			this->listBoxNationalNumber->Name = L"listBoxNationalNumber";
			this->listBoxNationalNumber->Size = System::Drawing::Size(121, 308);
			this->listBoxNationalNumber->TabIndex = 12;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Generacion", L"National Number" });
			this->comboBox1->Location = System::Drawing::Point(808, 129);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// listBoxPokemon
			// 
			this->listBoxPokemon->FormattingEnabled = true;
			this->listBoxPokemon->ItemHeight = 16;
			this->listBoxPokemon->Location = System::Drawing::Point(291, 92);
			this->listBoxPokemon->Name = L"listBoxPokemon";
			this->listBoxPokemon->Size = System::Drawing::Size(193, 308);
			this->listBoxPokemon->TabIndex = 14;
			// 
			// listBoxGeneracion
			// 
			this->listBoxGeneracion->FormattingEnabled = true;
			this->listBoxGeneracion->ItemHeight = 16;
			this->listBoxGeneracion->Location = System::Drawing::Point(585, 108);
			this->listBoxGeneracion->Name = L"listBoxGeneracion";
			this->listBoxGeneracion->Size = System::Drawing::Size(114, 292);
			this->listBoxGeneracion->TabIndex = 15;
			// 
			// openFile
			// 
			this->openFile->FileName = L"openFileDialog1";
			// 
			// btnSelctionSortG
			// 
			this->btnSelctionSortG->Location = System::Drawing::Point(808, 218);
			this->btnSelctionSortG->Name = L"btnSelctionSortG";
			this->btnSelctionSortG->Size = System::Drawing::Size(134, 23);
			this->btnSelctionSortG->TabIndex = 16;
			this->btnSelctionSortG->Text = L"Selection Sort";
			this->btnSelctionSortG->UseVisualStyleBackColor = true;
			this->btnSelctionSortG->Click += gcnew System::EventHandler(this, &MyForm::btnSelctionSortG_Click);
			// 
			// btnQuickSortG
			// 
			this->btnQuickSortG->Location = System::Drawing::Point(808, 293);
			this->btnQuickSortG->Name = L"btnQuickSortG";
			this->btnQuickSortG->Size = System::Drawing::Size(134, 23);
			this->btnQuickSortG->TabIndex = 17;
			this->btnQuickSortG->Text = L"Quick Sort";
			this->btnQuickSortG->UseVisualStyleBackColor = true;
			this->btnQuickSortG->Click += gcnew System::EventHandler(this, &MyForm::btnQuickSortG_Click);
			// 
			// btnShellSortG
			// 
			this->btnShellSortG->Location = System::Drawing::Point(808, 379);
			this->btnShellSortG->Name = L"btnShellSortG";
			this->btnShellSortG->Size = System::Drawing::Size(134, 23);
			this->btnShellSortG->TabIndex = 18;
			this->btnShellSortG->Text = L"Shell Sort";
			this->btnShellSortG->UseVisualStyleBackColor = true;
			this->btnShellSortG->Click += gcnew System::EventHandler(this, &MyForm::btnShellSortG_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(970, 481);
			this->Controls->Add(this->btnShellSortG);
			this->Controls->Add(this->btnQuickSortG);
			this->Controls->Add(this->btnSelctionSortG);
			this->Controls->Add(this->listBoxGeneracion);
			this->Controls->Add(this->listBoxPokemon);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBoxNationalNumber);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCargarArchivo);
			this->Controls->Add(this->btnQuickSort);
			this->Controls->Add(this->btnShellSort);
			this->Controls->Add(this->btnSelectionSort);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: std::string Convertir(String^ convertir) {
			char cStr[50] = { 0 };

			if (convertir->Length < sizeof(cStr))
				sprintf(cStr, "%s", convertir);
			std::string stlString(cStr);

			return stlString;
		}

			
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedIndex == 0)
		{
			btnQuickSort->Visible = false;
			btnSelectionSort->Visible = false;
			btnShellSort->Visible = false;
			btnQuickSortG->Visible = true;
			btnSelctionSortG->Visible = true;
			btnShellSortG->Visible = true;
		}
		if (comboBox1->SelectedIndex == 1)
		{
			btnQuickSort->Visible = true;
			btnSelectionSort->Visible = true;
			btnShellSort->Visible = true;
			btnQuickSortG->Visible = false;
			btnSelctionSortG->Visible = false;
			btnShellSortG->Visible = false;
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	btnQuickSort->Visible = false;
	btnSelectionSort->Visible = false;
	btnShellSort->Visible = false;
	btnQuickSortG->Visible = false;
	btnSelctionSortG->Visible = false;
	btnShellSortG->Visible = false;
}
private: System::Void btnSelctionSortG_Click(System::Object^ sender, System::EventArgs^ e) {
	datos.SelectionSort_Generacion();

	listBoxNationalNumber->Items->Clear();
	listBoxPokemon->Items->Clear();
	listBoxGeneracion->Items->Clear();

	for (int j = 0; j < datos.InicializarCantidad(); j++) {

		listBoxNationalNumber->Items->Add(datos.InicializarNumero(j));

		std::string nombre1 = datos.InicializarNombres(j);
		String^ cadena1 = gcnew String(nombre1.c_str());
		listBoxPokemon->Items->Add(cadena1);

		listBoxGeneracion->Items->Add(datos.InicializarGeneracion(j));
	}
}
private: System::Void btnQuickSortG_Click(System::Object^ sender, System::EventArgs^ e) {
	datos.QuickSort_Generacion();

	listBoxNationalNumber->Items->Clear();
	listBoxPokemon->Items->Clear();
	listBoxGeneracion->Items->Clear();

	for (int j = 0; j < datos.InicializarCantidad(); j++) {

		listBoxNationalNumber->Items->Add(datos.InicializarNumero(j));

		std::string nombre1 = datos.InicializarNombres(j);
		String^ cadena1 = gcnew String(nombre1.c_str());
		listBoxPokemon->Items->Add(cadena1);
		listBoxGeneracion->Items->Add(datos.InicializarGeneracion(j));
	}
}
private: System::Void btnShellSortG_Click(System::Object^ sender, System::EventArgs^ e) {
	datos.SelectionSort_Generacion();

	listBoxNationalNumber->Items->Clear();
	listBoxPokemon->Items->Clear();
	listBoxGeneracion->Items->Clear();

	for (int j = 0; j < datos.InicializarCantidad(); j++) {

		listBoxNationalNumber->Items->Add(datos.InicializarNumero(j));

		std::string nombre1 = datos.InicializarNombres(j);
		String^ cadena1 = gcnew String(nombre1.c_str());
		listBoxPokemon->Items->Add(cadena1);
		listBoxGeneracion->Items->Add(datos.InicializarGeneracion(j));
	}
}
private: System::Void btnSelectionSort_Click(System::Object^ sender, System::EventArgs^ e) {
	datos.SelectionSort_NN();

	listBoxNationalNumber->Items->Clear();
	listBoxPokemon->Items->Clear();
	listBoxGeneracion->Items->Clear();

	for (int j = 0; j < datos.InicializarCantidad(); j++) {

		listBoxNationalNumber->Items->Add(datos.InicializarNumero(j));

		std::string nombre1 = datos.InicializarNombres(j);
		String^ cadena1 = gcnew String(nombre1.c_str());
		listBoxPokemon->Items->Add(cadena1);

		listBoxGeneracion->Items->Add(datos.InicializarGeneracion(j));
	}
}
private: System::Void btnQuickSort_Click(System::Object^ sender, System::EventArgs^ e) {
	datos.QuickSort_NN();

	listBoxNationalNumber->Items->Clear();
	listBoxPokemon->Items->Clear();
	listBoxGeneracion->Items->Clear();

	for (int j = 0; j < datos.InicializarCantidad(); j++) {

		listBoxNationalNumber->Items->Add(datos.InicializarNumero(j));

		std::string nombre1 = datos.InicializarNombres(j);
		String^ cadena1 = gcnew String(nombre1.c_str());
		listBoxPokemon->Items->Add(cadena1);

		listBoxGeneracion->Items->Add(datos.InicializarGeneracion(j));
	}
}
private: System::Void btnShellSort_Click(System::Object^ sender, System::EventArgs^ e) {
	datos.ShellSort_NN();

	listBoxNationalNumber->Items->Clear();
	listBoxPokemon->Items->Clear();
	listBoxGeneracion->Items->Clear();

	for (int j = 0; j < datos.InicializarCantidad(); j++) {

		listBoxNationalNumber->Items->Add(datos.InicializarNumero(j));

		std::string nombre1 = datos.InicializarNombres(j);
		String^ cadena1 = gcnew String(nombre1.c_str());
		listBoxPokemon->Items->Add(cadena1);

		listBoxGeneracion->Items->Add(datos.InicializarGeneracion(j));
	}
}
private: System::Void btnCargarArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ruta;
	std::string ruta_std;
	openFile->ShowDialog();
	ruta = openFile->FileName;

	ruta_std = this->Convertir(ruta);
	archivo.Cargar(ruta_std);

	int cantidad = 0;
	for (int j = 0; j < 500; j++) {
		if (archivo.Cargar(ruta_std)[j] == "") {
			cantidad = j;
			j = 501;
		}
	}


	int Numero_Nacional[500];
	string Nombre[500];
	int Generacion[500];
	size_t posicion;


	for (int i = 0; i < cantidad; i++) {

		std::string cadena = archivo.Cargar(ruta_std)[i];

		int r = 0;
		for (int j = 0; j < 3; j++) {
			posicion = cadena.find(",");
			string item = cadena.substr(0, posicion);

			if (r == 0) {
				Numero_Nacional[i] = stoi(item);
				cadena.erase(0, posicion + 1);
			}
			if (r == 1) {
				Nombre[i] = item;
				cadena.erase(0, posicion + 1);
			}
			if (r == 2) {
				Generacion[i] = stoi(item);
				cadena.erase(0, posicion + 1);
			}
			r++;
		}
	}

	for (int j = 0; j < cantidad; j++) {

		listBoxNationalNumber->Items->Add(Numero_Nacional[j]);

		std::string nombre1 = Nombre[j];
		String^ cadena1 = gcnew String(nombre1.c_str());
		listBoxPokemon->Items->Add(cadena1);

		listBoxGeneracion->Items->Add(Generacion[j]);
	}

	datos.InicializarDatos(Nombre, Generacion, Numero_Nacional, cantidad);
}
};
}
