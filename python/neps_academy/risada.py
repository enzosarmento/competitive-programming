def main():
	smile = input()
	array = {'a': 'a', 'e': 'e', 'i': 'i', 'o': 'o', 'u': 'u'}
	concat = ''

	for i in range(len(smile)):
		if smile[i] in array:
			concat += smile[i]

	inverse = concat[::-1]

	if concat == inverse:
		print('S')
	else:
		print('N')


if __name__ == "__main__":
	main()