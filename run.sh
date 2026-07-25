#!/usr/bin/env bash
clear
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "$0")" && pwd)"
cd "$ROOT_DIR"

mkdir -p bin build data

# gcc -Wall -Wextra -Iinclude \
#   -o bin/calculator

gcc main.c -o bin/main
./bin/main




# #!/usr/bin/env bash
# set -euo pipefail

# # 1. Ensure script runs from project root
# ROOT_DIR="$(cd "$(dirname "$0")" && pwd)"
# cd "$ROOT_DIR"

# # 2. Create output directories if they don't exist
# mkdir -p bin build

# # 3. Find and compile ALL .c files dynamically
# #    -Iinclude tells gcc to look in the 'include' folder for .h files
# echo "Building project..."
# gcc -Wall -Wextra -g -Iinclude *.c -o bin/app
# # gcc -Wall -Wextra -g -Iinclude src/*.c -o bin/app

# echo "Build successful! Running application..."
# echo "----------------------------------------"

# # 4. Execute the application
# ./bin/app