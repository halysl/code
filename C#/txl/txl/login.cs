using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace txl
{
    public partial class login : Form
    {
        public login()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "admin" && textBox2.Text == "admin")
            {
                MessageBox.Show("你已成功登陆！");
                this.Hide();
                Form1 form1 = new Form1();
                form1.Show();
            }
            else if (textBox1.Text != "admin")
                        MessageBox.Show("你的账号输入错误！");
            else if (textBox2.Text != "admin")
                MessageBox.Show("你的密码输入错误！");
        }
    }
}
