#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label11;
	protected:

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
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
	this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
	this->textBox1 = (gcnew System::Windows::Forms::TextBox());
	this->textBox2 = (gcnew System::Windows::Forms::TextBox());
	this->textBox3 = (gcnew System::Windows::Forms::TextBox());
	this->textBox4 = (gcnew System::Windows::Forms::TextBox());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->textBox5 = (gcnew System::Windows::Forms::TextBox());
	this->textBox6 = (gcnew System::Windows::Forms::TextBox());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->textBox7 = (gcnew System::Windows::Forms::TextBox());
	this->label11 = (gcnew System::Windows::Forms::Label());
	this->SuspendLayout();
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
	this->label1->Location = System::Drawing::Point(12, 26);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(138, 20);
	this->label1->TabIndex = 0;
	this->label1->Text = L"Pick the method";
	this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label2->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
	this->label2->Location = System::Drawing::Point(12, 95);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(148, 20);
	this->label2->TabIndex = 1;
	this->label2->Text = L"Pick the equation";
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label3->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
	this->label3->Location = System::Drawing::Point(251, 26);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(123, 20);
	this->label3->TabIndex = 2;
	this->label3->Text = L"Incoming data";
	this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label4->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
	this->label4->Location = System::Drawing::Point(460, 26);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(70, 20);
	this->label4->TabIndex = 3;
	this->label4->Text = L"Results";
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label5->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
	this->label5->Location = System::Drawing::Point(224, 56);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(34, 20);
	this->label5->TabIndex = 4;
	this->label5->Text = L"а= ";
	this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label6->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
	this->label6->Location = System::Drawing::Point(224, 95);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(34, 20);
	this->label6->TabIndex = 5;
	this->label6->Text = L"b= ";
	this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label7->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
	this->label7->Location = System::Drawing::Point(203, 134);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(55, 20);
	this->label7->TabIndex = 6;
	this->label7->Text = L"Eps= ";
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label8->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
	this->label8->Location = System::Drawing::Point(191, 174);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(67, 20);
	this->label8->TabIndex = 7;
	this->label8->Text = L"Kmax= ";
	// 
	// comboBox1
	// 
	this->comboBox1->FormattingEnabled = true;
	this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"МДН", L"Метод Ньютона" });
	this->comboBox1->Location = System::Drawing::Point(16, 55);
	this->comboBox1->Name = L"comboBox1";
	this->comboBox1->Size = System::Drawing::Size(121, 21);
	this->comboBox1->TabIndex = 8;
	// 
	// comboBox2
	// 
	this->comboBox2->FormattingEnabled = true;
	this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
		L"х * х - 4 = 0", L"3 * х - 4 * log (x) - 5 = 0",
			L"x*x*x*x - 4 = 0"
	});
	this->comboBox2->Location = System::Drawing::Point(16, 121);
	this->comboBox2->Name = L"comboBox2";
	this->comboBox2->Size = System::Drawing::Size(121, 21);
	this->comboBox2->TabIndex = 9;
	// 
	// textBox1
	// 
	this->textBox1->Location = System::Drawing::Point(255, 55);
	this->textBox1->Name = L"textBox1";
	this->textBox1->Size = System::Drawing::Size(100, 20);
	this->textBox1->TabIndex = 10;
	// 
	// textBox2
	// 
	this->textBox2->Location = System::Drawing::Point(255, 95);
	this->textBox2->Name = L"textBox2";
	this->textBox2->Size = System::Drawing::Size(100, 20);
	this->textBox2->TabIndex = 11;
	// 
	// textBox3
	// 
	this->textBox3->Location = System::Drawing::Point(255, 134);
	this->textBox3->Name = L"textBox3";
	this->textBox3->Size = System::Drawing::Size(100, 20);
	this->textBox3->TabIndex = 12;
	// 
	// textBox4
	// 
	this->textBox4->Location = System::Drawing::Point(255, 174);
	this->textBox4->Name = L"textBox4";
	this->textBox4->Size = System::Drawing::Size(100, 20);
	this->textBox4->TabIndex = 13;
	// 
	// label9
	// 
	this->label9->AutoSize = true;
	this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label9->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
	this->label9->Location = System::Drawing::Point(359, 56);
	this->label9->Name = L"label9";
	this->label9->Size = System::Drawing::Size(83, 20);
	this->label9->TabIndex = 14;
	this->label9->Text = L"Root х*= ";
	// 
	// label10
	// 
	this->label10->AutoSize = true;
	this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label10->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
	this->label10->Location = System::Drawing::Point(356, 95);
	this->label10->Name = L"label10";
	this->label10->Size = System::Drawing::Size(91, 20);
	this->label10->TabIndex = 15;
	this->label10->Text = L"Quantity= ";
	// 
	// textBox5
	// 
	this->textBox5->Location = System::Drawing::Point(464, 55);
	this->textBox5->Name = L"textBox5";
	this->textBox5->Size = System::Drawing::Size(100, 20);
	this->textBox5->TabIndex = 17;
	this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
	// 
	// textBox6
	// 
	this->textBox6->Location = System::Drawing::Point(464, 97);
	this->textBox6->Name = L"textBox6";
	this->textBox6->Size = System::Drawing::Size(100, 20);
	this->textBox6->TabIndex = 16;
	// 
	// button1
	// 
	this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->button1->Location = System::Drawing::Point(398, 168);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(93, 26);
	this->button1->TabIndex = 18;
	this->button1->Text = L"Solve";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
	// 
	// button2
	// 
	this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->button2->Location = System::Drawing::Point(497, 168);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(93, 26);
	this->button2->TabIndex = 19;
	this->button2->Text = L"Clear";
	this->button2->UseVisualStyleBackColor = true;
	this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
	// 
	// button3
	// 
	this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->button3->Location = System::Drawing::Point(451, 198);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(93, 26);
	this->button3->TabIndex = 20;
	this->button3->Text = L"Close";
	this->button3->UseVisualStyleBackColor = true;
	this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
	// 
	// textBox7
	// 
	this->textBox7->Location = System::Drawing::Point(464, 136);
	this->textBox7->Name = L"textBox7";
	this->textBox7->Size = System::Drawing::Size(100, 20);
	this->textBox7->TabIndex = 22;
	this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
	// 
	// label11
	// 
	this->label11->AutoSize = true;
	this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	this->label11->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
	this->label11->Location = System::Drawing::Point(403, 136);
	this->label11->Name = L"label11";
	this->label11->Size = System::Drawing::Size(55, 20);
	this->label11->TabIndex = 21;
	this->label11->Text = L"f(x) = ";
	// 
	// MyForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(630, 262);
	this->Controls->Add(this->textBox7);
	this->Controls->Add(this->label11);
	this->Controls->Add(this->button3);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->button1);
	this->Controls->Add(this->textBox5);
	this->Controls->Add(this->textBox6);
	this->Controls->Add(this->label10);
	this->Controls->Add(this->label9);
	this->Controls->Add(this->textBox4);
	this->Controls->Add(this->textBox3);
	this->Controls->Add(this->textBox2);
	this->Controls->Add(this->textBox1);
	this->Controls->Add(this->comboBox2);
	this->Controls->Add(this->comboBox1);
	this->Controls->Add(this->label8);
	this->Controls->Add(this->label7);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->label5);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->label1);
	this->Name = L"MyForm";
	this->Text = L"MyForm";
	this->ResumeLayout(false);
	this->PerformLayout();

}


#pragma endregion

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (comboBox1->SelectedIndex) {
		case 0: { 
			label7->Visible = false; 
			textBox4 -> Visible = false;
			textBox1->Clear();
			textBox2->Clear();
		}   break;
		case 1: { 
			label7->Visible = true; 
			textBox4 -> Visible = true;
			textBox1->Clear();
			textBox2->Clear();
		}   break;
		}
	}
double f(double x, char k1) {
			   switch (k1) {
			   case 0:
				   return x * x - 4;
				   break;
			   case 1:
				   return 3 * x - 4 * Math::Log(x) - 5;
				   break;
			   case 2:
				   return x * x * x * x - 16;
				   break;
			   }

		   }

double fp(double x, double d, char k1) {
			   return (f(x + d, k1) - f(x, k1)) / d;
		   }

double f2p(double x, double d, char k1) {
			   return (f(x + d, k1) + f(x - d, k1) - 2 * f(x, k1)) / (d * d);
		   }

double MDP(double a, double b, double Eps, char k1, int& L) {
			   double c, Fc;
			   while (b - a > Eps) {
				   c = a + 0.5 * (b - a); L = L + 1;
				   Fc = f(c, k1);
				   if (Math::Abs(Fc) < Eps)
					   return c;
				   if (f(a, k1) * Fc > 0)
					   a = c; else b = c;
			   } return c;
		   }
double MN(double a, double b, double Eps, char k1, int Kmax, int& L) {
	double x, Dx, D; int i;
	Dx = 0.0; D = Eps / 100.0;
	x = b;
	if (f(x, k1) * f2p(x, D, k1) < 0)
		x = a;
	if (f(x, k1) * f2p(x, D, k1) < 0)
		MessageBox::Show("For this equation, the convergence of iterations is not guaranteed");
	for (i = 1; i <= Kmax; i++)
	{
		Dx = f(x, k1) / fp(x, D, k1);
		x = x - Dx;
		if (Math::Abs(Dx) < Eps)
		{
			L = i; 
			return x; // завершення роботи функції MN
		}
	}
	MessageBox::Show("No root was found for the specified number of iterations");
	return -1000.0;
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            {
			int L, Kmax, k = -1, m = -1;
			double D, Eps, a, b;
			L = 0;
			switch (comboBox1->SelectedIndex) {
				case 0:
					m = 0;
				break; // метод ділення навпіл
				case 1: // метод Ньютона
				{ 
					m = 1; D = Eps / 100.0;
					label7->Visible = true;
					textBox4->Visible = true; // робимо видимим вікно для введення Kmax
				}	break;
			} if (m == -1) {
				MessageBox::Show("Оберіть метод !");
				comboBox1->Focus();
				return;
			} textBox1->Enabled = true;
			switch (comboBox2->SelectedIndex) // вибір нелінійного рівняння
			{
			case 0:
			k = 0;
			break;
			case 1:
				k = 1;
				break;
			case 2:
				k = 2;
				break;

			} if (k == -1) {
				MessageBox::Show("Choose equation !");
				comboBox2->Focus();
				return;
			} // Перевіряємо правильність введення вхідних даних 
			if (textBox1->Text == "") {
				MessageBox::Show("Enter a number in textBox1");
				textBox1->Focus();
				return;
			} a = Convert::ToDouble(textBox1->Text);
			textBox2->Enabled = true;
			if (textBox2->Text == "") {
				MessageBox::Show("Enter a number in textBox2"); 
				textBox2->Focus(); 
				return;
			}
			b = Convert::ToDouble(textBox2->Text); if (a > b) {
				D = a; a = b; b = D; // міняємо місцями a і b
				textBox1->Text = Convert::ToString(a);
				textBox2->Text = Convert::ToString(b);
			}
			if (textBox3->Text == "") {
				MessageBox::Show("Enter a number in textBox3");
				textBox3->Focus();
				return;
			}
			Eps = Convert::ToDouble(textBox3->Text);
			if ((Eps > 1e-1) || (Eps <= 0)) // похибка Eps не повинна бути більшою за 0.1 або меншою за 0 
			{
				Eps = 1e-4; // задаємо примусово Eps = 0.0001
				textBox3->Text = Convert::ToString(Eps);
			} if (m == 0)
				if (f(a, k) * f(b, k) > 0) { // перевіряємо, чи є корінь на інтервалі [a, b]
					MessageBox::Show("Choose the right interval [a, b]!");
					textBox1->Text = "";
					textBox2->Text = "";
					textBox1->Focus();
					return;
				} // Перевіряємо, чи межі інтервалу [a, b] не є поблизу кореня 
			if (Math::Abs(f(a, k)) < Eps) {
				textBox5->Text = Convert::ToString(a);
				textBox6->Text = Convert::ToString(L);
				return;
			}
			if (Math::Abs(f(b, k)) < Eps) {
				textBox5->Text = Convert::ToString(b);
				textBox6->Text = Convert::ToString(L);
				return;
			} switch (m) {
			case 0: { // обрали метод MDP - ділення навпіл  
				textBox5->Text = Convert::ToString(MDP(a, b, Eps, k, L)); // виконали метод ділення навпіл MDP 
				textBox6->Text = Convert::ToString(L);
				textBox7->Text = Convert::ToString(f(MDP(a, b, Eps, k, L), k));
			}
				  break;
			case 1: {// обрали метод Ньютона  
				if (textBox4->Text == "") {
					MessageBox::Show("Enter number in textBox4");
					textBox4->Focus();
					return;
				}
				Kmax = Convert::ToInt32(textBox4->Text);
				textBox5->Text = Convert::ToString(MN(a, b, Eps, k, Kmax, L));// виконали метод Ньютона 
				textBox6->Text = Convert::ToString(L);
				textBox7->Text = Convert::ToString(f(MN(a, b, Eps, k, Kmax, L), k));
			}
				  break;
			}
		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		switch (comboBox1->SelectedIndex) {
		case 0: {
			label8->Visible = false; // робимо невидимим вікно для введення Kmax 
			textBox4->Visible = false;
		}
			  break;
		case 1: {
			label8->Visible = true; // робимо видимим вікно для введення Kmax
			textBox4->Visible = true;
		}break;
		}
	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}

private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
 }
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
