echo "Cleaning ..."
make clean
echo "Making..."
make
echo "Testing remake"
make
echo "./do-op"
./do-op
echo "./do-op 42 - 255" 
./do-op 42 - 255
echo "./do-op -2147483648 + 1"
./do-op -2147483648 + 1
echo "./do-op 4242 "*" 42"
./do-op 4242 "*" 42
echo "./do-op "        58lol" / "+2rfjke""
./do-op "        58lol" / "+2rfjke"
echo "./do-op "     -42emsdflk" / 0"
./do-op "     -42emsdflk" / 0
echo "./do-op "0" % 0"
./do-op "0" % 0
echo "./do-op "42" + "fourtytwo""
./do-op "42" + "fourtytwo"
echo "./do-op foo plus bar"
./do-op foo plus bar
echo "./do-op one on two"
./do-op one on two
echo "./do-op "2" "" 2"
./do-op "2" "" 2
