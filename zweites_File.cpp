name: C++ CI

on:
  push:
    branches:
      - main
  pull_request:
    branches:
      - main

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
    - name: Checkout repository
      uses: actions/checkout@v2

    - name: Install dependencies
      run: sudo apt-get update && sudo apt-get install -y g++

    - name: Build the application
      run: g++ -o Erstes_Repository zweites_File.cpp

    - name: Run the application
      run: ./Erstes_Repository
