using System;
using MySql.Data.MySqlClient;
using SocketGameProtocol;

namespace SocketMultiplayerGameServer.DAO
{
    public class UserData
    {
        public bool Logon(MainPack pack, MySqlConnection sqlConnection)
        {
            string username = pack.LoginPack.Username;
            string password = pack.LoginPack.Password;

            try
            {
                string sql = "INSERT INTO `ba_tps`.`userdata` (`username`, `password`) VALUES ('" + username + "', '" + password + "')";
                MySqlCommand comd = new MySqlCommand(sql, sqlConnection);

                ////插入数据

                comd = new MySqlCommand(sql, sqlConnection);

                comd.ExecuteNonQuery();
                return true;
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
                return false;
            }


        }
        public bool Login(MainPack pack, MySqlConnection sqlConnection)
        {
            string username = pack.LoginPack.Username;
            string password = pack.LoginPack.Password;

            string sql = "SELECT * FROM userdata WHERE username='" + username + "' AND password='" + password + "'";
            MySqlCommand cmd = new MySqlCommand(sql, sqlConnection);
            MySqlDataReader read = cmd.ExecuteReader();
            bool result = read.HasRows;
            read.Close();
            return result;
        }
        /*

                // 注册
                public bool Logon(MainPack pack)
                {
                    string username = pack.LoginPack.Username;
                    string password = pack.LoginPack.Password;

                    try
                    {
                        string sql = "INSERT INTO 'ba_tps'.'userdata' ('username', 'password') VALUES ('"+username+"')"
                    }

                    string sql = $"SELECT * FROM ba_tps.userdata where username='{username}'";
                    MySqlCommand command = new MySqlCommand(sql, mySqlCon);
                    MySqlDataReader read = command.ExecuteReader();

                    if (read.Read()) 
                    {
                        // 用户名已注册
                        return false;
                    }
                    // 插入数据
                    sql = $"INSERT INTO 'ba_tps'.'userdata'('username','upassword') VALUES ('{username}','{password}');";
                    command = new MySqlCommand(sql, mySqlCon);
                    try
                    {
                       command.ExecuteNonQuery(); // 判断
                       return true;
                    }
                    catch (System.Exception e)
                    {

                        Console.WriteLine(e.Message);
                        return false;
                    }
                }*/
    }
}