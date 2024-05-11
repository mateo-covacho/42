#!/bin/bash

# Function to check and sync directories
sync_dir() {
    local source_dir="$1"
    local target_dir="$2"
    
    # Check if directories are different using checksum
    if ! diff -qr "$source_dir" "$target_dir" > /dev/null; then
        echo "Syncing $source_dir to $target_dir..."
        
        # Remove local version
        rm -rf "$target_dir"
        
        # Copy new version from source
        cp -r "$source_dir" "$target_dir"
    fi
}

# Directories to sync
sync_dir "$HOME/.config/nvim" "./config/nvim"
sync_dir "$HOME/.config/lf" "./config/lf"

# Add changes to git, commit, and push
git add ./config/nvim ./config/lf
git commit -m "Updated nvim and lf configurations from home directory"
git push

echo "Configuration files synced and changes pushed to Git repository."

