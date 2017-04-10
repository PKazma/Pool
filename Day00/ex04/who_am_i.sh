ldapwhoami -Q | cut -c4- | sed 's/ou=2017_paris//'| sed 's/ou=paris//'
