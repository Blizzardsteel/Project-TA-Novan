#pragma once
#include <msclr/marshal_cppstd.h>

namespace ProjectTANovan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			kendaraanQueue = gcnew Queue<KeyValuePair<String^, String^>>();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		// queue buat nyimpen kendaraan di dalam listbox nanti
		Queue<KeyValuePair<String^, String^>>^ kendaraanQueue;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNomor;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtJam;
	private: System::Windows::Forms::ComboBox^ cmbJenis;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNomor = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtJam = (gcnew System::Windows::Forms::TextBox());
			this->cmbJenis = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nomor Kendaraan";
			// 
			// txtNomor
			// 
			this->txtNomor->Location = System::Drawing::Point(12, 30);
			this->txtNomor->Name = L"txtNomor";
			this->txtNomor->Size = System::Drawing::Size(169, 20);
			this->txtNomor->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Jenis Kendaraan";
			// 
			// txtJam
			// 
			this->txtJam->Location = System::Drawing::Point(12, 118);
			this->txtJam->Name = L"txtJam";
			this->txtJam->Size = System::Drawing::Size(169, 20);
			this->txtJam->TabIndex = 3;
			// 
			// cmbJenis
			// 
			this->cmbJenis->FormattingEnabled = true;
			this->cmbJenis->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Roda Dua", L"Roda Empat" });
			this->cmbJenis->Location = System::Drawing::Point(12, 73);
			this->cmbJenis->Name = L"cmbJenis";
			this->cmbJenis->Size = System::Drawing::Size(169, 21);
			this->cmbJenis->TabIndex = 4;
			this->cmbJenis->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cmbJenis_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Durasi(Jam)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Tambahkan";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(110, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Hitung";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(254, 30);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(127, 134);
			this->listBox1->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(254, 176);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Hapus";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(276, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Riawayat Parkir";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(254, 205);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 26);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Keluar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(536, 351);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbJenis);
			this->Controls->Add(this->txtJam);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNomor);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nomor = txtNomor->Text;
	String^ jenis = cmbJenis->Text;

	if (String::IsNullOrEmpty(nomor) || String::IsNullOrEmpty(jenis)) {
		MessageBox::Show("Harap isi semua data!", "Error");
		return;
	}
	kendaraanQueue->Enqueue(KeyValuePair<String^, String^>(nomor, jenis));

	UpdateListBox();
	txtNomor->Clear();
	cmbJenis->SelectedIndex = -1;

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (kendaraanQueue->Count == 0) {
		MessageBox::Show("Tidak ada kendaraan untuk dikeluarkan!", "Info");
		return;
	}
	auto kendaraanKeluar = kendaraanQueue->Dequeue();

	String^ durasiText = txtJam->Text;
	int durasi;
	if (String::IsNullOrEmpty(durasiText) || !Int32::TryParse(durasiText, durasi) || durasi <= 0) {
		MessageBox::Show("Durasi harus berupa angka positif!", "Error");
		return;
	}

	int tarifPerJam = (kendaraanKeluar.Value == "Roda Dua") ? 2000 : 5000;
	int totalTarif = durasi * tarifPerJam;

	MessageBox::Show("Nomor Kendaraan: " + kendaraanKeluar.Key + "\n" +
		"Jenis Kendaraan: " + kendaraanKeluar.Value + "\n" +
		"Durasi: " + durasi + " jam\n" +
		"Total Tarif: Rp" + totalTarif, "Info");

	txtJam->Clear();
	UpdateListBox();

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	kendaraanQueue->Clear();
	listBox1->Items->Clear();
    UpdateListBox();
        }
	  void UpdateListBox() {
		   listBox1->Items->Clear();
		   for each (auto kendaraan in kendaraanQueue) {
			   listBox1->Items->Add(kendaraan.Key + " - " + kendaraan.Value);
		   }
	   }
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void cmbJenis_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

//Modul 1 Variabel tipe data uda
//Modul 2 Pengkondisian uda (If else)
//Modul 3 Perulangan udaa (for each)
//Moudl 4 Function Method uda
//Modul 5 X
//Moudl 6 X
//Modul 7 Queue uda
//Modul 8 GUI uda