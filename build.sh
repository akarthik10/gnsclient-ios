#!/usr/bin/env bash
URL=`curl -s https://api.github.com/repos/google/j2objc/releases | grep browser_download_url` # | head -n 1 | cut -d '"' -f 4`
echo $URL
wget $URL
unzip *.zip -d j2objc
