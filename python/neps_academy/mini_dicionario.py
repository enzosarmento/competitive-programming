def main():
	n = int(input())
	dictionary = {}

	for i in range(n):
		temp = input().split()
		dictionary[temp[0]] = temp[1]

	phrase = input().split()

	for i in phrase:
		print(dictionary[i], end=' ')

	print() 

if __name__ == "__main__":
	main()