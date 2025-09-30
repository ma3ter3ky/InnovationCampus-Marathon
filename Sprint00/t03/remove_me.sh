for item in "$@"; 
do
    if [ -e $item ];
    then
	if [ -d $item ];
	then
	    rm -d $item
	else
	    rm $item
	fi
    else
        echo "Error: $item does not exist."
    fi
done

