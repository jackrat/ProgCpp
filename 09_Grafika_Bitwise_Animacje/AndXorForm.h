#pragma once

namespace _09_Grafika_Bitwise_Animacje {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for AndXorForm
	/// </summary>
	public ref class AndXorForm : public System::Windows::Forms::Form
	{
	public:
		AndXorForm(void)
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
		~AndXorForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(1076, 437);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(270, 251);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &AndXorForm::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(860, 453);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(200, 235);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &AndXorForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(654, 453);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 235);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AndXorForm::pictureBox1_Click);
			// 
			// AndXorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1361, 701);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AndXorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AndXorForm";
			this->Load += gcnew System::EventHandler(this, &AndXorForm::AndXorForm_Load);
			this->Click += gcnew System::EventHandler(this, &AndXorForm::AndXorForm_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		String^ imgDir;
	private:
		Graphics^ g;
		Graphics^ g1;
		Graphics^ g2;
		Random^ rnd = gcnew Random((int)DateTime::Now.Ticks);

		void AndXorForm_Load(System::Object^ sender, System::EventArgs^ e) {
			pictureBox1->Image = Image::FromFile(Path::Combine(imgDir, "logo_and.png"));
			pictureBox2->Image = Image::FromFile(Path::Combine(imgDir, "logo_xor.png"));
			pictureBox3->Image = Image::FromFile(Path::Combine(imgDir, "tlo_and_xor.png"));
			g = CreateGraphics();
			g1 = pictureBox1->CreateGraphics();
			g2 = pictureBox2->CreateGraphics();
		}

		void AndXorForm_Click(System::Object^ sender, System::EventArgs^ e) {
			BackColor = Color::FromArgb(rnd->Next(256), rnd->Next(256), rnd->Next(256));
		}

		void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
			IntPtr hdc = g->GetHdc();
			IntPtr hdc1 = g1->GetHdc();
			BitBlt(hdc, 300, 150, pictureBox1->Width, pictureBox1->Height, hdc1, 0, 0, (int)CopyPixelOperation::SourceAnd);
			g->ReleaseHdc(hdc);
			g1->ReleaseHdc(hdc1);
		}

		void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
			IntPtr hdc = g->GetHdc();
			IntPtr hdc2 = g2->GetHdc();
			BitBlt(hdc, 300, 150, pictureBox2->Width, pictureBox2->Height, hdc2, 0, 0, (int)CopyPixelOperation::SourceInvert);
			g->ReleaseHdc(hdc);
			g2->ReleaseHdc(hdc2);
		}

		void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
			g->DrawImage(pictureBox3->Image, 0, 0);
		}


		[DllImport("gdi32.dll")]
		static bool BitBlt(
			IntPtr   destHdc,
			int   destX,
			int   destY,
			int   destW,
			int   destH,
			IntPtr   srcHdc,
			int   srcX,
			int   srcY,
			int rop
		);

/*
                   and                xor 
		    A  B  A & B        A  B  A ^ B
			0  0    0		   0  0    0
			0  1    0		   0  1    1
			1  0    0		   1  0    1
			1  1    1		   1  1    0

			         R          G          B
white (24b) :    11111111    11111111   11111111
black (24b) :    00000000    00000000   00000000

W & B = B        00000000    00000000   00000000
W ^ B = W        11111111    11111111   11111111

W & any = any
W ^ any = invert
B & any = B
B ^ any = any

*/


	};
}
