using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using MySql.Data.MysqlClient;

namespace Csharp_And_MySQL
{
    public partial class Csharp_Connect_To_MySQL_Database : Forms
    {
        public Csharp_Connect_To_MySQL_Database()
        {
            InitializeComponent();

        }
        private void Csharp_Connect_To_MySQL_Database_Load(object sender, EventArgs e)
        {
            try
            {

                MySqlConnection connection = new MySqlConnection("datasource=localhost;port=3307;username=root;password=Bakemonogatari12");
                connection.Open();
                if(connection.State == ConnectionState.Open)
                {
                    label1.Text = "Connected";
                    label1.ForeColor = Color.Green;
                }
                else
                {
                    label1.Text = "Not Connected";
                    label1.ForeColor = Color.Red;
                }
            }catch(Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }
    }
}