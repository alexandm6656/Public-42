#!/bin/bash
I=0
NBRARG=500
MAX=5500
LINE=0

rm test.txt
while [ $I -lt 20 ]
do
	echo $I
	echo "test "$I 1>>test.txt
	ARG=$(shuf -i 0-$NBRARG -n $NBRARG | tr '\n' ' ')
	./push_swap $ARG 1>output.txt
	cat output.txt | wc -l 1>> test.txt
	LINE=$(tail -n 1 test.txt)
	if [ $LINE -gt $MAX ]
	then
		echo "nombre de ligne KO" >> test.txt
	fi
	cat output.txt | ./checker_linux $ARG 1>> test.txt
	I=`expr $I + 1`
	echo $ARG 1>>test.txt
	echo "--------------------------------------" 1>> test.txt
done
echo "nombre KO"
grep KO test.txt | wc -l

echo "nombre OK"
grep OK test.txt | wc -l

