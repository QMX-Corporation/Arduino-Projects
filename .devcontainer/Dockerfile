FROM ubuntu:24.04

# Prevent interactive prompts during installation
ENV DEBIAN_FRONTEND=noninteractive

# Update package list and install essential development tools, git, and arduino CLI tools
RUN apt-get update && apt-get install -y \
    build-essential \
    git \
    curl \
    wget \
    clang-format \
    python3 \
    && rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /workspace

# Default command
CMD ["bash"]
