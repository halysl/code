def fib(n):
    count = 0
    num1 = 1
    num2 = 1
    while count < n:
        result = num1
        num1, num2 = num2, num1+num2
        count += 1
        yield result

f = fib(10)
for i in f:
    print(i)