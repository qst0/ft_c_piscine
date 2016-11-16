cat phonebook | grep 'nicolas\tBomber' | awk '{print $(NF-1)}'
