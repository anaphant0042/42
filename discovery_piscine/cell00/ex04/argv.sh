i=1;
for argument in "$@"
do
	echo $argument;
	i=$((i+1));
done
