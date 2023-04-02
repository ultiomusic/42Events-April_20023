using	System.Net;
using	System.Net.Mail;

namespace	SendMail
{
	class Program
	{
		static string smtpAdress = "smtp.gmail.com";
		static int portNumber = 587;
		static bool enableSSL = true;
		static string emailFromAddress = "april.2023.mail@gmail.com";
		static string password = "MotDePasseQualitatif";
		static string emailToAdress = "le.greg01900@gmail.com";
		static string subject = "test";
		static string body = "Bonjour bonsoir je suis content que cela fonctionne :)";
		static void Main(string[] args)
		{
			SendEmail();
		}
		public static void SendEmail()
		{
			using(MailMessage mail = new MailMessage())
			{
				mail.From = new MailAddress(emailFromAddress);
				mail.To.Add(emailToAdress);
				mail.Subject = subject;
				mail.Body = body;
				mail.IsBodyHtml = true;
				using (SmtpClient smtp = new SmtpClient(smtpAdress, portNumber))
				{
					smtp.Credentials = new NetworkCredential(emailFromAddress, password);
					smtp.EnableSsl = enableSSL;
					smtp.Send(mail);
				}
			}
		}
	}
}
