#!/usr/bin/env bash

wget `curl -s https://api.github.com/repos/google/j2objc/releases | grep browser_download_url | head -n 1 | cut -d '"' -f 4`
unzip *.zip -d j2objc
