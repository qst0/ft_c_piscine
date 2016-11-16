 touch -A -000001 bomb.txt
 stat -t %s bomb.txt | cut -d '"' -f 2

