ls -Alh $1| tail -n +2 |awk {'printf $9" "$5"\n"'}  
