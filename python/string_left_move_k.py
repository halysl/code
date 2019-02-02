def left_move(li,k):
	a = li[0:k]
	b = li[k:]
	a = a[::-1]
	b = b[::-1]
	c = a+b
	c = c[::-1]
	print(c)

a = "abcdefg"
k = 3
left_move(a,k)