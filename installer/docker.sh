#!/usr/bin/env bash

###############################################################################
# OpenASIC-Design
# Docker Installer
###############################################################################

echo "=============================================="
echo " OpenASIC-Design"
echo " Docker Engine Installation"
echo "=============================================="

# Check if Docker is already installed
if command -v docker >/dev/null 2>&1; then
    echo "[OK] Docker is already installed."
    docker --version
    exit 0
fi

echo
echo "[INFO] Removing conflicting packages..."

for pkg in docker.io docker-doc docker-compose docker-compose-v2 podman-docker containerd runc
do
    sudo apt remove -y "$pkg" 2>/dev/null
done

echo
echo "[INFO] Installing prerequisites..."

sudo apt update
sudo apt install -y ca-certificates curl

echo
echo "[INFO] Creating Docker keyring..."

sudo install -m 0755 -d /etc/apt/keyrings

sudo curl -fsSL https://download.docker.com/linux/ubuntu/gpg \
-o /etc/apt/keyrings/docker.asc

sudo chmod a+r /etc/apt/keyrings/docker.asc

echo
echo "[INFO] Adding Docker repository..."

sudo tee /etc/apt/sources.list.d/docker.sources >/dev/null <<EOF
Types: deb
URIs: https://download.docker.com/linux/ubuntu
Suites: $(. /etc/os-release && echo "${UBUNTU_CODENAME:-$VERSION_CODENAME}")
Components: stable
Architectures: $(dpkg --print-architecture)
Signed-By: /etc/apt/keyrings/docker.asc
EOF

sudo apt update

echo
echo "[INFO] Installing Docker Engine..."

sudo apt install -y \
docker-ce \
docker-ce-cli \
containerd.io \
docker-buildx-plugin \
docker-compose-plugin

echo
echo "[INFO] Adding current user to docker group..."

sudo usermod -aG docker "$USER"

echo
echo "[INFO] Verifying installation..."

docker --version

echo
echo "[INFO] Running Docker test..."

sudo docker run hello-world

echo
echo "=============================================="
echo "[SUCCESS] Docker installation completed."
echo "Please restart WSL or log out and back in"
echo "before using Docker without sudo."
echo "=============================================="
