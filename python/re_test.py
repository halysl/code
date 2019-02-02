import re

def is_valid_email(addr):
	is_valid_email = re.compile(r'^([a-z0-9.]+)\@([a-z0-9]+)\.([a-z0-9]+)')
	if re.match(is_valid_email, addr):
		return True
	else:
		return False

assert is_valid_email('someone@gmail.com')
assert is_valid_email('bill.gates@microsoft.com')
assert not is_valid_email('bob#example.com')
assert not is_valid_email('mr-bob@example.com')
print('ok')