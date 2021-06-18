for d in */ ; do
    cd $d/
	echo "GITS `basename $PWD`:==~=~=~=~=~=~=~=~=~=~=~="
	ls -a
	rm .gitignore
	rm -rf .git
	echo "NO GITS `basename $PWD`: =~=~=~=~=~~=~=~=~=~="
	ls -a
	cd ..
done