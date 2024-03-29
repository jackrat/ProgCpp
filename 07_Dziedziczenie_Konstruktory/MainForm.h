#pragma once
#include "Figura.h"
#include "Kwadrat.h"
#include "Okrag.h"
#include "Rysownia.h"
#include "Abstrakty.h"

namespace  _07_Dziedziczenie_Konstruktory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;








	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Figura.Rysuj()";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 49);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Kwadrat.Rysuj()";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Okrag.Rysuj()";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(140, 89);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 34);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Okrag.RysujVirt()";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(140, 49);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 34);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Kwadrat.RysujVirt()";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(139, 9);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(109, 34);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Figura.RysujVirt()";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(278, 89);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(71, 34);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Okrag";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(278, 49);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(71, 34);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Kwadrat";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(277, 9);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(71, 34);
			this->button9->TabIndex = 6;
			this->button9->Text = L"Figura";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(319, 147);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(71, 34);
			this->button10->TabIndex = 10;
			this->button10->Text = L"f.RysujVirt()";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(242, 147);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(71, 34);
			this->button11->TabIndex = 9;
			this->button11->Text = L"f.Rysuj()";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(72, 212);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(129, 40);
			this->button12->TabIndex = 11;
			this->button12->Text = L"GC";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(570, 33);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(159, 49);
			this->button13->TabIndex = 12;
			this->button13->Text = L"KlasaAbstr";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(570, 89);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(159, 49);
			this->button14->TabIndex = 13;
			this->button14->Text = L"KlasaPotom";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MainForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(570, 192);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(159, 49);
			this->button15->TabIndex = 14;
			this->button15->Text = L"KlasaC multi";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MainForm::button15_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 560);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->ResumeLayout(false);

		}

#pragma endregion

		Random^ rnd = gcnew Random((int)DateTime::Now.Ticks);
		Rysownia^ rysownia = gcnew Rysownia();


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Figura^ f = gcnew Figura(CreateGraphics());
		f->Parametry = gcnew array<int> {
			150 + rnd->Next(Width - 200), 100 + rnd->Next(Height - 150) };
		f->Rysuj();

	};
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Kwadrat^ f = gcnew Kwadrat(CreateGraphics());
		f->Parametry = gcnew array<int> {
			150 + rnd->Next(Width - 200), 100 + rnd->Next(Height - 150),
				50 + rnd->Next(300), 50 + rnd->Next(300)};
		f->Rysuj();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Okrag^ f = gcnew Okrag(CreateGraphics());
		f->Parametry = gcnew array<int> {
			150 + rnd->Next(Width - 200), 100 + rnd->Next(Height - 150),
				50 + rnd->Next(300), 50 + rnd->Next(300)};
		f->Rysuj();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Figura^ f = gcnew Figura(CreateGraphics());
		f->Parametry = gcnew array<int> {
			150 + rnd->Next(Width - 200), 100 + rnd->Next(Height - 150) };
		f->RysujVirt();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Kwadrat^ f = gcnew Kwadrat(CreateGraphics());
		f->Parametry = gcnew array<int> {
			150 + rnd->Next(Width - 200), 100 + rnd->Next(Height - 150),
				50 + rnd->Next(300), 50 + rnd->Next(300)};
		f->RysujVirt();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Okrag^ f = gcnew Okrag(CreateGraphics());
		f->Parametry = gcnew array<int> {
			150 + rnd->Next(Width - 200), 100 + rnd->Next(Height - 150),
				50 + rnd->Next(300), 50 + rnd->Next(300)};
		f->RysujVirt();
	}


		   Figura^ figura;

		   System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			   figura = gcnew Figura(CreateGraphics());
		   }

		   System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			   figura = gcnew Kwadrat(CreateGraphics());
		   }

		   System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			   figura = gcnew Okrag(CreateGraphics());
		   }
		   System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
			   figura->Parametry = gcnew array<int>{150 + rnd->Next(Width - 200),
				   100 + rnd->Next(Height - 150),
				   50 + rnd->Next(300), 50 + rnd->Next(300)};
			   rysownia->UzyjFigury(figura);
		   }
		   System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
			   figura->Parametry = gcnew array<int>{150 + rnd->Next(Width - 200),
				   100 + rnd->Next(Height - 150),
				   50 + rnd->Next(300), 50 + rnd->Next(300)};
			   rysownia->UzyjFiguryVirt(figura);
		   }
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		GC::Collect();
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		//KlasaAbstr^ ka = gcnew KlasaAbstr();
		// nie da siê utworzyæ instancji klasy abstrakcyjnej!
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		KlasaPotom^ kp = gcnew KlasaPotom();
	}



	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		KlasaC* kc = new KlasaC();
		kc->Met0();
		kc->Met1("");
		kc->Met2(234);
		kc->Met3(457);

	}
	};
}