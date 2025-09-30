filename="$1"
cat "$filename" | sed 's/redpill/bluepill/i' | grep 'bluepill'
