// MESSAGE ROTOR_ANGLE PACKING

#define MAVLINK_MSG_ID_ROTOR_ANGLE 255

typedef struct __mavlink_rotor_angle_t
{
 float yaw; ///< Yaw of Rotor measure by angle instruction
 float roll; ///< Roll of Rotor angle measure by instruction
 float pitch; ///< Pitch of Rotor angle measure by instruction
} mavlink_rotor_angle_t;

#define MAVLINK_MSG_ID_ROTOR_ANGLE_LEN 12
#define MAVLINK_MSG_ID_255_LEN 12

#define MAVLINK_MSG_ID_ROTOR_ANGLE_CRC 155
#define MAVLINK_MSG_ID_255_CRC 155



#define MAVLINK_MESSAGE_INFO_ROTOR_ANGLE { \
	"ROTOR_ANGLE", \
	3, \
	{  { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_rotor_angle_t, yaw) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_rotor_angle_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_rotor_angle_t, pitch) }, \
         } \
}


/**
 * @brief Pack a rotor_angle message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param yaw Yaw of Rotor measure by angle instruction
 * @param roll Roll of Rotor angle measure by instruction
 * @param pitch Pitch of Rotor angle measure by instruction
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rotor_angle_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float yaw, float roll, float pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROTOR_ANGLE_LEN];
	_mav_put_float(buf, 0, yaw);
	_mav_put_float(buf, 4, roll);
	_mav_put_float(buf, 8, pitch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#else
	mavlink_rotor_angle_t packet;
	packet.yaw = yaw;
	packet.roll = roll;
	packet.pitch = pitch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROTOR_ANGLE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN, MAVLINK_MSG_ID_ROTOR_ANGLE_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#endif
}

/**
 * @brief Pack a rotor_angle message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param yaw Yaw of Rotor measure by angle instruction
 * @param roll Roll of Rotor angle measure by instruction
 * @param pitch Pitch of Rotor angle measure by instruction
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rotor_angle_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float yaw,float roll,float pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROTOR_ANGLE_LEN];
	_mav_put_float(buf, 0, yaw);
	_mav_put_float(buf, 4, roll);
	_mav_put_float(buf, 8, pitch);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#else
	mavlink_rotor_angle_t packet;
	packet.yaw = yaw;
	packet.roll = roll;
	packet.pitch = pitch;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ROTOR_ANGLE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN, MAVLINK_MSG_ID_ROTOR_ANGLE_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#endif
}

/**
 * @brief Encode a rotor_angle struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rotor_angle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rotor_angle_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rotor_angle_t* rotor_angle)
{
	return mavlink_msg_rotor_angle_pack(system_id, component_id, msg, rotor_angle->yaw, rotor_angle->roll, rotor_angle->pitch);
}

/**
 * @brief Encode a rotor_angle struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rotor_angle C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rotor_angle_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rotor_angle_t* rotor_angle)
{
	return mavlink_msg_rotor_angle_pack_chan(system_id, component_id, chan, msg, rotor_angle->yaw, rotor_angle->roll, rotor_angle->pitch);
}

/**
 * @brief Send a rotor_angle message
 * @param chan MAVLink channel to send the message
 *
 * @param yaw Yaw of Rotor measure by angle instruction
 * @param roll Roll of Rotor angle measure by instruction
 * @param pitch Pitch of Rotor angle measure by instruction
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rotor_angle_send(mavlink_channel_t chan, float yaw, float roll, float pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ROTOR_ANGLE_LEN];
	_mav_put_float(buf, 0, yaw);
	_mav_put_float(buf, 4, roll);
	_mav_put_float(buf, 8, pitch);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_ANGLE, buf, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN, MAVLINK_MSG_ID_ROTOR_ANGLE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_ANGLE, buf, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#endif
#else
	mavlink_rotor_angle_t packet;
	packet.yaw = yaw;
	packet.roll = roll;
	packet.pitch = pitch;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_ANGLE, (const char *)&packet, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN, MAVLINK_MSG_ID_ROTOR_ANGLE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_ANGLE, (const char *)&packet, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ROTOR_ANGLE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rotor_angle_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float yaw, float roll, float pitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, yaw);
	_mav_put_float(buf, 4, roll);
	_mav_put_float(buf, 8, pitch);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_ANGLE, buf, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN, MAVLINK_MSG_ID_ROTOR_ANGLE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_ANGLE, buf, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#endif
#else
	mavlink_rotor_angle_t *packet = (mavlink_rotor_angle_t *)msgbuf;
	packet->yaw = yaw;
	packet->roll = roll;
	packet->pitch = pitch;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_ANGLE, (const char *)packet, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN, MAVLINK_MSG_ID_ROTOR_ANGLE_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ROTOR_ANGLE, (const char *)packet, MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ROTOR_ANGLE UNPACKING


/**
 * @brief Get field yaw from rotor_angle message
 *
 * @return Yaw of Rotor measure by angle instruction
 */
static inline float mavlink_msg_rotor_angle_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field roll from rotor_angle message
 *
 * @return Roll of Rotor angle measure by instruction
 */
static inline float mavlink_msg_rotor_angle_get_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitch from rotor_angle message
 *
 * @return Pitch of Rotor angle measure by instruction
 */
static inline float mavlink_msg_rotor_angle_get_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a rotor_angle message into a struct
 *
 * @param msg The message to decode
 * @param rotor_angle C-struct to decode the message contents into
 */
static inline void mavlink_msg_rotor_angle_decode(const mavlink_message_t* msg, mavlink_rotor_angle_t* rotor_angle)
{
#if MAVLINK_NEED_BYTE_SWAP
	rotor_angle->yaw = mavlink_msg_rotor_angle_get_yaw(msg);
	rotor_angle->roll = mavlink_msg_rotor_angle_get_roll(msg);
	rotor_angle->pitch = mavlink_msg_rotor_angle_get_pitch(msg);
#else
	memcpy(rotor_angle, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ROTOR_ANGLE_LEN);
#endif
}
