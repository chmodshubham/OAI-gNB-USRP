# OAI-gNB on USRP B210

## Clone the Repository

```
git clone https://github.com/ShubhamKumar89/OAI-gNB
```

## Configuration 

Change the configuration file to connect the gNB to the 5G-Core. Update the `gNB` parameters, `AMF` parameters, `network interfaces`, and `security schemes` based on the 5g-core configurations.

```
vim OAI-gNB/targets/PROJECTS/GENERIC-NR-5GC/CONF/gnb.sa.band78.fr1.106PRB.usrpb210.conf
```

>**Note** :
>We are using FR1 band n78 for this case. Use bands supported by the your UE.
 
 ## Build gNB

```
cd OAI-gNB/cmake_targets/ran_build/build/
# to remove this file, if exsists
rm CMakeCache.txt
cmake ..
cd ../..
# to build the gnb for USRP
./build_oai -I -w USRP --gNB
```

```
cd ran_build/build/
sudo ./nr-softmodem -O ../../../targets/PROJECTS/GENERIC-NR-5GC/gnb.sa.band78.fr1.106PRB.usrpb210.conf --sa -E --continuous-tx
```
