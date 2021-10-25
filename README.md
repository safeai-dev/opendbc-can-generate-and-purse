# project


 1.Install ubuntu(20.04) packages : 
```
apt-get update && apt-get install -y --no-install-recommends \
    autoconf \
    build-essential \
    ca-certificates \
    capnproto \
    clang \
    cppcheck \
    curl \
    git \
    libtool \
    make \
    libbz2-dev \
    libffi-dev \
    libcapnp-dev \
    liblzma-dev \
    libncurses5-dev \
    libncursesw5-dev \
    libreadline-dev \
    libssl-dev \
    libsqlite3-dev \
    libzmq3-dev \
    llvm \
    ocl-icd-opencl-dev \
    opencl-headers \
    tk-dev \
    python-openssl \
    xz-utils \
    zlib1g-dev \
  && rm -rf /var/lib/apt/lists/*
  
  ```
  
  2. cd opendbc  add install python 3.8.10
  
  ```
  pip install --no-cache-dir -r requirements.txt
  pip install --no-cache-dir pre-commit==2.15.0 pylint==2.5.2
     
  ```
  
  ```
  export PYTHONPATH==/project
  ```
  
  3. Place .dbc file inside /opendbc folder 
  
  4. Go to parrent dir /project and run
  
  ```
  scons -c && scons -j$(nproc)
  ```
  output will be in /opendbc/can/dbc_out/ 
  
