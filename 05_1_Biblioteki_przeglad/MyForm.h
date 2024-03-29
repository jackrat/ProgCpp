#pragma once

namespace My051Bibliotekiprzeglad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Net;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//	
			gr = tabPage4->CreateGraphics();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btIns2;
	private: System::Windows::Forms::Button^ btDrop;
	private: System::Windows::Forms::Button^ btDel;
	private: System::Windows::Forms::Button^ btUpd;
	private: System::Windows::Forms::Button^ btSel;
	private: System::Windows::Forms::Button^ btIns;
	private: System::Windows::Forms::Button^ btCreTab;
	private: System::Windows::Forms::Button^ btClose;
	private: System::Windows::Forms::Button^ btOpen;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btDwnl2;
	private: System::Windows::Forms::Button^ btDwnl1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button7;











	protected:

	private: System::ComponentModel::IContainer^ components;




#pragma region Windows Form Designer generated code
	private:
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btIns2 = (gcnew System::Windows::Forms::Button());
			this->btDrop = (gcnew System::Windows::Forms::Button());
			this->btDel = (gcnew System::Windows::Forms::Button());
			this->btUpd = (gcnew System::Windows::Forms::Button());
			this->btSel = (gcnew System::Windows::Forms::Button());
			this->btIns = (gcnew System::Windows::Forms::Button());
			this->btCreTab = (gcnew System::Windows::Forms::Button());
			this->btClose = (gcnew System::Windows::Forms::Button());
			this->btOpen = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btDwnl2 = (gcnew System::Windows::Forms::Button());
			this->btDwnl1 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(981, 524);
			this->tabControl1->TabIndex = 11;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->btIns2);
			this->tabPage1->Controls->Add(this->btDrop);
			this->tabPage1->Controls->Add(this->btDel);
			this->tabPage1->Controls->Add(this->btUpd);
			this->tabPage1->Controls->Add(this->btSel);
			this->tabPage1->Controls->Add(this->btIns);
			this->tabPage1->Controls->Add(this->btCreTab);
			this->tabPage1->Controls->Add(this->btClose);
			this->tabPage1->Controls->Add(this->btOpen);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(973, 498);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"sql";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(245, 295);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(711, 182);
			this->textBox1->TabIndex = 21;
			this->textBox1->WordWrap = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(246, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(710, 262);
			this->dataGridView1->TabIndex = 20;
			// 
			// btIns2
			// 
			this->btIns2->Location = System::Drawing::Point(118, 111);
			this->btIns2->Name = L"btIns2";
			this->btIns2->Size = System::Drawing::Size(106, 30);
			this->btIns2->TabIndex = 19;
			this->btIns2->Text = L"C insert pars";
			this->btIns2->UseVisualStyleBackColor = true;
			this->btIns2->Click += gcnew System::EventHandler(this, &MyForm::btIns2_Click);
			// 
			// btDrop
			// 
			this->btDrop->Location = System::Drawing::Point(118, 52);
			this->btDrop->Name = L"btDrop";
			this->btDrop->Size = System::Drawing::Size(106, 30);
			this->btDrop->TabIndex = 18;
			this->btDrop->Text = L"dropTab";
			this->btDrop->UseVisualStyleBackColor = true;
			this->btDrop->Click += gcnew System::EventHandler(this, &MyForm::btDrop_Click);
			// 
			// btDel
			// 
			this->btDel->Location = System::Drawing::Point(7, 219);
			this->btDel->Name = L"btDel";
			this->btDel->Size = System::Drawing::Size(106, 30);
			this->btDel->TabIndex = 17;
			this->btDel->Text = L"D delete";
			this->btDel->UseVisualStyleBackColor = true;
			this->btDel->Click += gcnew System::EventHandler(this, &MyForm::btDel_Click);
			// 
			// btUpd
			// 
			this->btUpd->Location = System::Drawing::Point(7, 183);
			this->btUpd->Name = L"btUpd";
			this->btUpd->Size = System::Drawing::Size(106, 30);
			this->btUpd->TabIndex = 16;
			this->btUpd->Text = L"U update";
			this->btUpd->UseVisualStyleBackColor = true;
			this->btUpd->Click += gcnew System::EventHandler(this, &MyForm::btUpd_Click);
			// 
			// btSel
			// 
			this->btSel->Location = System::Drawing::Point(7, 147);
			this->btSel->Name = L"btSel";
			this->btSel->Size = System::Drawing::Size(106, 30);
			this->btSel->TabIndex = 15;
			this->btSel->Text = L"R select";
			this->btSel->UseVisualStyleBackColor = true;
			this->btSel->Click += gcnew System::EventHandler(this, &MyForm::btSel_Click);
			// 
			// btIns
			// 
			this->btIns->Location = System::Drawing::Point(7, 111);
			this->btIns->Name = L"btIns";
			this->btIns->Size = System::Drawing::Size(106, 30);
			this->btIns->TabIndex = 14;
			this->btIns->Text = L"C insert";
			this->btIns->UseVisualStyleBackColor = true;
			this->btIns->Click += gcnew System::EventHandler(this, &MyForm::btIns_Click);
			// 
			// btCreTab
			// 
			this->btCreTab->Location = System::Drawing::Point(7, 52);
			this->btCreTab->Name = L"btCreTab";
			this->btCreTab->Size = System::Drawing::Size(106, 30);
			this->btCreTab->TabIndex = 13;
			this->btCreTab->Text = L"cretab";
			this->btCreTab->UseVisualStyleBackColor = true;
			this->btCreTab->Click += gcnew System::EventHandler(this, &MyForm::btCreTab_Click);
			// 
			// btClose
			// 
			this->btClose->Location = System::Drawing::Point(118, 5);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(106, 30);
			this->btClose->TabIndex = 12;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = true;
			this->btClose->Click += gcnew System::EventHandler(this, &MyForm::btClose_Click);
			// 
			// btOpen
			// 
			this->btOpen->Location = System::Drawing::Point(6, 6);
			this->btOpen->Name = L"btOpen";
			this->btOpen->Size = System::Drawing::Size(106, 30);
			this->btOpen->TabIndex = 11;
			this->btOpen->Text = L"Open";
			this->btOpen->UseVisualStyleBackColor = true;
			this->btOpen->Click += gcnew System::EventHandler(this, &MyForm::btOpen_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->btDwnl2);
			this->tabPage2->Controls->Add(this->btDwnl1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(973, 498);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"net";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(29, 63);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(917, 419);
			this->textBox2->TabIndex = 2;
			this->textBox2->WordWrap = false;
			// 
			// btDwnl2
			// 
			this->btDwnl2->Location = System::Drawing::Point(125, 17);
			this->btDwnl2->Name = L"btDwnl2";
			this->btDwnl2->Size = System::Drawing::Size(75, 23);
			this->btDwnl2->TabIndex = 1;
			this->btDwnl2->Text = L"download2";
			this->btDwnl2->UseVisualStyleBackColor = true;
			this->btDwnl2->Click += gcnew System::EventHandler(this, &MyForm::btDwnl2_Click);
			// 
			// btDwnl1
			// 
			this->btDwnl1->Location = System::Drawing::Point(32, 17);
			this->btDwnl1->Name = L"btDwnl1";
			this->btDwnl1->Size = System::Drawing::Size(75, 23);
			this->btDwnl1->TabIndex = 0;
			this->btDwnl1->Text = L"download1";
			this->btDwnl1->UseVisualStyleBackColor = true;
			this->btDwnl1->Click += gcnew System::EventHandler(this, &MyForm::btDwnl1_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->webBrowser1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(973, 498);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"webbrowser";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(173, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"zaloguj2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(92, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"zaloguj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"navi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(6, 56);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->ScriptErrorsSuppressed = true;
			this->webBrowser1->Size = System::Drawing::Size(960, 439);
			this->webBrowser1->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(973, 498);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"graph";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(221, 19);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(124, 18);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(26, 16);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 0;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 250;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(318, 16);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 26);
			this->button7->TabIndex = 3;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(994, 539);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


		Random^ rnd = gcnew Random();
		SqlConnection^ conn;
		String^ qCre = "create table studenci(id int identity(1,1), imie varchar(30), nazw varchar(30), dataur datetime, wzrost int)";
		String^ qIns = "insert into studenci(imie,nazw,dataur,wzrost) values('Jan','Kowalski','1979-05-29', 178)";
		String^ qIns2 = "insert into studenci(imie,nazw,dataur,wzrost) values(@imie,@nazw,@dataur,@wzrost)";
		String^ qSel = "select * from studenci";
		String^ qDel = "delete from studenci where id = @id";
		String^ qUpd = "update studenci set wzrost=wzrost+10 where id = @id";
		String^ qDrop = "drop table studenci";
		Graphics^ gr;

	private: System::Void btOpen_Click(System::Object^ sender, System::EventArgs^ e) {

		conn = gcnew SqlConnection("Data Source=JL10\\SQLEXPRESS19;Initial Catalog=TEST_CPP;Integrated Security=True");
		conn->Open();

	}

	private: System::Void btClose_Click(System::Object^ sender, System::EventArgs^ e) {
		conn->Close();
	}

	private: System::Void btCreTab_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlCommand^ comm = gcnew SqlCommand(qCre, conn);
		comm->ExecuteNonQuery();
	}


	private: System::Void btIns_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlCommand^ comm = gcnew SqlCommand(qIns, conn);
		comm->ExecuteNonQuery();
		btSel_Click(nullptr, nullptr);
	}

	private: System::Void btIns2_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlCommand^ comm = gcnew SqlCommand(qIns2, conn);
		comm->Parameters->Add("imie", "Jan_" + rnd->Next(1000).ToString());
		comm->Parameters->Add("nazw", "Koval_" + rnd->Next(1000).ToString());
		comm->Parameters->Add("dataur", DateTime::Now.AddDays(-1000 - rnd->Next(1000)));
		comm->Parameters->Add("wzrost", 150 + rnd->Next(50));
		comm->ExecuteNonQuery();
		btSel_Click(nullptr, nullptr);
	}

	private: System::Void btUpd_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlCommand^ comm = gcnew SqlCommand(qUpd, conn);
		comm->Parameters->Add("id", dataGridView1->SelectedRows[0]->Cells[0]->Value);
		comm->ExecuteNonQuery();
		btSel_Click(nullptr, nullptr);
	}

	private: System::Void btDel_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlCommand^ comm = gcnew SqlCommand(qDel, conn);
		comm->Parameters->Add("id", dataGridView1->SelectedRows[0]->Cells[0]->Value);
		comm->ExecuteNonQuery();
		btSel_Click(nullptr, nullptr);
	}

	private: System::Void btSel_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlDataAdapter^ ada = gcnew SqlDataAdapter(qSel, conn);
		DataTable^ table = gcnew DataTable();
		ada->Fill(table);
		dataGridView1->DataSource = table;
		//==============
		textBox1->Clear();
		for each (DataRow ^ r in table->Rows)
		{
			String^ w = String::Format("{0,4}{1,20}{2,20} {3:yyyy-MM-dd} {4,4}\r\n", r["id"], r["imie"], r["nazw"], r["dataur"], r["wzrost"]);
			textBox1->AppendText(w);
		}
	}


	private: System::Void btDrop_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlCommand^ comm = gcnew SqlCommand(qDrop, conn);
		comm->ExecuteNonQuery();
	}


	private: System::Void btDwnl1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ adr = "https://google.pl";
		String^ fn = "e:\\TXT\\temp1.txt";
		WebClient^ web = gcnew WebClient();
		web->DownloadFile(adr, fn);
		textBox2->Text = File::ReadAllText(fn);
	}


	private: System::Void btDwnl2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ adr = "https://google.pl";
		String^ fn = "e:\\TXT\\temp2.txt";
		WebClient^ web = gcnew WebClient();
		array<Byte>^ bytes = web->DownloadData(adr);
		File::WriteAllBytes(fn, bytes);
		textBox2->Text = File::ReadAllText(fn);
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ adr = "http://212.87.228.200:3000";
		webBrowser1->Navigate(adr);
	}


		   HtmlElement^ findEl(String^ tag, String^ inner)
		   {
			   HtmlElementCollection^ collA = webBrowser1->Document->GetElementsByTagName(tag);
			   for each (HtmlElement ^ el in collA)
				   if (el->InnerText != nullptr && el->InnerText->Contains(inner))
					   return el;
			   return nullptr;
		   }


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		HtmlElement^ link = findEl("a", "Zaloguj");
		if (link != nullptr)
			link->InvokeMember("click");
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		HtmlElement^ user = webBrowser1->Document->GetElementById("user_name");
		HtmlElement^ pass = webBrowser1->Document->GetElementById("password");
		HtmlElement^ but = findEl("Button", "Zaloguj");
		user->SetAttribute("value", "student");
		pass->SetAttribute("value", "student");
		if (but != nullptr)
			but->InvokeMember("click");

	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		gr->DrawLine(Pens::Red, 0, 0, tabPage4->Width - 1, tabPage4->Height - 1);
		gr->DrawLine(Pens::Red, 0, tabPage4->Height - 1, tabPage4->Width - 1, 0);
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = !timer1->Enabled;
	}


		   Color randCol()
		   {
			   return Color::FromArgb(rnd->Next(256), rnd->Next(256), rnd->Next(256));
		   }


	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Color col = randCol();
		Pen^ pen = gcnew Pen(col, 1 + rnd->Next(3));
		int x = 10 + rnd->Next(tabPage4->Width - 20);
		int y = 10 + rnd->Next(tabPage4->Height - 20);
		int w = 10 + rnd->Next(tabPage4->Width - 20);
		int h = 10 + rnd->Next(tabPage4->Height - 20);

		switch (rnd->Next(4))
		{
		case 0:
			gr->DrawLine(pen, x, y, w, h);
			break;
		case 1:
			gr->DrawRectangle(pen, x, y, w, h);
			break;
		case 2:
			gr->DrawEllipse(pen, x, y, w, h);
			break;
		case 3:
			System::Drawing::Font ^ font = gcnew System::Drawing::Font("Arial", 8 + rnd->Next(20));
			Brush^ brush = gcnew SolidBrush(col);
			String^ s = rnd->NextDouble().ToString();
			gr->DrawString(s, font, brush, x, y);
			break;
		}

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Color col = randCol();
		Pen^ pen = gcnew Pen(col, 1 + rnd->Next(3));
		for (int w = 50;w < 300;w++)
			gr->DrawRectangle(pen, 100, 100, w, w);
	}



	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Size sz;
		sz.Width = 400;
		sz.Height = 300;
		int x = rnd->Next(1000);
		int y = rnd->Next(800);
		gr->CopyFromScreen(x, y, 0, 70, sz);
	}
};
}
