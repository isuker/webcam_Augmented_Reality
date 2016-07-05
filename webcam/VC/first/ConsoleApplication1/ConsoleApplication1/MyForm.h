
#pragma once
#include <stdio.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "MyForm1.h"
#include "../user/core.h"

namespace ConsoleApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �ɮ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �d�ݬ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem1;
	private: System::Windows::Forms::Button^  button2;
	public:
		//Time
		int time = 0;
	
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
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ɮ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�d�ݬ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"�s�ө���", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(346, 407);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(258, 95);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�}�l";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�s�ө���", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(375, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"�ǳƶ}�l";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(344, 540);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(269, 12);
			this->label2->TabIndex = 2;
			this->label2->Text = L"�ʶǤj�ǹq�l�u�{�Ǩt�����]�p�P���ι���ǵo��";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�ɮ�ToolStripMenuItem,
					this->����ToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(960, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ɮ�ToolStripMenuItem
			// 
			this->�ɮ�ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			this->�ɮ�ToolStripMenuItem->Name = L"�ɮ�ToolStripMenuItem";
			this->�ɮ�ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->�ɮ�ToolStripMenuItem->Text = L"�ɮ�";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�d�ݬ���ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �d�ݬ���ToolStripMenuItem
			// 
			this->�d�ݬ���ToolStripMenuItem->Name = L"�d�ݬ���ToolStripMenuItem";
			this->�d�ݬ���ToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->�d�ݬ���ToolStripMenuItem->Text = L"�d�ݬ���";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem1 });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ����ToolStripMenuItem1
			// 
			this->����ToolStripMenuItem1->Name = L"����ToolStripMenuItem1";
			this->����ToolStripMenuItem1->Size = System::Drawing::Size(98, 22);
			this->����ToolStripMenuItem1->Text = L"����";
			this->����ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(708, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(151, 75);
			this->button2->TabIndex = 4;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 576);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		

	}
	
    
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//initial timer object
		timer1->Enabled = true;
		timer1->Interval = 1000;
		//initial time number
		time = 0;
		//
		
		//
	/*	Mat frame;
		Mat frame1;
		Mat frame2;*/
		

		//Load TASK,Put on picture into frame  
		TASK *T1 = new TASK;

#define Picture_len 3
		Picture *PIC[Picture_len] =
		{
			new Picture("name1", 0, "D:\\project\\AR\\webcam_Augmented_Reality\\image\\2.png", 0, 0),
			new Picture("name2", 1, "D:\\project\\AR\\webcam_Augmented_Reality\\image\\base1.png", 0, 0),
			new Picture("name3", 2, "D:\\project\\AR\\webcam_Augmented_Reality\\image\\m.jpg", 0, 0)
		};
		
		//Load and inseert TASK
		for (int i = 0; i < Picture_len; i++)
		{
			if (PIC[i]->Picture_Load() != 0)
			{
				MessageBox::Show("Picture" + i+1 + "is error");
				exit(1);
			}
			T1->TASK_Create(PIC[i]);
		}
		//Init Camera
		VideoCapture capture(0);
		//capture.read(frame);

		webcam *W1 = new webcam(capture, 1280, 720, 30);
	
		//Display
		DScreen *disp = new DScreen;

		for (int i = 0; i < Picture_len; i++)
		{
		//Because trigger begin from element 1
			W1->Trig_Create(PIC[i]->Pos_X(), PIC[i]->Pos_Y(), 200, 150, i + 1);
		}
	
		//formal 
		int flag = 0;
		while (1)
		{
			//Display Webcam Image
			Mat frames = W1->Catch_image();
			//Display ALL Image
			for (int i = 0; i < MAX_TASK - 1; i++)
			{
				disp->Image_puts(frames, T1->TASK_effective(i));
			}
			if (PIC[1]->Pos_X() > 400 && flag == 0)
			{
				T1->TASK_Delete(PIC[1]);
				T1->TASK_Delete(PIC[2]);
				MessageBox::Show("first blood");
				flag = 1;
			}
			//Trigger
			if (W1->Trig_func() == 1)
			{
				disp->Image_Rotation(T1->TASK_effective(3), 20);
				disp->Image_Mov(PIC[1], 5, 0);
			}
			waitKey(30);
			namedWindow("AW", WINDOW_NORMAL);
			imshow("AW", frames);
		}

	
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		time++;
		int minute = time / 60;
		int second = time % 60;
		label1->Text = Convert::ToString(minute) + "��" + Convert::ToString(second) + "��";
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm::Close();
}
private: System::Void ����ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Open MyFrom1
	MyForm1^ MyForms = gcnew MyForm1();
	MyForms->Show();
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Picture *Pic[]=
	{
		new Picture("name1", 0, "D:\\project\\AR\\webcam_Augmented_Reality\\image\\2.png", 0, 0),
		new Picture("name2", 1, "D:\\project\\AR\\webcam_Augmented_Reality\\image\\base1.png", 0, 0),
		new Picture("name3", 2, "D:\\project\\AR\\webcam_Augmented_Reality\\image\\base1.png", 0, 0)
	};
	Pic[0]->Picture_Load();
	Pic[1]->Picture_Load();

	VTASK *VT = new VTASK;
	if (VT->VTASK_Create(Pic[0])){ MessageBox::Show("ERROR"); };
	if (VT->VTASK_Create(Pic[1])){ MessageBox::Show("ERROR"); };

	DScreen *DSP1 = new DScreen;
	VideoCapture capture(0);
	Vwebcam *web = new Vwebcam(capture, -1, -1 , 30);
	
	while (1)
	{
		//Camera image
		web->Catch_image();
		//Put virtual image
		DSP1->Image_puts(&web->background, VT);
		namedWindow("AW");
		imshow("AW", web->background.Get_image());
		//
		DSP1->Image_Rotation(Pic[1], 20);
		DSP1->Image_Mov(Pic[0], 5, 0);
		if (Pic[0]->Pos_X() > 100)
		{
			VT->VTASK_Delete(Pic[0]);
			VT->VTASK_Delete(Pic[1]);
			MessageBox::Show("first blood");
		}
		cv::waitKey(10);
		if (cvWaitKey(10) == 27)
		{
			destroyWindow("AW");
			break;
		}
	}
}
};
}
