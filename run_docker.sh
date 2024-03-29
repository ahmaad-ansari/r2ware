#!/bin/bash
xhost + && \

# Check if the container "r2-container" is running
if [ "$(docker ps -q -f name=r2-container)" ]; then
    docker stop r2-container
fi

# Check if the container "r2-container" exists (running or stopped)
if [ "$(docker ps -aq -f name=r2-container)" ]; then
    docker rm r2-container
fi

# Check if the network "autoware_r2_bridge" exists, create it if not
if [ ! "$(docker network ls -q -f name=autoware_r2_bridge)" ]; then
    docker network create autoware_r2_bridge
fi

# Get the Astra device paths dynamically
ASTRA_DEPTH=$(readlink -f /dev/astradepth)
ASTRA_UVC=$(readlink -f /dev/astrauvc)

# Check if a specific tag is provided
if [[ "$1" == "vlp32" ]]; then
    # Run specific Docker command for VLP32
    docker run -it \
        --net=host \
        --env="DISPLAY" \
        --env="QT_X11_NO_MITSHM=1" \
        -v /tmp/.X11-unix:/tmp/.X11-unix \
        -v /home/jetson/temp:/root/yahboomcar_ros2_ws/temp \
        -v /home/jetson/rosboard:/root/rosboard \
        -v /home/jetson/maps:/root/maps \
        -v /home/jetson/r2ware:/root/r2ware \
        -v "$ASTRA_DEPTH:$ASTRA_DEPTH" \
        -v "$ASTRA_UVC:$ASTRA_UVC" \
        --device=/dev/astradepth \
        --device=/dev/astrauvc \
        --device=/dev/video0 \
        --device=/dev/myserial \
        --device=/dev/input \
        -v /home/jetson/r2ware/.bashrc:/root/.bashrc \
        -p 9090:9090 \
        -p 8888:8888 \
        --name r2-container \
        yahboomtechnology/ros-foxy/custom:4.0.0 /bin/bash
else
    # Run default Docker command
    docker run -it \
        --net=host \
        --env="DISPLAY" \
        --env="QT_X11_NO_MITSHM=1" \
        -v /tmp/.X11-unix:/tmp/.X11-unix \
        -v /home/jetson/temp:/root/yahboomcar_ros2_ws/temp \
        -v /home/jetson/rosboard:/root/rosboard \
        -v /home/jetson/maps:/root/maps \
        -v /home/jetson/r2ware:/root/r2ware \
        -v "$ASTRA_DEPTH:$ASTRA_DEPTH" \
        -v "$ASTRA_UVC:$ASTRA_UVC" \
        --device=/dev/astradepth \
        --device=/dev/astrauvc \
        --device=/dev/video0 \
        --device=/dev/myserial \
        --device=/dev/rplidar \
        --device=/dev/input \
        -v /home/jetson/r2ware/.bashrc:/root/.bashrc \
        -p 9090:9090 \
        -p 8888:8888 \
        --name r2-container \
        yahboomtechnology/ros-foxy/custom:4.0.0 /bin/bash
fi
