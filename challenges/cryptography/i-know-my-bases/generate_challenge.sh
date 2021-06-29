#!/usr/bin/env sh

rm -f challenge.txt

echo -n "Wow, you indeed have your bases, here's a flag: " > challenge.txt.0
cat flag.txt >> challenge.txt.0

cat challenge.txt.0 | xxd -b | cut -d ' ' -f 2-8 > challenge.txt.1
cat challenge.txt.1 | xxd -p > challenge.txt.2
cat challenge.txt.2 | base32 > challenge.txt.3
cat challenge.txt.3 | base64 > challenge.txt.4

mv challenge.txt.4 challenge.txt
rm -f challenge.txt.*
