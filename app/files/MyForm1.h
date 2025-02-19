#pragma once
#include "MyForm2.h"

namespace Project1 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Text;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MyForm1
	/// </summary>

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private:
		SqlConnection^ sqlConnection;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label8;

	public:
		int uzytkownikID;
		MyForm1(int userId)
		{
			components = gcnew System::ComponentModel::Container();
			InitializeComponent();
			InitializeTimer();
			pozostalyCzas = 99;
			this->labelCzas->Text = pozostalyCzas.ToString();
			this->uzytkownikID = userId;
			InitializeDatabaseConnection();
			wypiszTablice();
		}

		MyForm1(void)
		{
			components = gcnew System::ComponentModel::Container();
			InitializeComponent();
			InitializeTimer();
			pozostalyCzas = 99;
			this->labelCzas->Text = pozostalyCzas.ToString();
			InitializeDatabaseConnection();
			wypiszTablice();
		}


	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ kontoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wylogujToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Timer^ hideFormTimer;
	private: System::Windows::Forms::Label^ labelCzas;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;







	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;




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
		/// 
		int pozostalyCzas;
		String^ rodzajSortowania = "ID";
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->kontoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wylogujToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelCzas = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(8, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(922, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Witam cie w programie! Wpisz dane i kliknij \'+\' aby dodac je do bazy. Zaznacz ID "
				L"i kliknij \'-\' aby je usunac!";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Black;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->kontoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 29);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// kontoToolStripMenuItem
			// 
			this->kontoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->wylogujToolStripMenuItem,
					this->zamknijToolStripMenuItem
			});
			this->kontoToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->kontoToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->kontoToolStripMenuItem->Name = L"kontoToolStripMenuItem";
			this->kontoToolStripMenuItem->Size = System::Drawing::Size(62, 25);
			this->kontoToolStripMenuItem->Text = L"Opcje";
			// 
			// wylogujToolStripMenuItem
			// 
			this->wylogujToolStripMenuItem->Name = L"wylogujToolStripMenuItem";
			this->wylogujToolStripMenuItem->Size = System::Drawing::Size(138, 26);
			this->wylogujToolStripMenuItem->Text = L"Wyloguj";
			this->wylogujToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::wylogujToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(138, 26);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::zamknijToolStripMenuItem_Click);
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
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.92421F)));
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label6, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label7, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 3, 1);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->tableLayoutPanel1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tableLayoutPanel1->Location = System::Drawing::Point(114, 57);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(858, 300);
			this->tableLayoutPanel1->TabIndex = 2;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::tableLayoutPanel1_Paint);
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
			this->label6->Location = System::Drawing::Point(82, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 22);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Nazwa";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(244, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 22);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Login";
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
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::Color::DarkGray;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Location = System::Drawing::Point(46, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 27);
			this->textBox1->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->BackColor = System::Drawing::Color::DarkGray;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox2->Location = System::Drawing::Point(203, 50);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 27);
			this->textBox2->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(575, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 22);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Haslo";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->BackColor = System::Drawing::Color::DarkGray;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox3->Location = System::Drawing::Point(360, 50);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(486, 27);
			this->textBox3->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(13, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 40);
			this->button2->TabIndex = 4;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(12, 56);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(96, 40);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Generuj";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::SystemColors::MenuText;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numericUpDown1->ForeColor = System::Drawing::SystemColors::Window;
			this->numericUpDown1->Location = System::Drawing::Point(65, 148);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(43, 39);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm1::numericUpDown1_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(12, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 39);
			this->label3->TabIndex = 7;
			this->label3->Text = L"ID";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(247, 479);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(615, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Ze wzgledow bezpieczenstwa automatyczne wylogowanie nastapi za:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelCzas
			// 
			this->labelCzas->BackColor = System::Drawing::Color::Transparent;
			this->labelCzas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCzas->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelCzas->Location = System::Drawing::Point(854, 479);
			this->labelCzas->Name = L"labelCzas";
			this->labelCzas->Size = System::Drawing::Size(34, 23);
			this->labelCzas->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(894, 477);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 25);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Odswiez";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->listBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ID", L"Nazwa", L"Login", L"Haslo" });
			this->listBox1->Location = System::Drawing::Point(12, 193);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(96, 104);
			this->listBox1->TabIndex = 9;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox1_SelectedIndexChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Location = System::Drawing::Point(8, 300);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 29);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Posortuj";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 511);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->labelCzas);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L"Menadzer hasel";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void InitializeTimer() {
			this->hideFormTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->hideFormTimer->Interval = 1000;
			this->hideFormTimer->Tick += gcnew System::EventHandler(this, &MyForm1::OnTimerTick);
			this->hideFormTimer->Start();
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
	private:
		void OnTimerTick(Object^ sender, EventArgs^ e) {
			pozostalyCzas--;
			this->labelCzas->Text = pozostalyCzas.ToString();
			if (pozostalyCzas <= 0) {
				System::Diagnostics::Process::Start(Application::ExecutablePath);
				Application::Exit();
			}
		}
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


				String^ commandText = "SELECT ID, Nazwa, Login, CONVERT(NVARCHAR(MAX), DECRYPTBYCERT(CERT_ID('Certyfikat'), ZaszyfrowaneHaslo)) AS OdszyfrowaneHaslo FROM Hasla WHERE UzytkownikID = " + uzytkownikID + " ORDER BY " + rodzajSortowania + " ASC";
				SqlCommand^ sqlCommand = gcnew SqlCommand(commandText, sqlConnection);

				SqlDataReader^ dataReader = sqlCommand->ExecuteReader();
				int currentRow = 2;
				tableLayoutPanel1->RowCount = currentRow;
				while (dataReader->Read())
				{
					tableLayoutPanel1->RowCount++;
					tableLayoutPanel1->RowStyles->Add(gcnew RowStyle(SizeType::Absolute, 40));

					Label^ label1 = gcnew Label();
					label1->Text = dataReader["ID"]->ToString();
					label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, 11);
					Label^ label2 = gcnew Label();
					label2->AutoSize = false;
					label2->Size = System::Drawing::Size(150, 60);
					label2->Text = dataReader["Nazwa"]->ToString();
					label2->Font = gcnew System::Drawing::Font(label2->Font->FontFamily, 11);
					Label^ label3 = gcnew Label();
					label3->AutoSize = false;
					label3->Size = System::Drawing::Size(150, 60);
					label3->Text = dataReader["Login"]->ToString();
					label3->Font = gcnew System::Drawing::Font(label3->Font->FontFamily, 11);
					Label^ label4 = gcnew Label();
					label4->AutoSize = false;
					label4->Size = System::Drawing::Size(520, 60);
					label4->Text = dataReader["OdszyfrowaneHaslo"]->ToString();
					label4->Font = gcnew System::Drawing::Font(label4->Font->FontFamily, 11);

					tableLayoutPanel1->Controls->Add(label1, 0, tableLayoutPanel1->RowCount - 1);
					tableLayoutPanel1->Controls->Add(label2, 1, tableLayoutPanel1->RowCount - 1);
					tableLayoutPanel1->Controls->Add(label3, 2, tableLayoutPanel1->RowCount - 1);
					tableLayoutPanel1->Controls->Add(label4, 3, tableLayoutPanel1->RowCount - 1);
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
				String^ commandText = "SELECT MAX(ID) FROM Hasla WHERE UzytkownikID =" + uzytkownikID;
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
			if (textBox3->Text->Length < 10) {
				return false;
			}

			return true;
		}
	
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
//USUWANIE
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int rzadID = Decimal::ToInt32(numericUpDown1->Value);
	String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
	SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);

	try
	{
		sqlConnection->Open();
		String^ usunRekord = "DELETE FROM Hasla WHERE ID = @id and UzytkownikID = " + uzytkownikID;
		SqlCommand^ sqlCommand1 = gcnew SqlCommand(usunRekord, sqlConnection);

		sqlCommand1->Parameters->AddWithValue("@id", rzadID);

		String^ aktualizujID = "UPDATE Hasla SET ID = ID - 1 WHERE ID > @id";
		SqlCommand^ sqlCommand2 = gcnew SqlCommand(aktualizujID, sqlConnection);

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
//GENERUJ
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm2^ myForm2 = gcnew MyForm2();
	myForm2->Show();
}
//DODAWANIE DO BAZY
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ nazwa = textBox1->Text;
	String^ login = textBox2->Text;
	String^ haslo = textBox3->Text;
	int nastepneID = pobierzNastepneID();

	if (nastepneID != -1) {

		String^ connectionString = "Data Source=localhost;Initial Catalog=projekt;Integrated Security=True";
		SqlConnection^ sqlConnection = gcnew SqlConnection(connectionString);
		try {
			sqlConnection->Open();

			String^ sciezka = "C:/Users/HP/Desktop/Wiktor_Grzelka/zakazaneSlowa.txt";
			List<String^>^ zakazaSekwencjaZPliku = zaladujZPliku(sciezka);

			String^ sprawdzPowtarzalnosc = "SELECT COUNT(*) FROM Hasla WHERE CONVERT(NVARCHAR(MAX), DECRYPTBYCERT(CERT_ID('Certyfikat'), ZaszyfrowaneHaslo)) = @Haslo";
			SqlCommand^ sprawdzSqlCommand = gcnew SqlCommand(sprawdzPowtarzalnosc, sqlConnection);
			sprawdzSqlCommand->Parameters->AddWithValue("@Haslo", haslo);
			int iloscPowtorzen = Convert::ToInt32(sprawdzSqlCommand->ExecuteScalar());

			if (iloscPowtorzen > 0) {
				MessageBox::Show("Podane has³o ju¿ istnieje w bazie danych.");
			}
			else {
				List<String^>^ daneZBazy = gcnew List<String^>();
				String^ query = "SELECT Nazwa, Login FROM Hasla WHERE UzytkownikID = " + uzytkownikID;
				SqlCommand^ command = gcnew SqlCommand(query, sqlConnection);
				SqlDataReader^ reader = command->ExecuteReader();
				while (reader->Read()) {
					daneZBazy->Add(reader["Nazwa"]->ToString());
					daneZBazy->Add(reader["Login"]->ToString());
				}
				reader->Close();

				if (!sprawdzHaslo(haslo, daneZBazy, zakazaSekwencjaZPliku) || haslo == nazwa || haslo == login) {
					MessageBox::Show("Has³o zawiera zabronion¹ sekwencjê lub jest za krotkie.");
				}
				else {
					String^ commandText = "INSERT INTO Hasla (ID, Nazwa, Login, ZaszyfrowaneHaslo, UzytkownikID) VALUES (@id, @nazwa, @login, ENCRYPTBYCERT(CERT_ID('Certyfikat'), @haslo), " + uzytkownikID + ")";
					SqlCommand^ sqlCommand = gcnew SqlCommand(commandText, sqlConnection);
					sqlCommand->Parameters->AddWithValue("@id", nastepneID);
					sqlCommand->Parameters->AddWithValue("@nazwa", nazwa);
					sqlCommand->Parameters->AddWithValue("@login", login);
					sqlCommand->Parameters->AddWithValue("@haslo", haslo);
				
					sqlCommand->ExecuteNonQuery();

					textBox1->Text = "";
					textBox2->Text = "";
					textBox3->Text = "";
				}
			}
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
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
//toolstripmenu
private: System::Void wylogujToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start(Application::ExecutablePath);
	Application::Exit();
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
//ODSWIEZ ZEGAR
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pozostalyCzas = 99;
	this->labelCzas->Text = pozostalyCzas.ToString();
	this->hideFormTimer->Start();
}
//SORTOWANIE
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->listBox1->SelectedIndex != -1) {
		String^ selectedItem = this->listBox1->SelectedItem->ToString();
		if (selectedItem == "ID") {
			rodzajSortowania = "ID ";
		}
		else if (selectedItem == "Nazwa") {
			rodzajSortowania = "Nazwa";
		}
		else if (selectedItem == "Login") {
			rodzajSortowania = "Login";
		}
		else if (selectedItem == "Haslo") {
			rodzajSortowania = "ZaszyfrowaneHaslo";
		}
		wypiszTablice();
		}
	}
};
}
