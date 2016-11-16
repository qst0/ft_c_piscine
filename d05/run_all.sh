# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run_all.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kyork <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/15 15:26:39 by kyork             #+#    #+#              #
#    Updated: 2016/08/16 16:15:39 by kyork            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -name 'ex*' -d 1 | sort -g | while read f
do
	echo
	echo $f
	( cd $f; ../compile.sh ) | tee /tmp/compile_out
	grep FAIL /tmp/compile_out >/dev/null 2>/dev/null && exit 1
	grep 'MANUAL INSPECT' /tmp/compile_out >/dev/null 2>/dev/null
done
