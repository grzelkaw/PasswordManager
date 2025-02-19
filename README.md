# PasswordManager
A password management application developed in C++/CLI using the .NET Framework and Windows Forms for the user interface.

# How to start
<p>On start, you need to download SQL Server and SQL Server Management Studio from Microsoft web page. Then in 'app' folder you run .exe file and your app is ready. In the 'files' folder there are all .cpp and .h source files if you want to check yourself</p>

# About
<p>Program allows users to manage and generate passwords to their sites, banks or games. You can sort your data by ID, name, login or password. For security app will also automaticly shut down after 99 seconds, but you can always click button to refresh timer. </p>

![image alt](https://github.com/grzelkaw/PasswordManager/blob/main/screenshots/3.jpg?raw=true)

# Login
<p>On launch, you will have login window pop up. Insert your e-mail and password to entrance program.</p>

<div align="center">
  <img src="https://github.com/grzelkaw/PasswordManager/blob/main/screenshots/1.png?raw=true" alt="image alt">
</div>

# Register
<p>If there isn't any account that match your data, you need to click the register button. Then new window will appear, where you can instert your info and create account. Program require your e-mail adress, phone number and password.
To succesfully register you need to click buttons to send you code via e-mail and SMS to verify your account.</p>

<div align="center">
  <img src="https://github.com/grzelkaw/PasswordManager/blob/main/screenshots/2.png?raw=true" alt="image alt">
</div>

# Generator
<p>While in main dashboard we can click generate button to be transfered to password generator where algorithm generate random and secure passwords for us, using parameters you selected like length, special characters or capital letter and numbers. Then simply select ID where this password will be added and done.</p>

<div align="center">
  <img src="https://github.com/grzelkaw/PasswordManager/blob/main/screenshots/4.png?raw=true" alt="image alt">
</div>

# Code
<p>To start program you need SSMS like said on beginning. Then you can use SQL commands I left in sql folder. One is to create users table, other is to store user's passwords. All passwords are also encrypted by SQL master key. 
If used in professional companies you can give acces to the employee only to his own passwords. Code is also secured for SQL injections. Every other window is stored in different file to avoid mistakes and clarity of code.
There is also .txt file that contains forbidden words, that can't be used in passwords. There is list of mostly used passwords in the world. User also can't use same password to different logins.
</p>

# Admin
<p>If in login window you will type e-mail: admin, password: admin, you grant acces to admin panel. You can manage here account of your users like adding or deleting them, however you don't have acces to their passwords.</p>

![image alt](https://github.com/grzelkaw/PasswordManager/blob/main/screenshots/5.png?raw=true)

# Summary
<p>Overall I think project is finished. It is both simple and secure password manager what is most important in applications like that.
Made by Wiktor Grzelka</p>
