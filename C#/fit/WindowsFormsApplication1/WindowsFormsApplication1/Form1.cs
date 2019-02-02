using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form Form2 = new Form2();
            Form2.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Form Form3 = new Form3();
            Form3.Show();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Form Form4 = new Form4();
            Form4.Show();
        }

        private void 帮助ToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            Form Form5 = new Form5();
            Form5.Show();
        }

        private void 帮助ToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            Form Form6 = new Form6();
            Form6.Show();
        }

        private void 关于ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form Form7 =new Form7();
            Form7.Show();
        }

        private void 管他那么多直接删除肥肉DToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form Form8 = new Form8();
            Form8.Show();
        }

        private void 彩蛋ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Help.ShowHelp(this, "https://read.douban.com/reader/ebook/1726183/");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            System.Diagnostics.Process.Start("shutdown", @"/r");
            Form Form9 = new Form9();
            Form9.Show();
            this.Close();
        }
    }
}
