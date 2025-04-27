
#!/bin/bash

# Install system dependencies
sudo apt update
sudo apt install -y default-jre

# Install Python dependencies
pip install -r requirements.txt
