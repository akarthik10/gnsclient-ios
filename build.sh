#!/usr/bin/env bash
URL="https://github.com/google/j2objc/releases/download/1.3.1/j2objc-1.3.1.zip" #`curl -s https://api.github.com/repos/google/j2objc/releases | grep browser_download_url` | head -n 1 | cut -d '"' -f 4`
wget $URL
unzip *.zip
xcodebuild -configuration Debug -target GNSClientApp -arch i386 -sdk iphonesimulator
