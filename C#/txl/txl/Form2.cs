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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void Form2_Load(object sender, EventArgs e)
        {
            // TODO: 这行代码将数据加载到表“txlDataSet.l”中。您可以根据需要移动或删除它。
            this.lTableAdapter.Fill(this.txlDataSet.l);
            // TODO: 这行代码将数据加载到表“txlDataSet.f”中。您可以根据需要移动或删除它。
            this.fTableAdapter.Fill(this.txlDataSet.f);

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
             
        }

        private void contextMenuStrip1_Opening(object sender, CancelEventArgs e)
        {

        }
    }
}
