import smtplib
from email import encoders
from email.header import Header
from email.mime.text import MIMEText
from email.utils import parseaddr,formataddr

# 格式化发送数据
def _format_addr(s):
	name, addr = parseaddr(s)
	return formataddr((Header(name, 'utf-8').encode(), addr))


# 发件人、密码（秘钥）、收件人
from_addr = 'liuzhi.0817@qq.com'
password = 'utgvxlsxmznpbafi'
to_addr = '1987107564@qq.com'

# 虚假发件人、收件人信息
fake_fa = 'Link@hailar.email.com'
fake_ta = 'Sakura@haliar.email.com'

# 邮件主体，包括主题、内容
subject = '塞尔达天下第一'
content = '还是炸鱼开神庙有意思。'
msg = MIMEText(content)
msg['Subject'] = subject
msg['From'] = _format_addr('林克 <%s>'%fake_fa)
msg['To'] = _format_addr('Sakura <%s>'%fake_ta)

# 发送过程
# 连接smtp服务器，登录服务器，发送邮件，返回信息
try:
	smtp_server = 'smtp.qq.com'
	server = smtplib.SMTP_SSL(smtp_server, 465)
	server.set_debuglevel(1)
	server.login(from_addr, password)
	server.sendmail(from_addr, to_addr, msg.as_string())
	print('发送成功')
except s.SMTPException as e:
	print('发送失败')
finally:
	server.quit()