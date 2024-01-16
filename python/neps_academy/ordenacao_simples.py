def main():
	n = int(input())
	numbers = input().split()
	numbers = [int(num) for num in numbers]
	numbers.sort()

	for i in range(n):
		print(numbers[i], end=' ')
	
	print()


if __name__ == "__main__":
	main()