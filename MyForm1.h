#pragma once

namespace cabmanagementsystem {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    /// <summary>
    /// Summary for MyForm1
    /// </summary>
    public ref class MyForm1 : public System::Windows::Forms::Form
    {
    public:
        SqlConnection^ con;
    private: System::Windows::Forms::Button^ button2;
    public:
    private: System::Windows::Forms::DataGridView^ dataGridView1;

    public:





    private:
        SqlCommand^ cmd;
    public:
        MyForm1(void)
        {
            InitializeComponent();
            con = gcnew SqlConnection("Data Source=DESKTOP-3DPR0PL\\SQLEXPRESS;Initial Catalog=master;Integrated Security=True");
            cmd = gcnew SqlCommand();
            cmd->Connection = con;
        }
    protected:
        ~MyForm1()
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
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::ComponentModel::Container^ components;

    private: System::Windows::Forms::Label^ label7;

    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::TextBox^ textBox4;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->label6 = (gcnew System::Windows::Forms::Label());
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->textBox3 = (gcnew System::Windows::Forms::TextBox());
               this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->label7 = (gcnew System::Windows::Forms::Label());
               this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
               this->textBox4 = (gcnew System::Windows::Forms::TextBox());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->Location = System::Drawing::Point(45, 22);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(367, 29);
               this->label1->TabIndex = 0;
               this->label1->Text = L"ENTER CUSTOMER DETAILS";
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label2->Location = System::Drawing::Point(12, 115);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(183, 25);
               this->label2->TabIndex = 1;
               this->label2->Text = L"PHONE NUMBER";
               this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label3->Location = System::Drawing::Point(41, 187);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(74, 25);
               this->label3->TabIndex = 2;
               this->label3->Text = L"NAME";
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label4->Location = System::Drawing::Point(42, 241);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(51, 22);
               this->label4->TabIndex = 3;
               this->label4->Text = L"AGE";
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label5->Location = System::Drawing::Point(22, 295);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(93, 22);
               this->label5->TabIndex = 4;
               this->label5->Text = L"GENDER";
               // 
               // label6
               // 
               this->label6->AutoSize = true;
               this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label6->Location = System::Drawing::Point(17, 395);
               this->label6->Name = L"label6";
               this->label6->Size = System::Drawing::Size(92, 25);
               this->label6->TabIndex = 5;
               this->label6->Text = L"TO CITY";
               // 
               // textBox1
               // 
               this->textBox1->Location = System::Drawing::Point(253, 123);
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(145, 22);
               this->textBox1->TabIndex = 6;
               // 
               // textBox2
               // 
               this->textBox2->Location = System::Drawing::Point(253, 175);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(145, 22);
               this->textBox2->TabIndex = 7;
               // 
               // textBox3
               // 
               this->textBox3->Location = System::Drawing::Point(253, 228);
               this->textBox3->Name = L"textBox3";
               this->textBox3->Size = System::Drawing::Size(145, 22);
               this->textBox3->TabIndex = 8;
               // 
               // comboBox1
               // 
               this->comboBox1->FormattingEnabled = true;
               this->comboBox1->Location = System::Drawing::Point(253, 399);
               this->comboBox1->Name = L"comboBox1";
               this->comboBox1->Size = System::Drawing::Size(145, 24);
               this->comboBox1->TabIndex = 10;
               // 
               // button1
               // 
               this->button1->Location = System::Drawing::Point(291, 429);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(90, 40);
               this->button1->TabIndex = 11;
               this->button1->Text = L"SAVE";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
               // 
               // label7
               // 
               this->label7->AutoSize = true;
               this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label7->Location = System::Drawing::Point(12, 341);
               this->label7->Name = L"label7";
               this->label7->Size = System::Drawing::Size(130, 25);
               this->label7->TabIndex = 12;
               this->label7->Text = L"FROM CITY";
               // 
               // comboBox2
               // 
               this->comboBox2->FormattingEnabled = true;
               this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"MALE", L"FEMALE", L"OTHERS" });
               this->comboBox2->Location = System::Drawing::Point(236, 295);
               this->comboBox2->Name = L"comboBox2";
               this->comboBox2->Size = System::Drawing::Size(145, 24);
               this->comboBox2->TabIndex = 14;
               // 
               // textBox4
               // 
               this->textBox4->Location = System::Drawing::Point(267, 345);
               this->textBox4->Name = L"textBox4";
               this->textBox4->Size = System::Drawing::Size(145, 22);
               this->textBox4->TabIndex = 16;
               // 
               // button2
               // 
               this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(0)));
               this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->button2->Location = System::Drawing::Point(798, 87);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(187, 58);
               this->button2->TabIndex = 17;
               this->button2->Text = L"SEARCH";
               this->button2->UseVisualStyleBackColor = false;
               this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
               // 
               // dataGridView1
               // 
               this->dataGridView1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
               this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView1->Location = System::Drawing::Point(556, 187);
               this->dataGridView1->Name = L"dataGridView1";
               this->dataGridView1->RowHeadersWidth = 51;
               this->dataGridView1->Size = System::Drawing::Size(720, 343);
               this->dataGridView1->TabIndex = 18;
               this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm1::dataGridView1_CellContentClick);
               // 
               // MyForm1
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
               this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
               this->ClientSize = System::Drawing::Size(1314, 570);
               this->Controls->Add(this->dataGridView1);
               this->Controls->Add(this->button2);
               this->Controls->Add(this->textBox4);
               this->Controls->Add(this->comboBox2);
               this->Controls->Add(this->label7);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->comboBox1);
               this->Controls->Add(this->textBox3);
               this->Controls->Add(this->textBox2);
               this->Controls->Add(this->textBox1);
               this->Controls->Add(this->label6);
               this->Controls->Add(this->label5);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->label1);
               this->Name = L"MyForm1";
               this->Text = L"MyForm1";
               this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion
    private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
        try
        {
            con->Open();
            SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM Table_1 ORDER BY [to city] ASC", con);
            SqlDataReader^ dr = cmd->ExecuteReader();

            while (dr->Read())
            {
                comboBox1->Items->Add(dr["to city"]->ToString());
            }

            dr->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }
        finally
        {
            con->Close();
        }


    };
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)

    {

        if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && comboBox1->Text != "" && textBox4->Text != "")
        {
            String^ phoneNumber = textBox1->Text;
            String^ name = textBox2->Text;
            int age = Convert::ToInt32(textBox3->Text);
            String^ gender = comboBox2->Text;
            String^ fromCity = textBox4->Text;
            String^ tocity = comboBox1->SelectedItem != nullptr ? comboBox1->SelectedItem->ToString() : "";

            String^ connectionString = "Data Source=DESKTOP-3DPR0PL\\SQLEXPRESS;Initial Catalog=master;Integrated Security=True";

            try
            {
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                connection->Open();

                if (age < 90)
                {
                    String^ sqlQuery = "INSERT INTO QUERY ([Phone Number], NAME, AGE, [GENDER], [FROM CITY], [TO CITY]) VALUES (@PhoneNumber, @Name, @Age, @Gender, @FromCity, @ToCity)";

                    SqlCommand^ cmd = gcnew SqlCommand(sqlQuery, connection);
                    cmd->Parameters->AddWithValue("@PhoneNumber", phoneNumber);
                    cmd->Parameters->AddWithValue("@Name", name);
                    cmd->Parameters->AddWithValue("@Age", age);
                    cmd->Parameters->AddWithValue("@Gender", gender);
                    cmd->Parameters->AddWithValue("@FromCity", fromCity);
                    cmd->Parameters->AddWithValue("@ToCity", tocity);

                    cmd->ExecuteNonQuery();

                    connection->Close();

                    MessageBox::Show("Registered Successfully");
                }
                else
                {
                    MessageBox::Show("Enter age less than 90");
                    connection->Close();
                }
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Error: " + ex->Message);
            }
        }
        else
        {
            MessageBox::Show("Enter all details");
        }


    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ con = "Data Source=DESKTOP-3DPR0PL\\SQLEXPRESS;Initial Catalog=master;Integrated Security=True";
        SqlConnection^ sqconn = gcnew SqlConnection(con);

        try
        {
            sqconn->Open();

            // Retrieve the selected item from comboBox1
            String^ selectedToCity = comboBox1->SelectedItem != nullptr ? comboBox1->SelectedItem->ToString() : "";

            // Use the selectedToCity variable in your query
            String^ Query = "SELECT * FROM Table_1 WHERE [to city] = @SelectedToCity";
            SqlCommand^ cmd = gcnew SqlCommand(Query, sqconn);
            cmd->Parameters->AddWithValue("@SelectedToCity", selectedToCity);

            SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
            DataTable^ Table = gcnew DataTable();
            da->Fill(Table);

            dataGridView1->DataSource = Table;
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }
        finally
        {
            sqconn->Close();
        }
    }

    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}