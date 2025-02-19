#pragma once
#include <ctime>
#include <cstdlib>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MyForm2
	/// </summary>
	
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ kontoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wylogujToolStripMenuItem;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->kontoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wylogujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label1->Location = System::Drawing::Point(10, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(556, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Potrzebuje paru wytycznych aby wygenerowac dla ciebie haslo";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox1->Location = System::Drawing::Point(15, 66);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(140, 29);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Wielkie litery";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox2->Location = System::Drawing::Point(15, 101);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(77, 29);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Cyfry";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox3->Location = System::Drawing::Point(15, 136);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(167, 29);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"Znaki specjalne";
			this->checkBox3->UseVisualStyleBackColor = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::Black;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numericUpDown1->ForeColor = System::Drawing::SystemColors::Window;
			this->numericUpDown1->Location = System::Drawing::Point(15, 171);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(98, 30);
			this->numericUpDown1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(114, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Dlugosc";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(15, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 36);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Generuj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(119, 210);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(78, 30);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Black;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->kontoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(573, 29);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// kontoToolStripMenuItem
			// 
			this->kontoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->wylogujToolStripMenuItem,
					this->zamknijToolStripMenuItem
			});
			this->kontoToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->kontoToolStripMenuItem->Name = L"kontoToolStripMenuItem";
			this->kontoToolStripMenuItem->Size = System::Drawing::Size(98, 25);
			this->kontoToolStripMenuItem->Text = L"Opcje";
			// 
			// wylogujToolStripMenuItem
			// 
			this->wylogujToolStripMenuItem->Name = L"wylogujToolStripMenuItem";
			this->wylogujToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->wylogujToolStripMenuItem->Text = L"Wyloguj";
			this->wylogujToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::wylogujToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(15, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 36);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Powrot";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(15, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 36);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Dodaj do";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::SystemColors::MenuText;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numericUpDown2->ForeColor = System::Drawing::SystemColors::Window;
			this->numericUpDown2->Location = System::Drawing::Point(119, 249);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(36, 36);
			this->numericUpDown2->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(160, 249);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 36);
			this->label3->TabIndex = 11;
			this->label3->Text = L"ID";
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm2::zamknijToolStripMenuItem_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(573, 511);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm2";
			this->Text = L"Generator Hasel";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
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
	bool sprawdzHaslo(String^ password, List<String^>^ daneZBazy, List<String^>^ zakazaSekwencjaZPliku) {
		for each (String ^ element in daneZBazy) {
			for (int i = 0; i <= element->Length - 4; i++) {
				String^ sekwencja = element->Substring(i, 4);
				if (password->Contains(sekwencja)) {
					return false;
				}
			}
		}
		for each (String ^ sek in zakazaSekwencjaZPliku) {
			if (password->Contains(sek)) {
				return false;
			}
		}

		return true;
	}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int dlugosc = Convert::ToInt32(numericUpDown1->Text);
		bool uzyjWielkich = checkBox1->Checked;
		bool UzyjCyfr = checkBox2->Checked;
		bool UzyjSpecjalnych = checkBox3->Checked;

		String^ haslo = generujhaslo(dlugosc, uzyjWielkich, UzyjCyfr, UzyjSpecjalnych);
		textBox1->Text = haslo;
		textBox1->Width = TextRenderer::MeasureText(haslo, textBox1->Font).Width;
	}
	String^ generujhaslo(int dlugosc, bool uzyjWielkich, bool UzyjCyfr, bool UzyjSpecjalnych)
    {
        String^ malelitery = "abcdefghijklmnopqrstuvwxyz";
        String^ wielkilitery = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String^ cyfry = "0123456789";
		String^ specjalne = "!@#$%^&*()_-+=<>?";

        String^ wszystkieznaki = malelitery;

        if (uzyjWielkich) {
			wszystkieznaki += uzyjWielkich;
        }
        if (UzyjCyfr) {
			wszystkieznaki += cyfry;
        }
        if (UzyjSpecjalnych) {
			wszystkieznaki += specjalne;
        }

        Random^ random = gcnew Random();
        String^ password = "";

        for (int i = 0; i < dlugosc; ++i) {
            int losowaindex = random->Next(wszystkieznaki->Length);
            password += wszystkieznaki[losowaindex];
        }

        return password;
    }
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this-> Hide();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int idUzytkownika = Decimal::ToInt32(numericUpDown2->Value);
	String^ noweHaslo = textBox1->Text;
	String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
	SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);

	try
	{
		sqlConnection->Open();
		String^ sciezka = "C:/Users/HP/Desktop/Wiktor_Grzelka/zakazaneSlowa.txt";
		List<String^>^ zakazaSekwencjaZPliku = zaladujZPliku(sciezka);

		String^ sprawdzPowtarzalnosc = "SELECT COUNT(*) FROM Hasla WHERE CONVERT(NVARCHAR(MAX), DECRYPTBYCERT(CERT_ID('Certyfikat'), ZaszyfrowaneHaslo)) = @Haslo";
		SqlCommand^ sprawdzSqlCommand = gcnew SqlCommand(sprawdzPowtarzalnosc, sqlConnection);
		sprawdzSqlCommand->Parameters->AddWithValue("@Haslo", noweHaslo);
		int iloscPowtorzen = Convert::ToInt32(sprawdzSqlCommand->ExecuteScalar());

		if (iloscPowtorzen > 0) {
			MessageBox::Show("Podane has³o ju¿ istnieje w bazie danych.");
		}
		else {
			List<String^>^ daneZBazy = gcnew List<String^>();
			String^ query = "SELECT Nazwa, Login FROM Hasla";
			SqlCommand^ command = gcnew SqlCommand(query, sqlConnection);
			SqlDataReader^ reader = command->ExecuteReader();
			while (reader->Read()) {
				daneZBazy->Add(reader["Nazwa"]->ToString());
				daneZBazy->Add(reader["Login"]->ToString());
			}
			reader->Close();

			if (!sprawdzHaslo(noweHaslo, daneZBazy, zakazaSekwencjaZPliku)) {
				MessageBox::Show("Has³o zawiera zabronion¹ sekwencjê.");
			}
			else {
				String^ commandText = "UPDATE Hasla SET ZaszyfrowaneHaslo = EncryptByCert(Cert_ID('Certyfikat'), @Haslo) WHERE ID = @ID";
				SqlCommand^ sqlCommand = gcnew SqlCommand(commandText, sqlConnection);

				sqlCommand->Parameters->AddWithValue("@ID", idUzytkownika);
				sqlCommand->Parameters->AddWithValue("@Haslo", noweHaslo);

				int affectedRows = sqlCommand->ExecuteNonQuery();
				if (affectedRows > 0) {
					MessageBox::Show("Haslo zostalo zaktualizowane.");
					this->Hide();
				}
				else {
					MessageBox::Show("Bledne ID");
				}
			}
			
		}
		
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Wyst¹pi³ b³¹d: " + e->Message);
	}
	finally
	{
		if (sqlConnection->State == ConnectionState::Open)
		{
			sqlConnection->Close();
		}
	}
}
private: System::Void wylogujToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start(Application::ExecutablePath);
	Application::Exit();
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
