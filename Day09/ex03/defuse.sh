touch -A -000001 -a bomb.txt
stat -x bomb.txt | grep "Access" | cut -c9-
