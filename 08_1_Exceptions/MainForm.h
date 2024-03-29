#pragma once

namespace  _08_1_Exceptions {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;


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
	private: System::Windows::Forms::Button^ button6;
	protected:
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(589, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 172);
			this->button6->TabIndex = 35;
			this->button6->Text = L"try try try catch catch catch";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(476, 226);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(174, 47);
			this->button5->TabIndex = 34;
			this->button5->Text = L"inner Exception^";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(315, 226);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 47);
			this->button4->TabIndex = 33;
			this->button4->Text = L"throw";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(476, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 172);
			this->button3->TabIndex = 32;
			this->button3->Text = L"try catch catch catch";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(382, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 172);
			this->button2->TabIndex = 31;
			this->button2->Text = L"try catch";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(154, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 30;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(315, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 172);
			this->button1->TabIndex = 29;
			this->button1->Text = L"if if if";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(11, 49);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(263, 31);
			this->textBox2->TabIndex = 28;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(11, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(263, 31);
			this->textBox1->TabIndex = 27;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(679, 359);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion






		void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			int a;
			int b;
			if (int::TryParse(textBox1->Text, a))
			{
				if (int::TryParse(textBox2->Text, b))
				{
					if (b != 0)
					{
						int c = a / b;
						label1->Text = String::Format("a/b = {0}", c);
					}
					else
						MessageBox::Show("Przez ZERO nie dzielê!!!");
				}
				else
					MessageBox::Show("Coœ ty wpisa³ jako B ?!");
			}
			else
				MessageBox::Show("Coœ ty wpisa³ jako A ?!");
		}

		void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				int a = int::Parse(textBox1->Text);
				int b = int::Parse(textBox2->Text);
				int c = a / b;
				label1->Text = String::Format("a/b = {0}", c);
			}
			catch (Exception^ exc)
			{
				if (dynamic_cast<FormatException^>(exc) != nullptr)
					MessageBox::Show("Coœ ty wpisa³?!\r\n" + exc->Message);
				else if (dynamic_cast<DivideByZeroException^>(exc) != nullptr)
					MessageBox::Show("Przez ZERO nie dzielê!!!\r\n" + exc->Message);
				else
					MessageBox::Show("Jakiœ b³¹d!!!\r\n" + exc->Message);
			}
		}


		void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			try
			{
				int a = int::Parse(textBox1->Text);
				int b = int::Parse(textBox2->Text);
				int c = a / b;
				label1->Text = String::Format("a/b = {0}", c);
			}
			catch (FormatException^ exc)
			{
				MessageBox::Show("Coœ ty wpisa³?!\r\n" + exc->Message);
			}
			catch (DivideByZeroException^ exc)
			{
				MessageBox::Show("Ja przez zero nie dzielê!!\r\n" + exc->Message);
			}
			catch (Exception^ exc)
			{
				MessageBox::Show("Jakiœ b³¹d!\r\n" + exc->Message);
			}
			finally
			{
				MessageBox::Show("Ja tu tylko sprz¹tam.");
			}
		}

		void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			try
			{
				try
				{
					int a = int::Parse(textBox1->Text);
					try {
						int b = int::Parse(textBox2->Text);
						try {
							int c = a / b;
							label1->Text = String::Format("a/b = {0}", c);
						}
						catch (DivideByZeroException^ exc)
						{
							MessageBox::Show("Ja przez zero nie dzielê!!\r\n" + exc->Message);
						}
						finally
						{
							MessageBox::Show("Sprzatanie po próbie obiczenia a/b!");
						}
					}
					catch (FormatException^ exc)
					{
						MessageBox::Show("Coœ ty wpisa³ jako B?!\r\n" + exc->Message);
					}
				}
				catch (FormatException^ exc)
				{
					MessageBox::Show("Coœ ty wpisa³ jako A?!\r\n" + exc->Message);
				}
			}
			catch (Exception^ exc)
			{
				MessageBox::Show("Jakiœ b³¹d!\r\n" + exc->Message);
			}
			finally
			{
				MessageBox::Show("Ja tu tylko sprz¹tam.");
			}
		}


		void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			Exception^ excIN = gcnew Exception("To jest mój ERROR inner!");
			Exception^ exc = gcnew Exception("To jest mój ERROR wynikajacy z innerexception...!", excIN);
			throw exc;
		}


		int pa(int x, int y)
		{
			int w = 0;
			try {
				w = pb(x, y);
			}
			catch (Exception^ exc)
			{
				String^ s = "To zasz³o w proc. a():\r\n" + exc->Message;
				MessageBox::Show(s);
				Exception^ exc2 = gcnew Exception(s, exc);
				throw exc2;
			}
			return w;
		}

		int pb(int x, int y)
		{
			int w = 0;
			try {
				w = pc(x, y);
			}
			catch (Exception^ exc)
			{
				String^ s = "To zasz³o w proc. b():\r\n" + exc->Message;
				MessageBox::Show(s);
				Exception^ exc2 = gcnew Exception(s, exc);
				throw exc2;
			}
			return w;
		}


		int pc(int x, int y)
		{
			int w = 0;
			try {
				w = x / y;
			}
			catch (Exception^ exc)
			{
				String^ s = "To zasz³o w proc. c():\r\n" + exc->Message;
				MessageBox::Show(s);
				Exception^ exc2 = gcnew Exception(s, exc);
				throw exc2;
			}
			return w;
		}



		void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			int a = int::Parse(textBox1->Text);
			int b = int::Parse(textBox2->Text);
			try {
				int c = pa(a, b);
				label1->Text = String::Format("wynik a(x,y) = {0}", c);
			}
			catch (Exception^ exc)
			{
				label1->Text = "???";
				MessageBox::Show("B³¹d!!!\r\n" + exc->Message);
				StringBuilder^ sb = gcnew StringBuilder();
				analizuj(sb, exc, "");
				MessageBox::Show("Wynik analizatora:\r\n" + sb->ToString());
			}
		}


		void analizuj(StringBuilder^ sb, Exception^ exc, String^ indent)
		{
			sb->AppendLine(indent + "To jest b³¹d typu " + exc->GetType()->Name);
			sb->AppendLine(indent + exc->Message);
			sb->AppendLine(indent + exc->StackTrace);
			if (exc->InnerException != nullptr)
			{
				sb->AppendLine(indent + "To nie koniec - zag³ebiam sie dalej...");
				indent += "   ";
				analizuj(sb, exc->InnerException, indent);
			}
		}
				


	};

}
