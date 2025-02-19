#pragma once
#include "MyForm1.h"
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
	/// Podsumowanie informacji o logowanie
	/// </summary>
	public ref class logowanie : public System::Windows::Forms::Form
	{
	public:
		logowanie(String^ email)
		{
			InitializeComponent();
			this->email = email;
			wyslijWiadomosc();
			wyslijSMS();
		}
		logowanie(void)
		{
			InitializeComponent();
			wyslijWiadomosc();
			wyslijSMS();
		}
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ email;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(logowanie::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
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
			this->label1->Size = System::Drawing::Size(165, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Podaj kod z email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(13, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Podaj kod z SMS";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(17, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(305, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Zaloguj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &logowanie::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(183, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 30);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(183, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 30);
			this->textBox2->TabIndex = 4;
			// 
			// logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(334, 176);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"logowanie";
			this->Text = L"logowanie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int losowaEmail;
		int losowaSMS;
		int wyslijWiadomosc()
		{
			try
			{
				Random^ rnd = gcnew Random();
				losowaEmail = rnd->Next(10000, 100000);
				MailMessage^ mail = gcnew MailMessage("mail@gmail.com", email);
				mail->Subject = "Kod weryfikuj¹cy";
				mail->Body = "Twój kod weryfikuj¹cy to: " + losowaEmail;

				SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com", 587);

				client->EnableSsl = true;

				client->Credentials = gcnew NetworkCredential("mail@gmail.com", "haslo");

				client->Send(mail);
				return losowaEmail;
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Wyst¹pi³ b³¹d: " + e->Message);
			}
		}
		int wyslijSMS() {
			try
			{
				String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
				SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);
				sqlConnection->Open();
				String^ numerTelefonu = "SELECT Telefon FROM Uzytkownicy WHERE EMail = '" + email + "'";
				String^ domena = "@sms.clicksend.com";
				SqlCommand^ command = gcnew SqlCommand(numerTelefonu, sqlConnection);
				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->Read()) {
					String^ telefon = reader["Telefon"]->ToString();
					String^ calyEmail = telefon + domena;
					Random^ rnd = gcnew Random();
					losowaSMS = rnd->Next(10000, 100000);
		
					MailMessage^ mail = gcnew MailMessage("mail@gmail.com", calyEmail);
					mail->Subject = "auth~uzytkownik~hasloTwoj kod SMS to~Menadzer";
					mail->Body = "" + losowaSMS;

					SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com", 587);

					client->EnableSsl = true;

					client->Credentials = gcnew NetworkCredential("mail@gmail.com", "haslo");

					client->Send(mail);
					return losowaSMS;
				}
			
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Wyst¹pi³ b³¹d: " + e->Message);
			}
		}
//LOGOWANIEwiktorg
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ kodEmail = textBox1->Text;
		String^ kodSMS = textBox2->Text;
		String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
		SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);
		int userId = -1;
		try
		{
			sqlConnection->Open();
			String^ pobierzDane = "SELECT UzytkownikID FROM Uzytkownicy WHERE EMail = @Email";
			
			SqlCommand^ command = gcnew SqlCommand(pobierzDane, sqlConnection);
			command->Parameters->AddWithValue("@Email", email);
			SqlDataReader^ reader = command->ExecuteReader();
			
			if (reader->Read() && kodEmail == losowaEmail.ToString() && kodSMS == losowaSMS.ToString()) {
				userId = reader->GetInt32(0);
				MyForm1^ myForm1 = gcnew MyForm1(userId);
				myForm1->Show();
				this->Hide();
			}
			else {
				MessageBox::Show("Bledny kod weryfikacyjny");
			}

		}
		catch (SqlException^ ex) {
			MessageBox::Show("Wyst¹pi³ b³¹d SQL: " + ex->Message);
		}
		finally {
			if (sqlConnection->State == ConnectionState::Open) {
				sqlConnection->Close();
			}
		}
	}
	};
};
