while 1:
    data = input()
    min_num, max_num = data.split(' ')
    min_num = int(min_num)
    max_num = int(max_num)
    li = []
    for i in range(min_num,max_num+1):
    	i1 = i//100
    	i2 = i%100//10
    	i3 = i%10
    	if i1**3+i2**3+i3**3 == i:
    		li.append(i)
    if len(li) == 0:
    	print("no")
    else:
    	for i in range(len(li)):
    		print(li[i],end=' ')