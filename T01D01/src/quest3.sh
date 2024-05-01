#!/bin/bash

cd
cd T01D01
cd src
sh ai_door_managment_module.sh
mv door_managment_fi door_managment_files
cd door_managment_files
mkdir door_configuration
mv *.cong door_configuration
mkdir door_map
mv door_map_1.1 door_map
mkdir door_logs
mv *.log door_logs
