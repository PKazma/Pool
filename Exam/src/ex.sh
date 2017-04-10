# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex.sh                                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnetto <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 19:20:41 by dnetto            #+#    #+#              #
#    Updated: 2017/03/30 21:19:38 by ibahari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#testes !! !!
ex=$1 #
ex2=$0 #
ex3=$#
if [ $ex -le 5 ] ; then
if [ $ex == 0 ] ; then
	lvl=7
elif [ $ex == 1 ] ; then
	lvl=12
elif [ $ex == 2 ] ; then
	lvl=15
elif [ $ex == 3 ] ; then
	lvl=14
elif [ $ex == 4 ] ; then
	lvl=11
elif [ $ex == 5 ] ; then
	lvl=3
fi	
if [ $ex3 == 1 ] ; then
	echo "========================================="
	echo "|\t choix:   lvl : $ex\t\t|"
	echo "========================================="
	res=$((RANDOM % ($lvl)))
	clear
	echo "\n................................................\n"
	cat src/lvl$ex/$ex-$res-*/subject.fr.txt
	echo "\n................................................\n"
fi
else
	echo "choisir le lvl stp, exp: 1 pour lvl 1 \n    | lvl's dispo | \n \t |.0.| \n \t |.1.|\n \t |.2.| \n \t |.4.| \n \t |.3.| \n \t |.5.|"
fi
