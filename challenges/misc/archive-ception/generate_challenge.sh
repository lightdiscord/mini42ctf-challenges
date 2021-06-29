#!/usr/bin/env sh

rm -f challenge
rm -f challenge.*

echo -n "Yay you found what kind of archive this is, here's a flag: " > challenge.0
cat flag.txt >> challenge.0

tar cvf challenge.1 challenge.0
zip challenge.2 challenge.1
gzip challenge.2
mv challenge.2.gz challenge.3
ar r challenge.4 challenge.3

mv challenge.4 challenge

rm -f challenge.*
