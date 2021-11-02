#!/bin/bash
PROTOCOL_VER=1.0
MAV_DEF=message_definitions/v1.0/swarm.xml
SWARM_WS=/home/xuhao/swarm_ws/
#mavgen.py  --lang=C --wire-protocol=$PROTOCOL_VER --output=$SWARM_WS/src/swarm_pilot/include/mavlink $MAV_DEF --no-validate
mavgen.py  --lang=C --wire-protocol=$PROTOCOL_VER --output=$SWARM_WS/src/swarm_msgs/swarmcomm_msgs/include/mavlink $MAV_DEF --no-validate
#mavgen.py --lang=Python --wire-protocol=$PROTOCOL_VER --output=$SWARM_WS/src/swarm_station/scripts/pymavlink4swarm $MAV_DEF --no-validate
#mavgen.py --lang=Python --wire-protocol=$PROTOCOL_VER --output=$SWARM_WS/src/Fast-Swarm-Planner/fast_planner/plan_manage/scripts/pymavlink4swarm $MAV_DEF --no-validate
#mavgen.py --lang=Python --wire-protocol=$PROTOCOL_VER --output=/home/xuhao/swarm_ws/src/swarm_pilot/scripts/pymavlink4swarm message_definitions/v1.0/swarm.xml --no-validate
#mavgen.py --lang=Python --wire-protocol=$PROTOCOL_VER --output=$SWARM_WS/src/uwb_mocap_broadcast/mocap_optitrack/scripts/pymavlink4swarm $MAV_DEF --no-validate
#mavgen.py --lang=JavaScript --wire-protocol=$PROTOCOL_VER --output=$SWARM_WS/swarm_gcs/libs/mavlink $MAV_DEF --no-validate
