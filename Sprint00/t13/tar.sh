requested_operation="$1"
archieve_name="$2"
shift 2
if [ "$requested_operation" == "-c" ];
then
    tar -cf "$archieve_name" "$@"
elif [ "$requested_operation" == "-e" ];
then
    tar -xf "$archieve_name"
fi
