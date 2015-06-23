#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^  piw;
	protected:

	private: System::Windows::Forms::CheckBox^  wino;
	private: System::Windows::Forms::CheckBox^  wódka;
	private: System::Windows::Forms::CheckBox^  inne;



	protected:

	protected:



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  licz;

	private: System::Windows::Forms::TextBox^  licz1;
	private: System::Windows::Forms::TextBox^  licz2;
	private: System::Windows::Forms::TextBox^  wyn;
	private: System::Windows::Forms::Label^  symbol;
	private: System::Windows::Forms::TextBox^  Masa;
	private: System::Windows::Forms::TextBox^  Ilosc;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->piw = (gcnew System::Windows::Forms::CheckBox());
			this->wino = (gcnew System::Windows::Forms::CheckBox());
			this->wódka = (gcnew System::Windows::Forms::CheckBox());
			this->inne = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->licz = (gcnew System::Windows::Forms::Button());
			this->licz1 = (gcnew System::Windows::Forms::TextBox());
			this->licz2 = (gcnew System::Windows::Forms::TextBox());
			this->wyn = (gcnew System::Windows::Forms::TextBox());
			this->symbol = (gcnew System::Windows::Forms::Label());
			this->Masa = (gcnew System::Windows::Forms::TextBox());
			this->Ilosc = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// piw
			// 
			this->piw->AutoSize = true;
			this->piw->Location = System::Drawing::Point(257, 50);
			this->piw->Name = L"piw";
			this->piw->Size = System::Drawing::Size(48, 17);
			this->piw->TabIndex = 0;
			this->piw->Text = L"piwo";
			this->piw->UseVisualStyleBackColor = true;
			this->piw->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// wino
			// 
			this->wino->AutoSize = true;
			this->wino->Location = System::Drawing::Point(257, 73);
			this->wino->Name = L"wino";
			this->wino->Size = System::Drawing::Size(48, 17);
			this->wino->TabIndex = 1;
			this->wino->Text = L"wino";
			this->wino->UseVisualStyleBackColor = true;
			this->wino->CheckedChanged += gcnew System::EventHandler(this, &Form1::ode_CheckedChanged);
			// 
			// wódka
			// 
			this->wódka->AutoSize = true;
			this->wódka->Location = System::Drawing::Point(257, 96);
			this->wódka->Name = L"wódka";
			this->wódka->Size = System::Drawing::Size(58, 17);
			this->wódka->TabIndex = 2;
			this->wódka->Text = L"wódka";
			this->wódka->UseVisualStyleBackColor = true;
			this->wódka->CheckedChanged += gcnew System::EventHandler(this, &Form1::mno_CheckedChanged);
			// 
			// inne
			// 
			this->inne->AutoSize = true;
			this->inne->Location = System::Drawing::Point(257, 119);
			this->inne->Name = L"inne";
			this->inne->Size = System::Drawing::Size(46, 17);
			this->inne->TabIndex = 3;
			this->inne->Text = L"inne";
			this->inne->UseVisualStyleBackColor = true;
			this->inne->CheckedChanged += gcnew System::EventHandler(this, &Form1::dzie_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(254, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Promile";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// licz
			// 
			this->licz->Location = System::Drawing::Point(122, 106);
			this->licz->Name = L"licz";
			this->licz->Size = System::Drawing::Size(75, 23);
			this->licz->TabIndex = 5;
			this->licz->Text = L"licz";
			this->licz->UseVisualStyleBackColor = true;
			this->licz->Click += gcnew System::EventHandler(this, &Form1::wynik_Click);
			// 
			// licz1
			// 
			this->licz1->Location = System::Drawing::Point(12, 43);
			this->licz1->Name = L"licz1";
			this->licz1->Size = System::Drawing::Size(66, 20);
			this->licz1->TabIndex = 6;
			this->licz1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// licz2
			// 
			this->licz2->Location = System::Drawing::Point(12, 108);
			this->licz2->Name = L"licz2";
			this->licz2->Size = System::Drawing::Size(66, 20);
			this->licz2->TabIndex = 7;
			// 
			// wyn
			// 
			this->wyn->Location = System::Drawing::Point(228, 198);
			this->wyn->Name = L"wyn";
			this->wyn->Size = System::Drawing::Size(100, 20);
			this->wyn->TabIndex = 8;
			this->wyn->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_1);
			// 
			// symbol
			// 
			this->symbol->AutoSize = true;
			this->symbol->Location = System::Drawing::Point(139, 50);
			this->symbol->Name = L"symbol";
			this->symbol->Size = System::Drawing::Size(39, 13);
			this->symbol->TabIndex = 9;
			this->symbol->Text = L"symbol";
			// 
			// Masa
			// 
			this->Masa->Location = System::Drawing::Point(12, 17);
			this->Masa->Name = L"Masa";
			this->Masa->Size = System::Drawing::Size(100, 20);
			this->Masa->TabIndex = 10;
			this->Masa->Text = L"Masa";
			this->Masa->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// Ilosc
			// 
			this->Ilosc->Location = System::Drawing::Point(13, 82);
			this->Ilosc->Name = L"Ilosc";
			this->Ilosc->Size = System::Drawing::Size(100, 20);
			this->Ilosc->TabIndex = 11;
			this->Ilosc->Text = L"Iloœc ";
			this->Ilosc->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 240);
			this->Controls->Add(this->Ilosc);
			this->Controls->Add(this->Masa);
			this->Controls->Add(this->symbol);
			this->Controls->Add(this->wyn);
			this->Controls->Add(this->licz2);
			this->Controls->Add(this->licz1);
			this->Controls->Add(this->licz);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->inne);
			this->Controls->Add(this->wódka);
			this->Controls->Add(this->wino);
			this->Controls->Add(this->piw);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->symbol->Text = "+";

	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void wynik_Click(System::Object^  sender, System::EventArgs^  e) {
	double a, b, c;
	int licz;

	a = Double::Parse(licz1->Text);
	b = Double::Parse(licz2->Text);
	licz = Char::Parse(symbol->Text);
	switch (licz){
	case 43:c = a + b; break;
	case 45:c = a - b; break;
	case 42:c = a * b; break;
	case 47:c = a / b; break;
	}
	this->wyn->Text = c.ToString();
}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ode_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->symbol->Text = "-";
}
private: System::Void mno_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->symbol->Text = "*";
}
private: System::Void dzie_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->symbol->Text = "/";
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

