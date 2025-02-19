#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o admin
	/// </summary>
	public ref class admin : public System::Windows::Forms::Form
	{
	private:
		SqlConnection^ sqlConnection;
	public:
		admin(void)
		{
			InitializeComponent();
			InitializeDatabaseConnection();
			wypiszTablice();
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ opcjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wylogujToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(admin::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wylogujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcjeToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// opcjeToolStripMenuItem
			// 
			this->opcjeToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->opcjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->wylogujToolStripMenuItem,
					this->zamknijToolStripMenuItem
			});
			this->opcjeToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->opcjeToolStripMenuItem->Name = L"opcjeToolStripMenuItem";
			this->opcjeToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->opcjeToolStripMenuItem->Text = L"Opcje";
			// 
			// wylogujToolStripMenuItem
			// 
			this->wylogujToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->wylogujToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->wylogujToolStripMenuItem->Name = L"wylogujToolStripMenuItem";
			this->wylogujToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->wylogujToolStripMenuItem->Text = L"Wyloguj";
			this->wylogujToolStripMenuItem->Click += gcnew System::EventHandler(this, &admin::wylogujToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->zamknijToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &admin::zamknijToolStripMenuItem_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoScroll = true;
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::DimGray;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				33)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				19.0379F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				19.0379F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				279)));
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 2, 1);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tableLayoutPanel1->Location = System::Drawing::Point(114, 27);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(858, 300);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(5, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 22);
			this->label5->TabIndex = 8;
			this->label5->Text = L"ID";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(144, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 22);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Email";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(5, 50);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(27, 27);
			this->button1->TabIndex = 3;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &admin::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::Color::DarkGray;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Location = System::Drawing::Point(40, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 27);
			this->textBox1->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->BackColor = System::Drawing::Color::DarkGray;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox3->Location = System::Drawing::Point(580, 50);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(273, 27);
			this->textBox3->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(688, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 22);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Haslo";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(13, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 40);
			this->button2->TabIndex = 5;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &admin::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 39);
			this->label3->TabIndex = 8;
			this->label3->Text = L"ID";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::SystemColors::MenuText;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numericUpDown1->ForeColor = System::Drawing::SystemColors::Window;
			this->numericUpDown1->Location = System::Drawing::Point(65, 27);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(43, 39);
			this->numericUpDown1->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(405, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 22);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Telefon";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->BackColor = System::Drawing::Color::DarkGray;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox2->Location = System::Drawing::Point(310, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(262, 27);
			this->textBox2->TabIndex = 13;
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 511);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"admin";
			this->Text = L"admin";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void InitializeDatabaseConnection()
		{
			String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";

			sqlConnection = gcnew SqlConnection(connectionString);

			try
			{
				sqlConnection->Open();
				sqlConnection->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
		}
#pragma endregion
		void czyscKolumny(TableLayoutPanel^ panel)
		{
			if (panel == nullptr) return;

			for (int row = 2; row < panel->RowCount; ++row)
			{
				for (int col = 0; col < panel->ColumnCount; ++col)
				{
					Control^ kontrolka = panel->GetControlFromPosition(col, row);
					if (kontrolka != nullptr)
					{
						panel->Controls->Remove(kontrolka);
						delete kontrolka;
					}
				}
			}
		}
		void wypiszTablice()
		{
			try
			{
				czyscKolumny(tableLayoutPanel1);
				String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
				sqlConnection = gcnew SqlConnection(connectionString);
				sqlConnection->Open();


				String^ commandText = "SELECT UzytkownikID, EMail, Telefon FROM Uzytkownicy";
				SqlCommand^ sqlCommand = gcnew SqlCommand(commandText, sqlConnection);

				SqlDataReader^ dataReader = sqlCommand->ExecuteReader();
				int currentRow = 2;
				tableLayoutPanel1->RowCount = currentRow;
				while (dataReader->Read())
				{
					tableLayoutPanel1->RowCount++;
					tableLayoutPanel1->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 40));

					Label^ label1 = gcnew Label();
					label1->Text = dataReader["UzytkownikID"]->ToString();
					label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, 11);
					Label^ label2 = gcnew Label();
					label2->AutoSize = false;
					label2->Size = System::Drawing::Size(550, 60);
					label2->Text = dataReader["EMail"]->ToString();
					label2->Font = gcnew System::Drawing::Font(label2->Font->FontFamily, 11);
					Label^ label3 = gcnew Label();
					label3->AutoSize = false;
					label3->Size = System::Drawing::Size(550, 60);
					label3->Text = dataReader["Telefon"]->ToString();
					label3->Font = gcnew System::Drawing::Font(label3->Font->FontFamily, 11);


					tableLayoutPanel1->Controls->Add(label1, 0, tableLayoutPanel1->RowCount - 1);
					tableLayoutPanel1->Controls->Add(label3, 2, tableLayoutPanel1->RowCount - 1);
					tableLayoutPanel1->Controls->Add(label2, 1, tableLayoutPanel1->RowCount - 1);
				}

				dataReader->Close();

			}
			catch (Exception^ e)
			{
				MessageBox::Show("Wyst¹pi³ b³¹d: " + e->Message);
			}
			finally
			{
				if (sqlConnection != nullptr)
					sqlConnection->Close();
			}
		}
		int pobierzNastepneID()
		{
			String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
			SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);

			try
			{
				sqlConnection->Open();
				String^ commandText = "SELECT MAX(UzytkownikID) FROM Uzytkownicy";
				SqlCommand^ sqlCommand = gcnew SqlCommand(commandText, sqlConnection);
				Object^ result = sqlCommand->ExecuteScalar();

				if (result != nullptr && result != DBNull::Value)
				{
					int maxID = Convert::ToInt32(result);
					return maxID + 1;
				}
				else
				{
					return 1;
				}
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Wyst¹pi³ b³¹d podczas pobierania ID: " + e->Message);
				return -1;
			}
			finally
			{
				sqlConnection->Close();
			}
		}
private: System::Void wylogujToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start(Application::ExecutablePath);
	Application::Exit();
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
//USUWANIE
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int rzadID = Decimal::ToInt32(numericUpDown1->Value);
	String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
	SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);

	try
	{
		sqlConnection->Open();
		String^ usunUzytkownika = "DELETE FROM Uzytkownicy WHERE UzytkownikID = @id";
		SqlCommand^ sqlCommand1 = gcnew SqlCommand(usunUzytkownika, sqlConnection);

		String^ usunDaneUzytkownika = "DELETE FROM Hasla WHERE UzytkownikID = @id";
		SqlCommand^ sqlCommand2 = gcnew SqlCommand(usunDaneUzytkownika, sqlConnection);

		sqlCommand1->Parameters->AddWithValue("@id", rzadID);
		sqlCommand2->Parameters->AddWithValue("@id", rzadID);

		int rowsAffected1 = sqlCommand1->ExecuteNonQuery();
		int rowsAffected2 = sqlCommand2->ExecuteNonQuery();

		wypiszTablice();


	}
	catch (Exception^ e)
	{
		MessageBox::Show("Wyst¹pi³ b³¹d: " + e->Message);
	}
	finally
	{
		sqlConnection->Close();
	}
}
//DODAWANIE
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = textBox1->Text;
	String^ numer = textBox2->Text;
	String^ haslo = textBox3->Text;
	int nastepneID = pobierzNastepneID();

	if (nastepneID != -1)
	{

		String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
		SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);
		try
		{
			sqlConnection->Open();

			String^ commandText = "INSERT INTO Uzytkownicy (UzytkownikID, EMail, Haslo, Telefon) VALUES (@id, @email, ENCRYPTBYCERT(CERT_ID('Certyfikat'), @haslo), @numer)";
			SqlCommand^ sqlCommand = gcnew SqlCommand(commandText, sqlConnection);
			sqlCommand->Parameters->AddWithValue("@id", nastepneID);
			sqlCommand->Parameters->AddWithValue("@email", email);
			sqlCommand->Parameters->AddWithValue("@numer", numer);
			sqlCommand->Parameters->AddWithValue("@haslo", haslo);

			sqlCommand->ExecuteNonQuery();

			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";

		}
		catch (Exception^ e)
		{
			MessageBox::Show("Wyst¹pi³ b³¹d: " + e->Message);
		}
		finally
		{
			sqlConnection->Close();
		}
		wypiszTablice();
	}
}
};
}
