namespace txl
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.删除ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.lBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.lnameDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.lnumDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.lsexDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.lbirthDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.laddressDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.txlDataSetBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.txlDataSet = new txl.txlDataSet();
            this.fBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.fTableAdapter = new txl.txlDataSetTableAdapters.fTableAdapter();
            this.lTableAdapter = new txl.txlDataSetTableAdapters.lTableAdapter();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.contextMenuStrip1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.lBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.txlDataSetBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.txlDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.fBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // dataGridView1
            // 
            this.dataGridView1.AllowDrop = true;
            this.dataGridView1.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.dataGridView1.AutoGenerateColumns = false;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.lnameDataGridViewTextBoxColumn,
            this.lnumDataGridViewTextBoxColumn,
            this.lsexDataGridViewTextBoxColumn,
            this.lbirthDataGridViewTextBoxColumn,
            this.laddressDataGridViewTextBoxColumn});
            this.dataGridView1.ContextMenuStrip = this.contextMenuStrip1;
            this.dataGridView1.DataSource = this.lBindingSource;
            this.dataGridView1.Location = new System.Drawing.Point(-1, 12);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowTemplate.Height = 27;
            this.dataGridView1.Size = new System.Drawing.Size(547, 273);
            this.dataGridView1.TabIndex = 0;
            this.dataGridView1.VirtualMode = true;
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick);
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.删除ToolStripMenuItem});
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(172, 30);
            this.contextMenuStrip1.Opening += new System.ComponentModel.CancelEventHandler(this.contextMenuStrip1_Opening);
            // 
            // 删除ToolStripMenuItem
            // 
            this.删除ToolStripMenuItem.Name = "删除ToolStripMenuItem";
            this.删除ToolStripMenuItem.ShortcutKeys = System.Windows.Forms.Keys.Delete;
            this.删除ToolStripMenuItem.Size = new System.Drawing.Size(171, 26);
            this.删除ToolStripMenuItem.Text = "删除";
            // 
            // lBindingSource
            // 
            this.lBindingSource.DataMember = "l";
            this.lBindingSource.DataSource = this.txlDataSetBindingSource;
            // 
            // lnameDataGridViewTextBoxColumn
            // 
            this.lnameDataGridViewTextBoxColumn.DataPropertyName = "lname";
            this.lnameDataGridViewTextBoxColumn.HeaderText = "lname";
            this.lnameDataGridViewTextBoxColumn.Name = "lnameDataGridViewTextBoxColumn";
            // 
            // lnumDataGridViewTextBoxColumn
            // 
            this.lnumDataGridViewTextBoxColumn.DataPropertyName = "lnum";
            this.lnumDataGridViewTextBoxColumn.HeaderText = "lnum";
            this.lnumDataGridViewTextBoxColumn.Name = "lnumDataGridViewTextBoxColumn";
            // 
            // lsexDataGridViewTextBoxColumn
            // 
            this.lsexDataGridViewTextBoxColumn.DataPropertyName = "lsex";
            this.lsexDataGridViewTextBoxColumn.HeaderText = "lsex";
            this.lsexDataGridViewTextBoxColumn.Name = "lsexDataGridViewTextBoxColumn";
            // 
            // lbirthDataGridViewTextBoxColumn
            // 
            this.lbirthDataGridViewTextBoxColumn.DataPropertyName = "lbirth";
            this.lbirthDataGridViewTextBoxColumn.HeaderText = "lbirth";
            this.lbirthDataGridViewTextBoxColumn.Name = "lbirthDataGridViewTextBoxColumn";
            // 
            // laddressDataGridViewTextBoxColumn
            // 
            this.laddressDataGridViewTextBoxColumn.DataPropertyName = "laddress";
            this.laddressDataGridViewTextBoxColumn.HeaderText = "laddress";
            this.laddressDataGridViewTextBoxColumn.Name = "laddressDataGridViewTextBoxColumn";
            // 
            // txlDataSetBindingSource
            // 
            this.txlDataSetBindingSource.DataSource = this.txlDataSet;
            this.txlDataSetBindingSource.Position = 0;
            // 
            // txlDataSet
            // 
            this.txlDataSet.DataSetName = "txlDataSet";
            this.txlDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // fBindingSource
            // 
            this.fBindingSource.DataMember = "f";
            this.fBindingSource.DataSource = this.txlDataSet;
            // 
            // fTableAdapter
            // 
            this.fTableAdapter.ClearBeforeFill = true;
            // 
            // lTableAdapter
            // 
            this.lTableAdapter.ClearBeforeFill = true;
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(547, 287);
            this.Controls.Add(this.dataGridView1);
            this.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.fBindingSource, "fname", true));
            this.Name = "Form2";
            this.Text = "通讯录";
            this.Load += new System.EventHandler(this.Form2_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.contextMenuStrip1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.lBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.txlDataSetBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.txlDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.fBindingSource)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private txlDataSet txlDataSet;
        private System.Windows.Forms.BindingSource fBindingSource;
        private txlDataSetTableAdapters.fTableAdapter fTableAdapter;
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.BindingSource txlDataSetBindingSource;
        private System.Windows.Forms.BindingSource lBindingSource;
        private txlDataSetTableAdapters.lTableAdapter lTableAdapter;
        private System.Windows.Forms.DataGridViewTextBoxColumn lnameDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn lnumDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn lsexDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn lbirthDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn laddressDataGridViewTextBoxColumn;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem 删除ToolStripMenuItem;
    }
}