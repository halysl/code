namespace WindowsFormsApplication1
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.帮助ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.关于ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.彩蛋ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.管他那么多直接删除肥肉DToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.button5 = new System.Windows.Forms.Button();
            this.contextMenuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(21, 61);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(86, 56);
            this.button1.TabIndex = 0;
            this.button1.Text = "-1kg";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(133, 61);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(86, 56);
            this.button2.TabIndex = 1;
            this.button2.Text = "-5kg";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(248, 61);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(86, 56);
            this.button3.TabIndex = 2;
            this.button3.Text = "-10kg";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(364, 61);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(86, 56);
            this.button4.TabIndex = 3;
            this.button4.Text = "-20kg";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.帮助ToolStripMenuItem,
            this.关于ToolStripMenuItem,
            this.彩蛋ToolStripMenuItem,
            this.管他那么多直接删除肥肉DToolStripMenuItem});
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(306, 108);
            // 
            // 帮助ToolStripMenuItem
            // 
            this.帮助ToolStripMenuItem.Name = "帮助ToolStripMenuItem";
            this.帮助ToolStripMenuItem.Size = new System.Drawing.Size(305, 26);
            this.帮助ToolStripMenuItem.Text = "帮助";
            this.帮助ToolStripMenuItem.Click += new System.EventHandler(this.帮助ToolStripMenuItem_Click_1);
            // 
            // 关于ToolStripMenuItem
            // 
            this.关于ToolStripMenuItem.Name = "关于ToolStripMenuItem";
            this.关于ToolStripMenuItem.Size = new System.Drawing.Size(305, 26);
            this.关于ToolStripMenuItem.Text = "关于";
            this.关于ToolStripMenuItem.Click += new System.EventHandler(this.关于ToolStripMenuItem_Click);
            // 
            // 彩蛋ToolStripMenuItem
            // 
            this.彩蛋ToolStripMenuItem.Name = "彩蛋ToolStripMenuItem";
            this.彩蛋ToolStripMenuItem.Size = new System.Drawing.Size(305, 26);
            this.彩蛋ToolStripMenuItem.Text = "彩蛋";
            this.彩蛋ToolStripMenuItem.Click += new System.EventHandler(this.彩蛋ToolStripMenuItem_Click);
            // 
            // 管他那么多直接删除肥肉DToolStripMenuItem
            // 
            this.管他那么多直接删除肥肉DToolStripMenuItem.Name = "管他那么多直接删除肥肉DToolStripMenuItem";
            this.管他那么多直接删除肥肉DToolStripMenuItem.Size = new System.Drawing.Size(305, 26);
            this.管他那么多直接删除肥肉DToolStripMenuItem.Text = "管他那么多，直接删除肥肉（D）";
            this.管他那么多直接删除肥肉DToolStripMenuItem.Click += new System.EventHandler(this.管他那么多直接删除肥肉DToolStripMenuItem_Click);
            // 
            // button5
            // 
            this.button5.Location = new System.Drawing.Point(168, 153);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(126, 64);
            this.button5.TabIndex = 5;
            this.button5.Text = "千万不要点";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ControlLightLight;
            this.ClientSize = new System.Drawing.Size(476, 251);
            this.ContextMenuStrip = this.contextMenuStrip1;
            this.Controls.Add(this.button5);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Font = new System.Drawing.Font("楷体", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.ForeColor = System.Drawing.SystemColors.ControlText;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form1";
            this.Text = "夏婧怡的朋友瘦身计划1.0";
            this.TransparencyKey = System.Drawing.Color.Maroon;
            this.Load += new System.EventHandler(this.Form1_Load);
            this.contextMenuStrip1.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem 帮助ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 关于ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 彩蛋ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 管他那么多直接删除肥肉DToolStripMenuItem;
        private System.Windows.Forms.Button button5;
    }
}

