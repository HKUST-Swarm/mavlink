#!/bin/bash
PROTOCOL_VER=2.0
mavgen.py  --lang=C --wire-protocol=$PROTOCOL_VER --output=/home/xuhao/swarm_ws/src/swarm_pilot/include/mavlink message_definitions/v1.0/swarm.xml --no-validate

mavgen.py  --lang=C --wire-protocol=$PROTOCOL_VER --output=/home/xuhao/swarm_ws/src/swarm_pkgs/localization_proxy/include/mavlink message_definitions/v1.0/swarm.xml --no-validate

mavgen.py --lang=Python --wire-protocol=$PROTOCOL_VER --output=/home/xuhao/swarm_ws/src/swarm_station/scripts/pymavlink4swarm message_definitions/v1.0/swarm.xml --no-validate

#mavgen.py --lang=Python --wire-protocol=$PROTOCOL_VER --output=/home/xuhao/swarm_ws/src/swarm_pilot/scripts/pymavlink4swarm message_definitions/v1.0/swarm.xml --no-validate

mavgen.py --lang=Python --wire-protocol=$PROTOCOL_VER --output=/home/xuhao/swarm_ws/src/uwb_mocap_broadcast/mocap_optitrack/scripts/pymavlink4swarm message_definitions/v1.0/swarm.xml --no-validate

