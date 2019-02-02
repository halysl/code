namespace txl
{
    partial class Form1
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.button1 = new System.Windows.Forms.Button();
            this.txlDataSet = new txl.txlDataSet();
            this.lBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.lTableAdapter = new txl.txlDataSetTableAdapters.lTableAdapter();
            this.lBindingSource1 = new System.Windows.Forms.BindingSource(this.components);
            this.button2 = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.txlDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.lBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.lBindingSource1)).BeginInit();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(140, 40);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(169, 80);
            this.button1.TabIndex = 0;
            this.button1.Text = "查询所有数据";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // txlDataSet
            // 
            this.txlDataSet.DataSetName = "txlDataSet";
            this.txlDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // lBindingSource
            // 
            this.lBindingSource.DataMember = "l";
            this.lBindingSource.DataSource = this.txlDataSet;
            // 
            // lTableAdapter
            // 
            this.lTableAdapter.ClearBeforeFill = true;
            // 
            // lBindingSource1
            // 
            this.lBindingSource1.DataMember = "l";
            this.lBindingSource1.DataSource = this.txlDataSet;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(140, 149);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(169, 80);
            this.button2.TabIndex = 1;
            this.button2.Text = "查询特定数据";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(484, 288);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Name = "Form1";
            this.Text = "用户管理界面";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.txlDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.lBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.lBindingSource1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private txlDataSet txlDataSet;
        private System.Windows.Forms.BindingSource lBindingSource;
        private txlDataSetTableAdapters.lTableAdapter lTableAdapter;
        private System.Windows.Forms.BindingSource lBindingSource1;
        private System.Windows.Forms.Button button2;
    }
}

