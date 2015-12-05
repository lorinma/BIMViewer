from phusion/baseimage
MAINTAINER lorinma <malingreal [at] gmail {dot} com>
WORKDIR /usr/local/src
run apt-get update -y; \
    apt-get install -y --force-yes --no-install-recommends curl git build-essential cmake cmake-curses-gui \
                        python-software-properties software-properties-common subversion libboost-all-dev vim \
                        unzip tree mesa-common-dev freeglut3-dev freetype* SWIG python-pip

# compile occ
run git clone https://github.com/tpaviot/oce.git; cd oce; git checkout OCE-0.16; cd ..; mkdir build install; \
    cd build; cmake ../oce/ -DOCE_INSTALL_PREFIX=../install; make -j4; make install/strip; cd ../; rm -rf oce build

# compile python-occ
run git clone https://github.com/tpaviot/pythonocc-core.git; cd pythonocc-core; \
    git checkout 0.16.2; cd ..; mkdir build; cd build; cmake ../pythonocc-core/ -DCMAKE_INSTALL_PREFIX=../install -DOCE_DIR=../install/lib/oce-0.16 -DPYTHONOCC_INSTALL_DIRECTORY=../install/OCC;\
    make -j4; make install; cd ../; rm -rf pythonocc-core build