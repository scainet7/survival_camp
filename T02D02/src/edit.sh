#!/bin/bash

echo 'Please enter path to file from root directory.'
echo 'Пожалуйста, введите путь к файлу из корневого каталога.'
read file

echo 'Please enter string to rewrite.'
echo 'Пожалуйста, введите строку для перезаписи.'
read origin_string

echo 'Please enter string-replacer.'
echo 'Пожалуйста, введите заменитель строк.'
read new_string

if [ -f $file ];then
    sed -i '' "s/$origin_string/$new_string/g" $file
    info=$(ls -lh $file)
    size=$(echo $info | cut -d ' ' -f5)
    year=$(date "+%Y")
    month=$(echo $info | cut -d ' ' -f6)
    day=$(echo $info | cut -d ' ' -f7)
    time=$(echo $info | cut -d ' ' -f8)
    hash=$(shasum -a 256 $file)
    hash=$(echo $hash | cut -d ' ' -f1)
    alg="sha256"
    totalstr="$file - $size - $year-$month-$day $time - $hash - $alg"
    echo $totalstr >> files.log
else
    echo 'File not found.'
    echo 'Файл не найден.'
fi