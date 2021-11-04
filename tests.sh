gcc -Wall -Werror -Wextra ft_strlcpy.c ft_strlen.c -o run_tests
echo "Running tests on ft_strlcpy..."
./run_tests XXXXXXXXXXXXXXXXXXXXXXXXX 90
./run_tests X 1
./run_tests X 0
rm -rf run_tests