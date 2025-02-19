#pragma once
#include "admin.h"
#include "logowanie.h"
#include "rejestracja.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net::Mail;
	using namespace System::Net;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(161, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(232, 30);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"twoj@mail.com";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(450, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Witaj w Menadzerze Hasel! Prosze sie zalogowac:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(161, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(232, 30);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"haslo";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(161, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 38);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Zaloguj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::WindowText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(279, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 38);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Rejestruj";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(486, 476);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"skip";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(573, 511);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Logowanie";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int loguj(String^ connectionString, String^ email, String^ haslo)
		{
			SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);
			int userId = -1;

			try
			{
				sqlConnection->Open();
				String^ pobierzDane = "SELECT UzytkownikID, CONVERT(NVARCHAR(MAX), DECRYPTBYCERT(CERT_ID('Certyfikat'), Haslo)) AS OdszyfrowaneHaslo FROM Uzytkownicy WHERE EMail = @Name";
				SqlCommand^ command = gcnew SqlCommand(pobierzDane, sqlConnection);
				command->Parameters->AddWithValue("@Name", email);

				SqlDataReader^ reader = command->ExecuteReader();

				if (reader->Read()) {
					String^ prawidloweHaslo = reader->GetString(1);
					if (haslo == prawidloweHaslo) {
						logowanie^ Logowanie = gcnew logowanie(email);
						Logowanie->Show();
						this->Hide();					
					}
					else {
						MessageBox::Show("Bledne haslo");
					}
				}
				else {
					MessageBox::Show("Nie znaleziono u¿ytkownika");
				}
				reader->Close();
			}
			catch (SqlException^ ex) {
				MessageBox::Show("Wyst¹pi³ b³¹d SQL: " + ex->Message);
			}
			finally {
				if (sqlConnection->State == ConnectionState::Open) {
					sqlConnection->Close();
				}
			}

			return userId;
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
//ZALOGUJ
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ email = textBox1->Text;
		String^ haslo = textBox2->Text;
		String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
		int userID = loguj(connectionString, email, haslo);

		if (userID != -1) {
			MyForm1^ myForm1 = gcnew MyForm1(userID);
			myForm1->Show();
			this->Hide();
		}
		if (email == "admin" && haslo == "admin") {
			admin^ Admin = gcnew admin();
			Admin->Show();
			this->Hide();
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
//REJESTRUJ
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	rejestracja^ Rejestracja = gcnew rejestracja();
	Rejestracja->Show();
	this->Hide();
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ myForm1 = gcnew MyForm1();
	myForm1->Show();
	this->Hide();
}
};
}
