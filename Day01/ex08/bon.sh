ldapsearch -Q uid | grep 'uid:' | cut -c7- | grep bon | wc -l | sed 's/ //g'
