def changebase(n, base, to):

    if to > 36 or base > 36:
        raise ValueError('max base is 36')

    # convert to base 10
    n = int(str(n),base)
    positive = n >= 0

    # return if base 10 is desired
    if to == 10:
        return str(n)

    # convert to new base
    n = abs(n)
    num = []
    handle_digit = lambda i: str(i) if i < 10 else chr(i+55)
    while n > 0:
        num.insert(0, handle_digit(n % to))
        n = n // to
    # return string value of n in new base
    return ''.join(num) if positive else '-' + ''.join(num)
print(changebase(input(), base=2, to=10))