while read line
do
    name=$line
    echo "${name%%:*}"
done < $1
