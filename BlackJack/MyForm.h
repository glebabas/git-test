#pragma once

namespace BlackJack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::ForestGreen;
			this->pictureBox1->Location = System::Drawing::Point(543, 215);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(380, 300);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(543, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(374, 96);
			this->button1->TabIndex = 1;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::ForestGreen;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(543, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(374, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"TAKE CARD";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::ForestGreen;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(543, 131);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(374, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"HIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::ForestGreen;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(558, 143);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(338, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"1";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::ForestGreen;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(558, 102);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(338, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"11";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::ForestGreen;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(558, 78);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(338, 101);
			this->button6->TabIndex = 6;
			this->button6->Text = L"END GAME";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::ForestGreen;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(26, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Computer cards:";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::ForestGreen;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(26, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 26);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Your cards:";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::ForestGreen;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(633, 241);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 79);
			this->label3->TabIndex = 9;
			this->label3->Text = L"WIN!";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(616, 334);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(206, 45);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Your score: 20";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Location = System::Drawing::Point(584, 401);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(268, 45);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Computer score: 20";
			this->label5->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::ForestGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1045, 556);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Name = L"MyForm";
			this->Text = L"BlackJack";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: static array <int>^ cards = { 2,3,4,5,6,7,8,9,10,10,10,10,11 };
	array <int>^ user_cards;
	array <int>^ computer_cards;
	int user_score, computer_score, live_indicator, zero_or_nah;
	int computer_card, user_card;
	array <PictureBox^>^ user_cards_img;
	array <PictureBox^>^ computer_cards_img;



	private: System::Int16 score_count(int score, int card, int live_indicator) {
		if (card != 11) {
			score += card;
			if (score > 21 && live_indicator == 1) {
				button2->Visible = false;
				button3->Visible = false;
				button6->Visible = true;
			}
		}
		else {
			if ((score + 11 <= 21) && live_indicator == 0)
				score += 11;
			else if ((score + 11 <= 21) && live_indicator == 1) {
				button4->Visible = true;
				button5->Visible = true;
				button2->Visible = false;
				button3->Visible = false;
			}
			else {
				score += 1;
				if (score > 21 && live_indicator == 1) {
					button2->Visible = false;
					button3->Visible = false;
					button6->Visible = true;

				}
			}

		}
		return score;
	}

	private: System::Void printer() {


		pictureBox1->Refresh();
		Random^ rand = gcnew Random();
		Graphics^ g = pictureBox1->CreateGraphics();
		int k = 0;
		while (computer_cards[k] != 0) {
			k++;
			print_computer_cards(k, computer_cards[k], 1);
		}


		System::Drawing::Font^ f = gcnew System::Drawing::Font("Anonymous Pro", 12);
		if (user_score > 21 && computer_score <= 21 || user_score < computer_score && computer_score <= 21) {
			label3->Text = "LOSS";
			label4->Text = "Your score: " + user_score.ToString();
			label5->Text = "Computer score: " + computer_score.ToString();

		}
		else if (user_score > 21 && computer_score > 21 || user_score == computer_score) {
			label3->Text = "DRAW";
			label4->Text = "Your score: " + user_score.ToString();
			label5->Text = "Computer score: " + computer_score.ToString();

		}
		else {
			label3->Text = "WIN!";
			label4->Text = "Your score: " + user_score.ToString();
			label5->Text = "Computer score: " + computer_score.ToString();

		}
		label3->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		button1->Visible = false;
		button2->Visible = false;
		button3->Visible = false;
		button6->Visible = true;

		
		
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button1->Visible = false;
		button2->Visible = true;
		button3->Visible = true;
		button6->Visible = false;
		label1->Visible = true;
		label2->Visible = true;
		if (user_score != 0)
			del_user_cards();
		if (computer_score != 0)
			del_computer_cards();
		pictureBox1->Refresh();
		zero_or_nah = 0;
		Graphics^ g = pictureBox1->CreateGraphics();
		System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial", 12);
		user_cards = gcnew array<int>(11);
		computer_cards = gcnew array<int>(11);
		user_score = 0;
		computer_score = 0;
		Random^ rand = gcnew Random();
		button2->Visible = true;
		button3->Visible = true;
		for (int i = 0; i < 2; i++) {
			live_indicator = 0;
			user_card = cards[rand->Next(0, 13)];
			computer_card = cards[rand->Next(0, 13)];
			user_cards[i] = user_card;
			computer_cards[i] = computer_card;
			user_score = score_count(user_score, user_card, 0);
			computer_score = score_count(computer_score, computer_card, 0);
			print_computer_cards(i, computer_card,0);
			print_user_cards(i, user_card);
		}

		while (computer_score < 17) {
			if (computer_score < 17) {
				computer_card = cards[rand->Next(0, 13)];
				int k = 0;
				while (computer_cards[k] != 0) {
					k++;
				}
				computer_cards[k] = computer_card;
				computer_score = score_count(computer_score, computer_card, 0);
			}
		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Random^ rand = gcnew Random();
	Graphics^ g = pictureBox1->CreateGraphics();
	System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial", 12);
	if (user_score <= 21) {
		user_card = cards[rand->Next(0, 13)];
		int k = 0;
		while (user_cards[k] != 0) {
			k++;
		}
		user_cards[k] = user_card;
		print_user_cards(k, user_card);
		user_score = score_count(user_score, user_card, 1);

	}
	if (user_score > 21) {
		printer();
	}
}





// удаление карт из окна приложения
private: System::Void del_user_cards() {
	int k = 0;
	while (user_cards[k] != 0) {
		delete user_cards_img[k];
		Update();
		k++;
	}



}
private: System::Void del_computer_cards() {
	int k = 0;
	while (computer_cards[k] != 0) {
		delete computer_cards_img[k];
		Update();
		k++;
	}

	
	}
// отрисовка карт на окне
private: System::Void print_user_cards(int numb_card, int value_card) {
	Random^ rand = gcnew Random();
	user_cards_img[numb_card] = gcnew PictureBox();
	user_cards_img[numb_card]->Location = Point(40 + 60 * numb_card, 250);
	user_cards_img[numb_card]->Size = Drawing::Size(90, 130);
	user_cards_img[numb_card]->BackColor = System::Drawing::SystemColors::ButtonShadow;
	if (value_card == 10) {

		user_cards_img[numb_card]->Image = Image::FromFile("Cards img/" + (rand->Next(12, 15)).ToString() + ".png");

	}
	else  {

		user_cards_img[numb_card]->Image = Image::FromFile("Cards img/" + (value_card).ToString() + ".png");

	}
	user_cards_img[numb_card]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	Controls->Add(user_cards_img[numb_card]);
	user_cards_img[numb_card]->BringToFront();
}




private: System::Void print_computer_cards(int numb_card, int value_card, int start_or_print) {
	Random^ rand = gcnew Random();
	computer_cards_img[numb_card] = gcnew PictureBox();
	computer_cards_img[numb_card]->Location = Point(40 + 60 * numb_card, 55);
	computer_cards_img[numb_card]->Size = Drawing::Size(90, 130);
	computer_cards_img[numb_card]->BackColor = System::Drawing::SystemColors::ButtonShadow;
	if (start_or_print == 0 && numb_card == 1) {

		computer_cards_img[numb_card]->Image = Image::FromFile("Cards img/" + "empty" + ".png");
		Controls->Add(computer_cards_img[numb_card]);

	}
	else {
		if (value_card == 10) {

			computer_cards_img[numb_card]->Image = Image::FromFile("Cards img/" + (rand->Next(12, 15)).ToString() + ".png");
			Controls->Add(computer_cards_img[numb_card]);

		}


		
		else if (value_card!=0) {

			computer_cards_img[numb_card]->Image = Image::FromFile("Cards img/" + (value_card).ToString() + ".png");
			Controls->Add(computer_cards_img[numb_card]);

		}
		
	}
	computer_cards_img[numb_card]->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
	computer_cards_img[numb_card]->BringToFront();


	
}




private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {



	printer();
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


	Random^ rand = gcnew Random();

	user_score += 1;
	button4->Visible = false;
	button5->Visible = false;
	button2->Visible = true;
	button3->Visible = true;

	if (user_score > 21) {
		button2->Visible = false;
		button3->Visible = false;
		printer();
	}
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Drawing::Font^ f = gcnew System::Drawing::Font("Arial", 12);
	pictureBox1->Refresh();
	Random^ rand = gcnew Random();
	Graphics^ g = pictureBox1->CreateGraphics();
	user_score += 11;
	button4->Visible = false;
	button5->Visible = false;
	button2->Visible = true;
	button3->Visible = true;

	int i = 0;

	
	if (user_score > 21) {
		button2->Visible = false;
		button3->Visible = false;
		button6->Visible = true;
	}
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	label1->Visible = false;
	label2->Visible = false;
	button1->Visible = true;
	button6->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	label5->Visible = false;
	if (user_score != 0)
		del_user_cards();
	if (computer_score != 0)
		del_computer_cards();



	
}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	user_cards_img = gcnew array<PictureBox^>(22);
	computer_cards_img = gcnew array<PictureBox^>(22);

}
};

}
