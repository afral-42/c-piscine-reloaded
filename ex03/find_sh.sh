find . -type f -exec basename {} \; | rev | cut -c 4- | rev
