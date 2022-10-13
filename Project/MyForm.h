#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tb3;

	private: System::Windows::Forms::TextBox^ tb2;

	private: System::Windows::Forms::TextBox^ tb1;

	private: System::Windows::Forms::Button^ buttonSum;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonProd;
	private: System::Windows::Forms::Button^ buttonDiv;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonExit;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tb3 = (gcnew System::Windows::Forms::TextBox());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonSum = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonProd = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->tb3);
			this->panel1->Controls->Add(this->tb2);
			this->panel1->Controls->Add(this->tb1);
			this->panel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(32, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(380, 193);
			this->panel1->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 26);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ergebnis";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 26);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Zahl 2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Zahl 1";
			// 
			// tb3
			// 
			this->tb3->Location = System::Drawing::Point(159, 141);
			this->tb3->Name = L"tb3";
			this->tb3->Size = System::Drawing::Size(156, 34);
			this->tb3->TabIndex = 2;
			// 
			// tb2
			// 
			this->tb2->Location = System::Drawing::Point(185, 70);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(131, 34);
			this->tb2->TabIndex = 1;
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(185, 30);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(131, 34);
			this->tb1->TabIndex = 0;
			// 
			// buttonSum
			// 
			this->buttonSum->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->buttonSum->Location = System::Drawing::Point(32, 249);
			this->buttonSum->Name = L"buttonSum";
			this->buttonSum->Size = System::Drawing::Size(75, 40);
			this->buttonSum->TabIndex = 1;
			this->buttonSum->Text = L"+";
			this->buttonSum->UseVisualStyleBackColor = false;
			this->buttonSum->Click += gcnew System::EventHandler(this, &MyForm::buttonSum_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->buttonMinus->Location = System::Drawing::Point(142, 250);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(75, 40);
			this->buttonMinus->TabIndex = 2;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// buttonProd
			// 
			this->buttonProd->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->buttonProd->Location = System::Drawing::Point(250, 250);
			this->buttonProd->Name = L"buttonProd";
			this->buttonProd->Size = System::Drawing::Size(75, 40);
			this->buttonProd->TabIndex = 3;
			this->buttonProd->Text = L"*";
			this->buttonProd->UseVisualStyleBackColor = false;
			this->buttonProd->Click += gcnew System::EventHandler(this, &MyForm::buttonProd_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->buttonDiv->Location = System::Drawing::Point(354, 250);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(75, 40);
			this->buttonDiv->TabIndex = 4;
			this->buttonDiv->Text = L"/";
			this->buttonDiv->UseVisualStyleBackColor = false;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &MyForm::buttonDiv_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->buttonClear->Location = System::Drawing::Point(32, 322);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(85, 40);
			this->buttonClear->TabIndex = 5;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->buttonExit->Location = System::Drawing::Point(337, 322);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 40);
			this->buttonExit->TabIndex = 6;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(456, 401);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonProd);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonSum);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult Exit;
		try {
			Exit = MessageBox::Show("Exit aus dem Rechner", "Rechner", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (Exit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^e) {
			MessageBox::Show(e->Message, "Rechner", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
private: System::Void buttonSum_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ z1 = this->tb1->Text;
	String^ z2 = this->tb2->Text;
	String^ r;

	double n1 = Convert::ToDouble(z1);
	double n2 = Convert::ToDouble(z2);
	double r1 = Convert::ToDouble(r);

	r1 =  n1 + n2;
	String^ rs = L"" + r1;
	
	this->tb3->Text = rs;
}
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
	tb1->Text = " ";
	tb2->Text = " ";
	tb3->Text = " ";
	
}
private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ z1 = this->tb1->Text;
	String^ z2 = this->tb2->Text;
	String^ r;

	double n1 = Convert::ToDouble(z1);
	double n2 = Convert::ToDouble(z2);
	double r1 = Convert::ToDouble(r);

	r1 = n1 - n2;
	String^ rs = L"" + r1;

	this->tb3->Text = rs;
}
private: System::Void buttonProd_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ z1 = this->tb1->Text;
	String^ z2 = this->tb2->Text;
	String^ r;

	double n1 = Convert::ToDouble(z1);
	double n2 = Convert::ToDouble(z2);
	double r1 = Convert::ToDouble(r);

	r1 = n1 * n2;
	String^ rs = L"" + r1;

	this->tb3->Text = rs;
}
private: System::Void buttonDiv_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ z1 = this->tb1->Text;
	String^ z2 = this->tb2->Text;
	String^ r;
	try {
		double n1 = Convert::ToDouble(z1);
		double n2 = Convert::ToDouble(z2);
		double r1 = Convert::ToDouble(r);
		if (n1==0 && n2 == 0)
		{
			MessageBox::Show("es existiert nicht!", "Rechner", MessageBoxButtons::OK);
		}
		else if (n1 != 0 && n2 == 0 || n1 == 0 && n2 != 0)
		{
			MessageBox::Show("das Ergebnis ist: 0!", "Rechner", MessageBoxButtons::OK);
		}
		else
		{
			r1 = n1 / n2;
			String^ rs = L"" + r1;

			this->tb3->Text = rs;
		}
		
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "Rechner", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
};
}
