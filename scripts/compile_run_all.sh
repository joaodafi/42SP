for d in */ ; do
	cd $d/
	echo "======== `basename $PWD` ========"
	gcc -Wall -Wextra -Werror ~/42SP/basecamp/listas/`pwd | rev | cut -d '/' -f2 | rev`/$d/main.c ft_*.c
	./a.out
	cd ..
done