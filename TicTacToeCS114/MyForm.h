#pragma once

namespace Project1 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
		}
		int count = 0;
		int button_1 = 3;
		int button_2 = 4;
		int button_3 = 5;
		int button_4 = 6;
		int button_5 = 7;
		int button_6 = 8;
		int button_7 = 9;
		int button_8 = 10;
		int button_9 = 11;
	private: System::Windows::Forms::Label^  label1;
	public:

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;

	private: System::Windows::Forms::Button^  button10;
	private: Graphics^ g;
	private: Pen^pen = gcnew Pen(Color::Black);
	private: Bitmap^bmp;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(19, 20);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(120, 20);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(19, 20);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(220, 20);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(19, 20);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(21, 120);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(19, 21);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(120, 120);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(19, 21);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(220, 120);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(19, 21);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(20, 220);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(19, 20);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(120, 220);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(19, 20);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(220, 220);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(19, 20);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(309, 300);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(330, 278);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 11;
			this->button10->Text = L"Play";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(350, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 396);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		
	}
	private: System::Void MyForm_Paint(System::Object^  sender, System::EventArgs^  e) 
	{
	
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		count++;
		if (count % 2 == 0)
		{
			g = pictureBox1->CreateGraphics();
			bmp = gcnew Bitmap(L"x.bmp");
			g->DrawImage(bmp, 50, 50);
			button_1 = 1;
		}
		else
		{
			g = pictureBox1->CreateGraphics();
			bmp = gcnew Bitmap(L"O.bmp");
			g->DrawImage(bmp, 50, 50);
			button_1 = 2;
		}
		checkwin();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	count++;
	if (count % 2 == 0)
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"x.bmp");
		g->DrawImage(bmp, 150, 50);
		button_2 = 1;
	}
	else
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"O.bmp");
		g->DrawImage(bmp, 150, 50);
		button_2 = 2;
	}

		checkwin();
	
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	count++;
	if (count % 2 == 0)
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"x.bmp");
		g->DrawImage(bmp, 250, 50);
		button_3 = 1;
	}
	else
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"O.bmp");
		g->DrawImage(bmp, 250, 50);
		button_3 = 2;
	}

		checkwin();
	
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	count++;
	if (count % 2 == 0)
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"x.bmp");
		g->DrawImage(bmp, 50, 150);
		button_4 = 1;
	}
	else
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"O.bmp");
		g->DrawImage(bmp, 50, 150);
		button_4 = 2;
	}

		checkwin();
	
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	count++;
	if (count % 2 == 0)
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"x.bmp");
		g->DrawImage(bmp, 150, 150);
		button_5 = 1;
	}
	else
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"O.bmp");
		g->DrawImage(bmp, 150, 150);
		button_5 = 2;
	}

		checkwin();
	
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	count++;
	if (count % 2 == 0)
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"x.bmp");
		g->DrawImage(bmp, 250, 150);
		button_6 = 1;
	}
	else
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"O.bmp");
		g->DrawImage(bmp, 250, 150);
		button_6 = 2;
	}

		checkwin();
	
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	count++;
	if (count % 2 == 0)
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"x.bmp");
		g->DrawImage(bmp, 50, 250);
		button_7 = 1;
	}
	else
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"O.bmp");
		g->DrawImage(bmp, 50, 250);
		button_7 = 2;
	}

		checkwin();
	
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	count++;
	if (count % 2 == 0)
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"x.bmp");
		g->DrawImage(bmp, 150, 250);
		button_8 = 1;
	}
	else
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"O.bmp");
		g->DrawImage(bmp, 150, 250);
		button_8 = 2;
	}

		checkwin();
	
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	count++;
	if (count % 2 == 0)
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"x.bmp");
		g->DrawImage(bmp, 250, 250);
		button_9 = 1;
	}
	else
	{
		g = pictureBox1->CreateGraphics();
		bmp = gcnew Bitmap(L"O.bmp");
		g->DrawImage(bmp, 250, 250);
		button_9 = 2;
	}

		checkwin();
	
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
{
	g = pictureBox1->CreateGraphics();
	pictureBox1->Refresh();
	label1->Text = "";
	int offset = 100;
	for (int i = 1; i < 3; i++)
	{
		g->DrawLine(pen, 0, i*offset, 300, i*offset);
		g->DrawLine(pen, i*offset, 0, i*offset, 300);
	}
	count = 0;
	button1->Visible = true;
	button2->Visible = true;
	button3->Visible = true;
	button4->Visible = true;
	button5->Visible = true;
	button6->Visible = true;
	button7->Visible = true;
	button8->Visible = true;
	button9->Visible = true;
	button_1 = 3;
	button_2 = 4;
	button_3 = 5;
	button_4 = 6;
	button_5 = 7;
	button_6 = 8;
	button_7 = 9;
	button_8 = 10;
	button_9 = 11;
}

private: void checkwin()
{
	if (button_1 == button_2 && button_2 == button_3)
	{
		MessageBox::Show("Congratulations!", "Winner!!");
	}
	else if (button_4 == button_5 && button_5 == button_6)
	{
		MessageBox::Show("Congratulations!", "Winner!!");
	}
	else if (button_7 == button_8 && button_8 == button_9)
	{
		MessageBox::Show("Congratulations!", "Winner!!");
	}
	else if (button_1 == button_4 && button_4 == button_7)
	{
		MessageBox::Show("Congratulations!", "Winner!!");
	}
	else if (button_2 == button_5&& button_5 == button_8)
	{
		MessageBox::Show("Congratulations!", "Winner!!");
	}
	else if (button_3 == button_6 && button_6 == button_9)
	{
		MessageBox::Show("Congratulations!", "Winner!!");
	}
	else if (button_1 == button_5 && button_5 == button_9)
	{
		MessageBox::Show("Congratulations!", "Winner!!");
	}
	else if (button_3 == button_5 && button_5 == button_7)
	{
		MessageBox::Show("Congratulations!", "Winner!!");
	}
	else if (count == 9)
	{
		MessageBox::Show("You tied", "Good job!");
	}
}
};
}
