#!/usr/bin/python3

import os
import subprocess
from datetime import datetime, timedelta

def commit_file(file_path, commit_message, commit_date):
    command = f'GIT_COMMITTER_DATE="{commit_date}" git commit -m "{commit_message}"'
    subprocess.run(command, shell=True)

def push_to_github():
    subprocess.run('git push origin master', shell=True)

# List of files to commit
files = [file for file in os.listdir() if os.path.isfile(file)]  # Add your file names here

# Common commit message for all files
commit_message = "binary_trees"

# Base commit date
base_date = datetime.now()  # Adjust as needed

# Commit each file with a different time
for i, file in enumerate(files):
    commit_date = (base_date + timedelta(minutes=i)).strftime('%Y-%m-%d %H:%M:%S')
    commit_file(file, commit_message, commit_date)

# Push changes to GitHub
push_to_github()
