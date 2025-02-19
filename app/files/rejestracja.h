#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net::Mail;
	using namespace System::Net;
	using namespace System::Data::SqlClient;
	using namespace System::IO;
	/// <summary>
	/// Podsumowanie informacji o rejestracja
	/// </summary>
	public ref class rejestracja : public System::Windows::Forms::Form
	{
	public:
		rejestracja(void)
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
		~rejestracja()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label5;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(rejestracja::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Size = System::Drawing::Size(167, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Podaj adres email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(12, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Podaj telefon";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(185, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(222, 30);
			this->textBox1->TabIndex = 1;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox5->Location = System::Drawing::Point(185, 44);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(222, 30);
			this->textBox5->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Podaj haslo";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(299, 119);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(108, 30);
			this->textBox3->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(185, 119);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Wyslij";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &rejestracja::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(17, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(390, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Zarejestruj";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &rejestracja::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(12, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Podaj kod z Email";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(185, 155);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Wyslij";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &rejestracja::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(299, 155);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(108, 30);
			this->textBox4->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(185, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(222, 30);
			this->textBox2->TabIndex = 1;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(12, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 25);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Podaj kod z SMS";
			// 
			// rejestracja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(414, 286);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"rejestracja";
			this->Text = L"rejestracja";
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
				String^ email = textBox1->Text;
				MailMessage^ mail = gcnew MailMessage("mail@gmail.com", email);
				mail->Subject = "Kod weryfikuj¹cy";
				mail->Body = "Twój kod weryfikuj¹cy to: " + losowaEmail;

				SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com", 587);

				client->EnableSsl = true;

				client->Credentials = gcnew NetworkCredential("mail@gmail.com", "kod");

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
				Random^ rnd = gcnew Random();
				losowaSMS = rnd->Next(10000, 100000);
				String^ numer = textBox5->Text + "@sms.clicksend.com";
				MailMessage^ mail = gcnew MailMessage("mail@gmail.com", numer);
				mail->Subject = "auth~uzytkownik~haslo~Twoj kod SMS to~Menadzer";
				mail->Body = "" + losowaSMS;

				SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com", 587);

				client->EnableSsl = true;

				client->Credentials = gcnew NetworkCredential("mail@gmail.com", "kod");
				if (textBox5->Text->Length == 9) {
					client->Send(mail);
					MessageBox::Show("Kod weryfikacyjny wyslany, sprawdz telefon");
					return losowaSMS;
				}
				else {
					MessageBox::Show("Twoj numer ma bledna ilosc cyfr");
				}
				
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Wyst¹pi³ b³¹d: " + e->Message);
			}
		}
		List<String^>^ zaladujZPliku(String^ sciezka) {
			List<String^>^ zakazaSekwencja = gcnew List<String^>();
			try {
				StreamReader^ SR = gcnew StreamReader(sciezka);
				String^ linia;
				while ((linia = SR->ReadLine()) != nullptr) {
					if (!String::IsNullOrWhiteSpace(linia)) {
						zakazaSekwencja->Add(linia->Trim());
					}
				}
				SR->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("B³¹d podczas wczytywania pliku: " + e->Message);
			}
			return zakazaSekwencja;
		}
		bool sprawdzHaslo(String^ password, List<String^>^ zakazaSekwencjaZPliku) {
			for each (String ^ sek in zakazaSekwencjaZPliku) {
				if (password->Contains(sek)) {
					return false;
				}
			}
			if (textBox2->Text->Length < 10) {
				return false;
			}
			return true;
		}
//wyslij email
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	wyslijWiadomosc();
	MessageBox::Show("Kod weryfikacyjny wyslany, sprawdz maila");
	
	}
//zarejestruj
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = textBox1->Text;
	String^ haslo = textBox2->Text;
	String^ telefon = textBox5->Text;
	String^ kodWpisany = textBox3->Text;
	String^ smsWpisany = textBox4->Text;
	String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
	SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);
		try
		{
			sqlConnection->Open();

			String^ sciezka = "C:/Users/HP/Desktop/Wiktor_Grzelka/zakazaneSlowa.txt";
			List<String^>^ zakazaSekwencjaZPliku = zaladujZPliku(sciezka);
			if (email == "" || haslo == "" || telefon == "" || kodWpisany == "" || smsWpisany == "") {
				MessageBox::Show("Prosze wypelnij wszystkie pola");
			}
			else {
				if (!sprawdzHaslo(haslo, zakazaSekwencjaZPliku) || haslo == email) {
					MessageBox::Show("Has³o zawiera zabronion¹ sekwencjê lub jest za krotkie.");
				}
				else {
					if (kodWpisany == losowaEmail.ToString() && smsWpisany == losowaSMS.ToString()) {
						String^ ostatnieID = "SELECT MAX(UzytkownikID) FROM Uzytkownicy";
						SqlCommand^ getLastIdCommand = gcnew SqlCommand(ostatnieID, sqlConnection);
						Object^ lastIdResult = getLastIdCommand->ExecuteScalar();
						int lastId = 0;
						if (lastIdResult != nullptr && lastIdResult != DBNull::Value) {
							lastId = Convert::ToInt32(lastIdResult);
						}
						int newUserId = lastId + 1;
						String^ insertQuery = "INSERT INTO Uzytkownicy (UzytkownikID, EMail, Haslo, Telefon) VALUES(@UserID, @Name, ENCRYPTBYCERT(CERT_ID('Certyfikat'), @Password), @Numer); ";
						SqlCommand^ insertCommand = gcnew SqlCommand(insertQuery, sqlConnection);
						insertCommand->Parameters->AddWithValue("@UserID", newUserId);
						insertCommand->Parameters->AddWithValue("@Name", email);
						insertCommand->Parameters->AddWithValue("@Numer", telefon);
						insertCommand->Parameters->AddWithValue("@Password", haslo);

						insertCommand->ExecuteNonQuery();

						MessageBox::Show("U¿ytkownik zosta³ pomyœlnie utworzony.");

						sqlConnection->Close();
						System::Diagnostics::Process::Start(Application::ExecutablePath);
						Application::Exit();
					}
					else {
						MessageBox::Show("Bledny kod weryfikacyjny");
					}
				}
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Blad: " + e->Message);
		}
		finally
		{
			if (sqlConnection->State == ConnectionState::Open)
			{
				sqlConnection->Close();
			}
		}
	}
//wyslij sms
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	wyslijSMS();
}
};
}
