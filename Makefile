all:
	g++ client.cpp -Wall -Werror -Wextra -ansi -std=c++11 -o client
clean:
	rm client
