def resverse(text):
	return text[::-1]

def is_palindrome(text):
	text = text_pro(text)
	return text == resverse(text)

def text_pro(text):
	text = text.lower()
	a = []
	ile = (' ','!','.','\\','/',',')
	for i in text:
		if i not in ile:
			a.append(i)
	print(a)
	return a

something = input('enter text:')



if is_palindrome(something):
	print("yes")
else:
	print("no")