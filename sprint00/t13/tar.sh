while getopts "ce" opt; do
case "$opt" in
c)tar -cf $2 "${@:3}"
 exit  ;;
e)tar -x $2
 exit  ;;
esac
done 
