ls -Al --block-size=1 "$1" | awk 'NR > 1{
    unit="B";
    split("K M G T", units);
    size=$5;
    if (size >= 1024) {
        size/=1024;
        unit=units[int(log(size)/log(1024))+1];
    }
    printf "%s %d%s\n", $9, size, unit;
}'

