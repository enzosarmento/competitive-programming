from math import sqrt

def prime(n):
	if n < 2:
		return 'N'
	else:
		for i in range(2, int(sqrt(n) + 1)):
			if n % i == 0:
				return 'N'
		return 'S'

def main():
	n = int(input())

	print(prime(n))


if __name__ == "__main__":
	main()