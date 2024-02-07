i=1;
	for argument in "$@"
		do
			mkdir "ex$argument";
			i=$((i+1));
done
