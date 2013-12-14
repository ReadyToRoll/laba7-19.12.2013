#pragma once

namespace laba7 {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  file;
	private: System::Windows::Forms::ToolStripMenuItem^  open;
	private: System::Windows::Forms::ToolStripMenuItem^  save;
	private: System::Windows::Forms::ToolStripMenuItem^  exit;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->file = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->open = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->save = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->file});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(484, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// file
			// 
			this->file->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->open, this->save, 
				this->exit});
			this->file->Name = L"file";
			this->file->Size = System::Drawing::Size(37, 20);
			this->file->Text = L"File";
			// 
			// open
			// 
			this->open->Name = L"open";
			this->open->Size = System::Drawing::Size(112, 22);
			this->open->Text = L"Open";
			this->open->Click += gcnew System::EventHandler(this, &Form1::open_Click);
			// 
			// save
			// 
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(112, 22);
			this->save->Text = L"Save as";
			this->save->Click += gcnew System::EventHandler(this, &Form1::save_Click);
			// 
			// exit
			// 
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(112, 22);
			this->exit->Text = L"Exit";
			this->exit->Click += gcnew System::EventHandler(this, &Form1::exit_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(12, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(472, 323);
			this->textBox1->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(484, 362);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 362);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(500, 350);
			this->Name = L"Form1";
			this->Text = L"NotepadNeo";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*public int Wform
        {
            get {return this.Width/2; }
        }
        public int Wleft
        {
            get { return (Width-button1.Width)/2; }
        }
        private void Form1_SizeChanged(object sender, EventArgs e)
        {
            textBox1.DataBindings.Add("Width", this, "Wform");
            textBox1.DataBindings.Add("Left", this, "Wleft");
            textBox1.DataBindings.Clear();

        }
		*/
		private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Текстовый редактор";
		openFileDialog1->FileName = "D:\\ВУЗ\\Text2.txt";
		openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|All files (*.*)|*.*";
}

	private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }

	private: System::Void open_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->FileName = String::Empty;
			 openFileDialog1->ShowDialog();
			if (openFileDialog1->FileName == nullptr) return;
			try
			{ 
				auto MyReader = gcnew IO::StreamReader(openFileDialog1->FileName, System::Text::Encoding::GetEncoding(1251)); 
				textBox1->Text= MyReader->ReadToEnd();
				MyReader->Close();
			}
			catch (IO::FileNotFoundException^ Ситуация)
			{
				MessageBox::Show(Ситуация->Message + "\nФайл не найден", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			catch (Exception^ Ситуация)
			{
				MessageBox::Show(Ситуация->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		 }	
	private: System::Void save_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFileDialog1->FileName = openFileDialog1->FileName;
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) Save();
}
	void Save()
	{
		try
		{
			// Создание экземпляра StreamWriter для записи в файл:
			auto MyWriter = gcnew IO::StreamWriter(saveFileDialog1->FileName, false, System::Text::Encoding::GetEncoding(1251));
			MyWriter->Write(textBox1->Text);
			MyWriter->Close(); textBox1->Modified = false;
		}
		catch (Exception^ Ситуация)
		{
			MessageBox::Show(Ситуация->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}


private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if (textBox1->Modified == false) return;
	auto MeBox = MessageBox::Show("Текст был изменён. \nСохранить изменения?","NotepadNeo", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Exclamation);
	if (MeBox == Windows::Forms::DialogResult::No) return;
	if (MeBox == Windows::Forms::DialogResult::Cancel) e->Cancel = true;
	if (MeBox == Windows::Forms::DialogResult::Yes) 
	{
		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			Save(); 
			return;
		}
		else 
			e->Cancel = true; 
	}
		 }
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}

