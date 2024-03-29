#pragma once
#include "PierwiastkiA.h"
#include "PierwiastkiB.h"
#include "PierwiastkiC.h"

namespace My061Klasy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class FormPierwiastkiABC : public System::Windows::Forms::Form
	{
	public:
		FormPierwiastkiABC(void)
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
		~FormPierwiastkiABC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button6;
	protected:
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(497, 164);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 53);
			this->button6->TabIndex = 29;
			this->button6->Text = L"PierwiastkiC";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &FormPierwiastkiABC::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(855, 96);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 53);
			this->button5->TabIndex = 28;
			this->button5->Text = L"PierwiastkiB\'\'";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FormPierwiastkiABC::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(678, 96);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 53);
			this->button4->TabIndex = 27;
			this->button4->Text = L"PierwiastkiB\'";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormPierwiastkiABC::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(497, 96);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 53);
			this->button3->TabIndex = 26;
			this->button3->Text = L"PierwiastkiB";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormPierwiastkiABC::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(497, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 53);
			this->button2->TabIndex = 25;
			this->button2->Text = L"PierwiastkiA";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormPierwiastkiABC::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(286, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 53);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Rozgrzewka";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormPierwiastkiABC::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(7, 192);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 23;
			this->label1->Text = L"label1";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->Location = System::Drawing::Point(12, 127);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(235, 31);
			this->textBox3->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(12, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(235, 31);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(12, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(235, 31);
			this->textBox1->TabIndex = 20;
			// 
			// FormPierwiastkiABC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 449);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"FormPierwiastkiABC";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FormPierwiastkiABC";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = double::Parse(textBox1->Text);
		double b = double::Parse(textBox2->Text);
		double c = double::Parse(textBox3->Text);
		double delta = b * b - 4 * a * c;
		if (delta < 0)
			label1->Text = "Brak rozwiazañ!";
		else if (delta == 0)
		{
			double x0 = -b / (2 * a);
			label1->Text = "x0 = " + x0.ToString();
		}
		else
		{
			double x1 = (-b - Math::Sqrt(delta)) / (2 * a);
			double x2 = (-b + Math::Sqrt(delta)) / (2 * a);
			label1->Text = String::Format("x1 = {0}\r\nx2 = {1}", x1, x2);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		PierwiastkiA^ pA = gcnew PierwiastkiA();
		pA->a = double::Parse(textBox1->Text);
		pA->b = double::Parse(textBox2->Text);
		pA->c = double::Parse(textBox3->Text);
		pA->Oblicz();
		if (pA->wynik->Length == 0)
			label1->Text = "Brak rozwi¹zañ!";
		else if (pA->wynik->Length == 1)
			label1->Text = "x0 = " + pA->wynik[0].ToString();
		else
			label1->Text = String::Format("x1 = {0}\r\nx2 = {1}",
				pA->wynik[0], pA->wynik[1]);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		PierwiastkiB^ pB = gcnew PierwiastkiB();
		pB->setA(textBox1->Text);
		pB->setB(textBox2->Text);
		pB->setC(textBox3->Text);
		label1->Text = pB->getWynikStr();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		PierwiastkiB^ pB = gcnew PierwiastkiB();
		pB->setABC(textBox1->Text, textBox2->Text, textBox3->Text);
		label1->Text = pB->getWynikStr();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		PierwiastkiA^ pA = gcnew PierwiastkiB();
		((PierwiastkiB^)pA)->setABC(textBox1->Text, textBox2->Text, textBox3->Text);
		label1->Text = ((PierwiastkiB^)pA)->getWynikStr();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		PierwiastkiC^ pC = gcnew PierwiastkiC(textBox1->Text, textBox2->Text, textBox3->Text);
		label1->Text = pC->getWynikStr();
	}
};
}
