using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace txl
{
    public partial class find : Form
    {
        public find()
        {
            InitializeComponent();
        }

        private void find_Load(object sender, EventArgs e)
        {
            // TODO: 这行代码将数据加载到表“txlDataSet.f”中。您可以根据需要移动或删除它。
            this.fTableAdapter.Fill(this.txlDataSet.f);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            
        }
    }
}
