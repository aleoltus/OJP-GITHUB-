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
	private: System::Windows::Forms::CheckBox^  dod;
	private: System::Windows::Forms::CheckBox^  ode;
	private: System::Windows::Forms::CheckBox^  mno;
	private: System::Windows::Forms::CheckBox^  dzie;
	protected:

	protected:



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  licz;

	private: System::Windows::Forms::TextBox^  licz1;
	private: System::Windows::Forms::TextBox^  licz2;
	private: System::Windows::Forms::TextBox^  wyn;
	private: System::Windows::Forms::Label^  symbol;




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
			this->dod = (gcnew System::Windows::Forms::CheckBox());
			this->ode = (gcnew System::Windows::Forms::CheckBox());
			this->mno = (gcnew System::Windows::Forms::CheckBox());
			this->dzie = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->licz = (gcnew System::Windows::Forms::Button());
			this->licz1 = (gcnew System::Windows::Forms::TextBox());
			this->licz2 = (gcnew System::Windows::Forms::TextBox());
			this->wyn = (gcnew System::Windows::Forms::TextBox());
			this->symbol = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dod
			// 
			this->dod->AutoSize = true;
			this->dod->Location = System::Drawing::Point(527, 42);
			this->dod->Name = L"dod";
			this->dod->Size = System::Drawing::Size(78, 17);
			this->dod->TabIndex = 0;
			this->dod->Text = L"dodawanie";
			this->dod->UseVisualStyleBackColor = true;
			this->dod->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// ode
			// 
			this->ode->AutoSize = true;
			this->ode->Location = System::Drawing::Point(527, 65);
			this->ode->Name = L"ode";
			this->ode->Size = System::Drawing::Size(88, 17);
			this->ode->TabIndex = 1;
			this->ode->Text = L"odejmowanie";
			this->ode->UseVisualStyleBackColor = true;
			this->ode->CheckedChanged += gcnew System::EventHandler(this, &Form1::ode_CheckedChanged);
			// 
			// mno
			// 
			this->mno->AutoSize = true;
			this->mno->Location = System::Drawing::Point(527, 88);
			this->mno->Name = L"mno";
			this->mno->Size = System::Drawing::Size(71, 17);
			this->mno->TabIndex = 2;
			this->mno->Text = L"mnozenie";
			this->mno->UseVisualStyleBackColor = true;
			this->mno->CheckedChanged += gcnew System::EventHandler(this, &Form1::mno_CheckedChanged);
			// 
			// dzie
			// 
			this->dzie->AutoSize = true;
			this->dzie->Location = System::Drawing::Point(527, 111);
			this->dzie->Name = L"dzie";
			this->dzie->Size = System::Drawing::Size(67, 17);
			this->dzie->TabIndex = 3;
			this->dzie->Text = L"dzielenie";
			this->dzie->UseVisualStyleBackColor = true;
			this->dzie->CheckedChanged += gcnew System::EventHandler(this, &Form1::dzie_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(404, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"wynik";
			// 
			// licz
			// 
			this->licz->Location = System::Drawing::Point(523, 149);
			this->licz->Name = L"licz";
			this->licz->Size = System::Drawing::Size(75, 23);
			this->licz->TabIndex = 5;
			this->licz->Text = L"licz";
			this->licz->UseVisualStyleBackColor = true;
			this->licz->Click += gcnew System::EventHandler(this, &Form1::wynik_Click);
			// 
			// licz1
			// 
			this->licz1->Location = System::Drawing::Point(389, 39);
			this->licz1->Name = L"licz1";
			this->licz1->Size = System::Drawing::Size(66, 20);
			this->licz1->TabIndex = 6;
			this->licz1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// licz2
			// 
			this->licz2->Location = System::Drawing::Point(389, 85);
			this->licz2->Name = L"licz2";
			this->licz2->Size = System::Drawing::Size(66, 20);
			this->licz2->TabIndex = 7;
			// 
			// wyn
			// 
			this->wyn->Location = System::Drawing::Point(375, 149);
			this->wyn->Name = L"wyn";
			this->wyn->Size = System::Drawing::Size(100, 20);
			this->wyn->TabIndex = 8;
			this->wyn->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_1);
			// 
			// symbol
			// 
			this->symbol->AutoSize = true;
			this->symbol->Location = System::Drawing::Point(404, 62);
			this->symbol->Name = L"symbol";
			this->symbol->Size = System::Drawing::Size(39, 13);
			this->symbol->TabIndex = 9;
			this->symbol->Text = L"symbol";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 392);
			this->Controls->Add(this->symbol);
			this->Controls->Add(this->wyn);
			this->Controls->Add(this->licz2);
			this->Controls->Add(this->licz1);
			this->Controls->Add(this->licz);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dzie);
			this->Controls->Add(this->mno);
			this->Controls->Add(this->ode);
			this->Controls->Add(this->dod);
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
};
}

