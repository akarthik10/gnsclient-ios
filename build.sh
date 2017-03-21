#!/usr/bin/env bash

cd GNS
ant
./bin/gpServer.sh start all
cd ..

URL="https://github.com/google/j2objc/releases/download/1.3.1/j2objc-1.3.1.zip" #`curl -s https://api.github.com/repos/google/j2objc/releases | grep browser_download_url` | head -n 1 | cut -d '"' -f 4`
wget $URL
unzip *.zip
xcodebuild -list
xcodebuild -configuration Debug -target GNSClientApp -scheme GNSClientApp -sdk iphonesimulator -destination platform="iOS Simulator",OS=10.2,id="7B6F8C6B-B67A-4F64-BB70-AE1FF077ACC2" build test
