from quay.io/lorinma/ide:condabase
MAINTAINER lorinma <malingreal [at] gmail {dot} com>
# WORKDIR /usr/local/src
RUN conda config --add channels DLR-SC;conda config --add channels lorinma;conda install python-occ=0.16.0 -y;pip install -r requirement.txt;apt-get update -y;apt-get install -y --force-yes --fix-missing --no-install-recommends freeglut3-dev;git clone https://github.com/lorinma/BIMViewer.git;
WORKDIR /usr/local/src/BIMViewer
RUN apt-get clean && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
CMD python app.py