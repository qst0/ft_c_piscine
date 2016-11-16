ldapsearch -LLL "uid=z*" cn | grep cn | cut -d" " -f 2- | sort -r
