/** @file
 *  @brief Generic Attribute Profile handling.
 */

/*
 * Copyright (c) 2015 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __BT_GATT_H
#define __BT_GATT_H

#if defined(CONFIG_BLUETOOTH_CENTRAL) || defined(CONFIG_BLUETOOTH_PERIPHERAL)
#if !defined(CONFIG_SERVICES_BLE_CORE_IMPL)
#include <misc/util.h>
#else
#include "utils.h"
#endif
#include "zephyr/bluetooth/conn.h"
#include "zephyr/bluetooth/uuid.h"

/* GATT attribute permission bitfield values */

/** @def BT_GATT_PERM_READ
 *  @brief Attribute read permission.
 */
#define BT_GATT_PERM_READ			0x01
/** @def BT_GATT_PERM_WRITE
 *  @brief Attribute write permission.
 */
#define BT_GATT_PERM_WRITE			0x02
/** @def BT_GATT_PERM_READ_ENCRYPT
 *  @brief Attribute read permission with encryption.
 *
 *  If set, requires encryption for read access.
 */
#define BT_GATT_PERM_READ_ENCRYPT		0x04
/** @def BT_GATT_PERM_WRITE_ENCRYPT
 *  @brief Attribute write permission with encryption.
 *
 *  If set, requires encryption for write access.
 */
#define BT_GATT_PERM_WRITE_ENCRYPT		0x08
/** @def BT_GATT_PERM_READ_AUTHEN
 *  @brief Attribute read permission with authentication.
 *
 *  If set, requires encryption using authenticated link-key for read access.
 */
#define BT_GATT_PERM_READ_AUTHEN		0x10
/** @def BT_GATT_PERM_WRITE_AUTHEN
 *  @brief Attribute write permission with authentication.
 *
 *  If set, requires encryption using authenticated link-key for write access.
 */
#define BT_GATT_PERM_WRITE_AUTHEN		0x20
/** @def BT_GATT_PERM_AUTHOR
 *  @brief Attribute authorization permission.
 */
#define BT_GATT_PERM_AUTHOR			0x40

/** @def BT_GATT_PERM_MASK
 *  @brief Attribute permission mask for flags field.
 */
#define BT_GATT_PERM_MASK			0xff

/* GATT attribute flush flags */
/** @def BT_GATT_FLUSH_DISCARD
 *  @brief Attribute flush discard flag.
 */
#define BT_GATT_FLUSH_DISCARD			0x00
/** @def BT_GATT_FLUSH_DISCARD
 *  @brief Attribute flush syncronize flag.
 */
#define BT_GATT_FLUSH_SYNC			0x01

/** @def BT_GATT_INV_HANDLE
 *  @brief Invalid handle.
 *
 *  Invalid GATT handle. In the attribute table it tells to auto allocate the
 *  handle in the stack.
 */
#define BT_GATT_INV_HANDLE			0x0000

/** @def BT_GATT_PDU_MAX
 *  @brief maximum pdu size.
 */
#define BT_GATT_PDU_MAX				512

/** @brief GATT Attribute structure. */
struct bt_gatt_attr {
	/** Attribute UUID */
	const struct bt_uuid	*uuid;
	/** Attribute read callback */
	int			(*read)(struct bt_conn *conn,
					const struct bt_gatt_attr *attr,
					void *buf, uint16_t len,
					uint16_t offset);
	/** Attribute write callback */
	int			(*write)(struct bt_conn *conn,
					 const struct bt_gatt_attr *attr,
					 const void *buf, uint16_t len,
					 uint16_t offset);
	/** Attribute flush callback */
	int			(*flush)(struct bt_conn *conn,
					 const struct bt_gatt_attr *attr,
					 uint8_t flags);
	/** Attribute user data */
	void			*user_data;
	/** Attribute handle */
	uint16_t		handle;
	/** Attribute flags (permissions, etc) */
	uint16_t		flags;
};

/** @brief Service Attribute Value. */
struct bt_gatt_service {
	/** Service UUID. */
	const struct bt_uuid	*uuid;
	/** Service end handle. */
	uint16_t		end_handle;
};

/** @brief Include Attribute Value. */
struct bt_gatt_include {
	/** Service UUID. */
	const struct bt_uuid	*uuid;
	/** Service start handle. */
	uint16_t		start_handle;
	/** Service end handle. */
	uint16_t		end_handle;
};

/* Characteristic Properties Bitfield values */

/** @def BT_GATT_CHRC_BROADCAST
 *  @brief Characteristic broadcast property.
 *
 *  If set, permits broadcasts of the Characteristic Value using Server
 *  Characteristic Configuration Descriptor.
 */
#define BT_GATT_CHRC_BROADCAST			0x01
/** @def BT_GATT_CHRC_READ
 *  @brief Characteristic read property.
 *
 *  If set, permits reads of the Characteristic Value.
 */
#define BT_GATT_CHRC_READ			0x02
/** @def BT_GATT_CHRC_WRITE_WITHOUT_RESP
 *  @brief Characteristic write without response property.
 *
 *  If set, permits write of the Characteristic Value without response.
 */
#define BT_GATT_CHRC_WRITE_WITHOUT_RESP		0x04
/** @def BT_GATT_CHRC_WRITE
 *  @brief Characteristic write with response property.
 *
 *  If set, permits write of the Characteristic Value with response.
 */
#define BT_GATT_CHRC_WRITE			0x08
/** @def BT_GATT_CHRC_NOTIFY
 *  @brief Characteristic notify property.
 *
 *  If set, permits notifications of a Characteristic Value without
 *  acknowledgment.
 */
#define BT_GATT_CHRC_NOTIFY			0x10
/** @def BT_GATT_CHRC_INDICATE
 *  @brief Characteristic indicate property.
 *
 * If set, permits indications of a Characteristic Value with acknowledgment.
 */
#define BT_GATT_CHRC_INDICATE			0x20
/** @def BT_GATT_CHRC_AUTH
 *  @brief Characteristic Authenticated Signed Writes property.
 *
 *  If set, permits signed writes to the Characteristic Value.
 */
#define BT_GATT_CHRC_AUTH			0x40
/** @def BT_GATT_CHRC_EXT_PROP
 *  @brief Characteristic Extended Properties property.
 *
 * If set, additional characteristic properties are defined in the
 * Characteristic Extended Properties Descriptor.
 */
#define BT_GATT_CHRC_EXT_PROP			0x80

/** @brief Characteristic Attribute Value. */
struct bt_gatt_chrc {
	/** Characteristic UUID. */
	const struct bt_uuid	*uuid;
	/** Characteristic properties. */
	uint8_t			properties;
};

/* Characteristic Extended Properties Bitfield values */
#define BT_GATT_CEP_RELIABLE_WRITE		0x0001
#define BT_GATT_CEP_WRITABLE_AUX		0x0002

/** @brief Characteristic Extended Properties Attribute Value. */
struct bt_gatt_cep {
	/** Characteristic Extended properties */
	uint16_t		properties;
};

/** @brief Characteristic User Description Attribute Value. */
struct bt_gatt_cud {
	/** Characteristic User Description string. */
	char			*string;
};

/* Client Characteristic Configuration Values */

/** @def BT_GATT_CCC_NOTIFY
 *  @brief Client Characteristic Configuration Notification.
 *
 *  If set, changes to Characteristic Value shall be notified.
 */
#define BT_GATT_CCC_NOTIFY			0x0001
/** @def BT_GATT_CCC_INDICATE
 *  @brief Client Characteristic Configuration Indication.
 *
 *  If set, changes to Characteristic Value shall be indicated.
 */
#define BT_GATT_CCC_INDICATE			0x0002

/* Client Characteristic Configuration Attribute Value */
struct bt_gatt_ccc {
	/** Client Characteristic Configuration flags */
	uint16_t		flags;
};

/** @def BT_GATT_NAME_SPACE_SIG
 *  @brief SIG Name space
 */
#define BT_GATT_NAME_SPACE_SIG			1

/** @brief GATT characteristic presentation format description.
 */
struct bt_gatt_pf {
	/** see Units from Bluetooth Assigned Numbers,
	 *  https://developer.bluetooth.org/gatt/units/Pages/default.aspx */
	uint16_t unit;
	/** Description UUID as defined by SIG */
	uint16_t descr;
	/** Value format as defined by SIG */
	uint8_t format;
	/** Exponent definition */
	int8_t exp;
	/** name space of the presentation format */
	uint8_t name_spc;
};

/* Server API */

/** @brief Register attribute database.
 *
 *  Register GATT attribute database table. Applications can make use of
 *  macros such as BT_GATT_PRIMARY_SERVICE, BT_GATT_CHARACTERISTIC,
 *  BT_GATT_DESCRIPTOR, etc.
 *
 *  @param attrs Database table containing the available attributes.
 *  @param count Size of the database table.
 *
 * @return 0 in case of success or negative value in case of error.
 */
int bt_gatt_register(struct bt_gatt_attr *attrs, size_t count);

enum {
	BT_GATT_ITER_STOP = 0,
	BT_GATT_ITER_CONTINUE,
};

/** @brief Attribute iterator callback.
 *
 *  @param attr Attribute found.
 *  @param user_data Data given.
 *
 *  @return BT_GATT_ITER_CONTINUE if should continue to the next attribute
 *  or BT_GATT_ITER_STOP to stop.
 */
typedef uint8_t (*bt_gatt_attr_func_t)(const struct bt_gatt_attr *attr,
				       void *user_data);

/** @brief Attribute iterator.
 *
 *  Iterate attributes in the given range.
 *
 *  @param start_handle Start handle.
 *  @param end_handle End handle.
 *  @param func Callback function.
 *  @param user_data Data to pass to the callback.
 */
void bt_gatt_foreach_attr(uint16_t start_handle, uint16_t end_handle,
			  bt_gatt_attr_func_t func, void *user_data);

/** @brief Generic Read Attribute value helper.
 *
 *  Read attribute value storing the result into buffer.
 *
 *  @param conn Connection object.
 *  @param attr Attribute to read.
 *  @param buf Buffer to store the value.
 *  @param buf_len Buffer length.
 *  @param offset Start offset.
 *  @param value Attribute value.
 *  @param value_len Length of the attribute value.
 *
 *  @return int number of bytes read in case of success or negative values in
 *  case of error.
 */
int bt_gatt_attr_read(struct bt_conn *conn, const struct bt_gatt_attr *attr,
		      void *buf, uint16_t buf_len, uint16_t offset,
		      const void *value, uint16_t value_len);

/** @brief Read Service Attribute helper.
 *
 *  Read service attribute value storing the result into buffer after
 *  enconding it.
 *  NOTE: Only use this with attributes which user_data is a bt_uuid.
 *
 *  @param conn Connection object.
 *  @param attr Attribute to read.
 *  @param buf Buffer to store the value read.
 *  @param len Buffer length.
 *  @param offset Start offset.
 *
 *  @return int number of bytes read in case of success or negative values in
 *  case of error.
 */
int bt_gatt_attr_read_service(struct bt_conn *conn,
			      const struct bt_gatt_attr *attr,
			      void *buf, uint16_t len, uint16_t offset);

/** @def BT_GATT_SERVICE
 *  @brief Generic Service Declaration Macro.
 *
 *  Helper macro to declare a service attribute.
 *
 *  @param _uuid Service attribute type.
 *  @param _data Service attribute value.
 */
#define BT_GATT_SERVICE(_uuid, _service)				\
{									\
	.uuid = _uuid,							\
	.flags = BT_GATT_PERM_READ,					\
	.read = bt_gatt_attr_read_service,				\
	/* uuid of service, most likely const */			\
	.user_data = (void *)_service,					\
}

/** @def BT_GATT_PRIMARY_SERVICE
 *  @brief Primary Service Declaration Macro.
 *
 *  Helper macro to declare a primary service attribute.
 *
 *  @param _service Service attribute value.
 */
#define BT_GATT_PRIMARY_SERVICE(_service)				\
{									\
	.uuid = ((const struct bt_uuid *)(&(const struct bt_uuid16) {	\
				.type = BT_UUID_16,			\
				.u16 = BT_UUID_GATT_PRIMARY })),	\
	.flags = BT_GATT_PERM_READ,					\
	.read = bt_gatt_attr_read_service,				\
	/* uuid of service, most likely const */			\
	.user_data = (void *)_service,					\
}

/** @def BT_GATT_SECONDARY_SERVICE
 *  @brief Secondary Service Declaration Macro.
 *
 *  Helper macro to declare a secondary service attribute.
 *
 *  @param _service Service attribute value.
 */
#define BT_GATT_SECONDARY_SERVICE(_service)				\
{									\
	.uuid = ((const struct bt_uuid *)(&(const struct bt_uuid16) {	\
				.type = BT_UUID_16,			\
				.u16 = BT_UUID_GATT_SECONDARY })),	\
	.flags = BT_GATT_PERM_READ,					\
	.read = bt_gatt_attr_read_service,				\
	/* uuid of service, most likely const */			\
	.user_data = (void *)_service,					\
}

/** @brief Read Include Attribute helper.
 *
 *  Read include service attribute value storing the result into buffer after
 *  enconding it.
 *  NOTE: Only use this with attributes which user_data is a bt_gatt_include.
 *
 *  @param conn Connection object.
 *  @param attr Attribute to read.
 *  @param buf Buffer to store the value read.
 *  @param len Buffer length.
 *  @param offset Start offset.
 *
 *  @return int number of bytes read in case of success or negative values in
 *  case of error.
 */
int bt_gatt_attr_read_included(struct bt_conn *conn,
			       const struct bt_gatt_attr *attr,
			       void *buf, uint16_t len, uint16_t offset);

/** @def BT_GATT_INCLUDE_SERVICE
 *  @brief Include Service Declaration Macro.
 *
 *  Helper macro to declare a include service attribute.
 *
 *  @param _service Service attribute value.
 */
#define BT_GATT_INCLUDE_SERVICE(_service)				\
{									\
	.uuid = ((const struct bt_uuid *)(&(const struct bt_uuid16) {	\
				.type = BT_UUID_16,			\
				.u16 = BT_UUID_GATT_INCLUDE })),	\
	.flags = BT_GATT_PERM_READ,					\
	.read = bt_gatt_attr_read_included,				\
	/* read only data, most likely const */				\
	.user_data = (void *)_service,					\
}

/** @brief Read Characteristic Attribute helper.
 *
 *  Read characteristic attribute value storing the result into buffer after
 *  enconding it.
 *  NOTE: Only use this with attributes which user_data is a bt_gatt_chrc.
 *
 *  @param conn Connection object.
 *  @param attr Attribute to read.
 *  @param buf Buffer to store the value read.
 *  @param len Buffer length.
 *  @param offset Start offset.
 *
 *  @return number of bytes read in case of success or negative values in
 *  case of error.
 */
int bt_gatt_attr_read_chrc(struct bt_conn *conn,
			   const struct bt_gatt_attr *attr, void *buf,
			   uint16_t len, uint16_t offset);

/** @def BT_GATT_CHARACTERISTIC
 *  @brief Characteristic Declaration Macro.
 *
 *  Helper macro to declare a characteristic attribute.
 *
 *  @param _uuid Characteristic attribute uuid.
 *  @param _props Characteristic attribute properties.
 */
#define BT_GATT_CHARACTERISTIC(_uuid, _props)				\
{									\
	.uuid = ((const struct bt_uuid *)(&(const struct bt_uuid16) {	\
				.type = BT_UUID_16,			\
				.u16 = BT_UUID_GATT_CHRC })),		\
	.flags = BT_GATT_PERM_READ,					\
	.read = bt_gatt_attr_read_chrc,					\
	.user_data = (&(struct bt_gatt_chrc) {				\
			/* To save memory _uuid may use bt_uuid16 */	\
			.uuid = (const struct bt_uuid *)_uuid,		\
			.properties = _props, }),			\
}

/** @brief GATT CCC configuration entry. */
struct bt_gatt_ccc_cfg {
	/* Peer connection */
	struct bt_conn		*conn;
	/** Config peer value. */
	uint16_t		value;
};

/* Internal representation of CCC value */
struct _bt_gatt_ccc {
	struct bt_gatt_ccc_cfg	*cfg;
	size_t			cfg_len;
	uint16_t		value;
	void			(*cfg_changed)(uint16_t value);
};

/** @brief Read Client Characteristic Configuration Attribute helper.
 *
 *  Read CCC attribute value storing the result into buffer after
 *  enconding it.
 *  NOTE: Only use this with attributes which user_data is a _bt_gatt_ccc.
 *
 *  @param conn Connection object.
 *  @param attr Attribute to read.
 *  @param buf Buffer to store the value read.
 *  @param len Buffer length.
 *  @param offset Start offset.
 *
 *  @return number of bytes read in case of success or negative values in
 *  case of error.
 */
int bt_gatt_attr_read_ccc(struct bt_conn *conn,
			  const struct bt_gatt_attr *attr, void *buf,
			  uint16_t len, uint16_t offset);

/** @brief Write Client Characteristic Configuration Attribute helper.
 *
 *  Write value in the buffer into CCC attribute.
 *  NOTE: Only use this with attributes which user_data is a _bt_gatt_ccc.
 *
 *  @param conn Connection object.
 *  @param attr Attribute to read.
 *  @param buf Buffer to store the value read.
 *  @param len Buffer length.
 *  @param offset Start offset.
 *
 *  @return number of bytes written in case of success or negative values in
 *  case of error.
 */
int bt_gatt_attr_write_ccc(struct bt_conn *conn,
			   const struct bt_gatt_attr *attr, const void *buf,
			   uint16_t len, uint16_t offset);

/** @def BT_GATT_CCC
 *  @brief Client Characteristic Configuration Declaration Macro.
 *
 *  Helper macro to declare a CCC attribute.
 *
 *  @param _value_handle Characteristic attribute value handle.
 *  @param _cfg Initial configuration.
 *  @param _cfg_changed Configuration changed callback.
 */
#define BT_GATT_CCC(_cfg, _cfg_changed)					\
{									\
	.uuid = ((const struct bt_uuid *)(&(const struct bt_uuid16) {	\
				.type = BT_UUID_16,			\
				.u16 = BT_UUID_GATT_CCC })),		\
	.flags = BT_GATT_PERM_READ | BT_GATT_PERM_WRITE,		\
	.read = bt_gatt_attr_read_ccc,					\
	.write = bt_gatt_attr_write_ccc,				\
	.user_data = (&(struct _bt_gatt_ccc) { .cfg = _cfg,		\
					       .cfg_len = ARRAY_SIZE(_cfg), \
					       .cfg_changed = _cfg_changed, }),\
}

/** @brief Read Characteristic Extended Properties Attribute helper
 *
 *  Read CEP attribute value storing the result into buffer after
 *  enconding it.
 *  NOTE: Only use this with attributes which user_data is a bt_gatt_cep.
 *
 *  @param conn Connection object
 *  @param attr Attribute to read
 *  @param buf Buffer to store the value read
 *  @param len Buffer length
 *  @param offset Start offset
 *
 *  @return number of bytes read in case of success or negative values in
 *  case of error.
 */
int bt_gatt_attr_read_cep(struct bt_conn *conn,
			  const struct bt_gatt_attr *attr, void *buf,
			  uint16_t len, uint16_t offset);

/** @def BT_GATT_CEP
 *  @brief Characteristic Extended Properties Declaration Macro.
 *
 *  Helper macro to declare a CEP attribute.
 *
 *  @param _value Descriptor attribute value.
 */
#define BT_GATT_CEP(_value)						\
{									\
	.uuid = ((const struct bt_uuid *)(&(const struct bt_uuid16) {	\
				.type = BT_UUID_16,			\
				.u16 = BT_UUID_GATT_CEP })),		\
	.flags = BT_GATT_PERM_READ,					\
	.read = bt_gatt_attr_read_cep,					\
	/* _value is most likely const as not writable */		\
	.user_data = (void *)_value,					\
}

/** @brief Read Characteristic User Description Descriptor Attribute helper
 *
 *  Read CUD attribute value storing the result into buffer after
 *  enconding it.
 *  NOTE: Only use this with attributes which user_data is a bt_gatt_cud.
 *
 *  @param conn Connection object
 *  @param attr Attribute to read
 *  @param buf Buffer to store the value read
 *  @param len Buffer length
 *  @param offset Start offset
 *
 *  @return number of bytes read in case of success or negative values in
 *  case of error.
 */
int bt_gatt_attr_read_cud(struct bt_conn *conn,
			  const struct bt_gatt_attr *attr, void *buf,
			  uint16_t len, uint16_t offset);

/** @def BT_GATT_CUD
 *  @brief Characteristic User Format Descriptor Declaration Macro.
 *
 *  Helper macro to declare a CUD attribute.
 *
 *  @param _handle Descriptor attribute handle.
 *  @param _value User description string.
 */
#define BT_GATT_CUD(_value, _flags)					\
{									\
	.uuid = ((const struct bt_uuid *)(&(const struct bt_uuid16) {	\
				.type = BT_UUID_16,			\
				.u16 = BT_UUID_GATT_CUD })),		\
	.flags = _flags,						\
	.read = bt_gatt_attr_read_cud,					\
	/* The user present string is most likely const */		\
	.user_data = (void *)_value,					\
}

/** @brief Read Characteristic Presentation format Descriptor Attribute helper
 *
 *  Read PF attribute value storing the result into buffer after
 *  enconding it.
 *  NOTE: Only use this with attributes which user_data is a bt_gatt_pf.
 *
 *  @param conn Connection object
 *  @param attr Attribute to read
 *  @param buf Buffer to store the value read
 *  @param len Buffer length
 *  @param offset Start offset
 *
 *  @return number of bytes read in case of success or negative values in
 *  case of error.
 */
int bt_gatt_attr_read_pf(struct bt_conn *conn,
			 const struct bt_gatt_attr *attr, void *buf,
			 uint16_t len, uint16_t offset);

/** @def BT_GATT_PF
 *  @brief Characteristic Presentation Format Descriptor Declaration Macro.
 *
 *  Helper macro to declare a PF attribute.
 *
 *  @param _handle Descriptor attribute handle.
 *  @param _value Descriptor attribute value.
 */
#define BT_GATT_PF(_value)						\
{									\
	.uuid = ((const struct bt_uuid *)(&(const struct bt_uuid16) {	\
				.type = BT_UUID_16,			\
				.u16 = BT_UUID_GATT_PF })),		\
	.flags = BT_GATT_PERM_READ,					\
	.read = bt_gatt_attr_read_pf,					\
	/* _value is most likely const */				\
	.user_data = (void *)_value,					\
}

/** @def BT_GATT_DESCRIPTOR
 *  @brief Descriptor Declaration Macro.
 *
 *  Helper macro to declare a descriptor attribute.
 *
 *  @param _value Descriptor attribute value.
 *  @param _perm Descriptor attribute access permissions.
 *  @param _read Descriptor attribute read callback.
 *  @param _write Descriptor attribute write callback.
 *  @param _value Descriptor attribute value.
 */
#define BT_GATT_DESCRIPTOR(_uuid, _perm, _read, _write, _value)		\
{	/* _uuid maybe of bt_uuid16 type to save memory */		\
	.uuid = (const struct bt_uuid *)(_uuid),			\
	.flags = _perm,							\
	.read = _read,							\
	.write = _write,						\
	.user_data = _value,						\
}

/** @def BT_GATT_LONG_DESCRIPTOR
 *  @brief Descriptor Declaration Macro.
 *
 *  Helper macro to declare a descriptor attribute.
 *
 *  @param _value Descriptor attribute value.
 *  @param _perm Descriptor attribute access permissions.
 *  @param _read Descriptor attribute read callback.
 *  @param _write Descriptor attribute write callback.
 *  @param _flush Descriptor attribute flush callback.
 *  @param _value Descriptor attribute value.
 */
#define BT_GATT_LONG_DESCRIPTOR(_uuid, _perm, _read, _write, _flush, _value) \
{									\
	.uuid = (const struct bt_uuid *)_uuid,				\
	.flags = _perm,							\
	.read = _read,							\
	.write = _write,						\
	.flush = _flush,						\
	.user_data = _value,						\
}

/** @brief Notify sent callback
 *
 *  This means that the complete attribute has been sent. This does not mean it
 *  has been received however (use indicate for this).
 *  This shall be used to flow control the callee to avoid flooding the ble
 *  controller.
 *
 *  @param conn Connection object.
 *  @param handle Handle of the attribute sent.
 *  @param err 0 if none
 */
typedef void (*bt_gatt_notify_func_t)(struct bt_conn *conn, uint16_t handle,
				      uint8_t err);

/** @brief Notify attribute value change.
 *
 *  Send notification of attribute value change, if connection is NULL notify
 *  all peer that have notification enabled via CCC otherwise do a direct
 *  notification only the given connection.
 *
 *  @param conn Connection object.
 *  @param handle Attribute handle.
 *  @param value Attribute value.
 *  @param len Attribute value length.
 *  @param cb callback function called when send is complete (or NULL)
 */
int bt_gatt_notify(struct bt_conn *conn, uint16_t handle, const void *data,
		   uint16_t len, bt_gatt_notify_func_t cb);

#if defined(CONFIG_BLUETOOTH_GATT_CLIENT)
/* Client API */

/** @brief Response callback function
 *
 *  @param conn Connection object.
 *  @param err Error code.
 */
typedef void (*bt_gatt_rsp_func_t)(struct bt_conn *conn, uint8_t err);

/** @brief Exchange MTU
 *
 * This client procedure can be used to set the MTU to the maximum possible
 * size the buffers can hold.
 * NOTE: Shall only be used once per connection.
 *
 *  @param conn Connection object.
 */
int bt_gatt_exchange_mtu(struct bt_conn *conn, bt_gatt_rsp_func_t func);

enum {
	BT_GATT_DISCOVER_PRIMARY,
	BT_GATT_DISCOVER_SECONDARY,
	BT_GATT_DISCOVER_INCLUDE,
	BT_GATT_DISCOVER_CHARACTERISTIC,
	BT_GATT_DISCOVER_DESCRIPTOR,
};

/** @brief GATT Discover Primary parameters */
struct bt_gatt_discover_params {
	/** Discover UUID type */
	struct bt_uuid *uuid;
	/** Discover attribute callback */
	bt_gatt_attr_func_t func;
	/** Discover destroy callback */
	void (*destroy)(void *user_data);
	/** Discover start handle */
	uint16_t start_handle;
	/** Discover end handle */
	uint16_t end_handle;
	/** Discover type */
	uint8_t type;
};

/** @brief Discover Primary Service by Service UUID
 *
 *  This procedure is used by a client to discover a specific primary service on
 *  a server when only the Service UUID is known.
 *
 *  For each attribute found the callback is called which can then decide
 *  whether to continue discovering or stop.
 *
 *  @param conn Connection object.
 *  @param params Discover parameters.
 *
 *  @return 0 in case of success or negative value in case of error.
 */
int bt_gatt_discover(struct bt_conn *conn,
		     struct bt_gatt_discover_params *params);

/** @brief Read callback function
 *
 *  @param conn Connection object.
 *  @param err Error code.
 *  @param data Attribute value data.
 *  @param length Attribute value length.
 */
typedef void (*bt_gatt_read_func_t)(struct bt_conn *conn, int err,
				    const void *data, uint16_t length);

/** @brief Read Attribute Value by handle
 *
 * This procedure read the attribute value and return it to the callback.
 *
 * @param conn Connection object.
 * @param handle Attribute handle.
 * @param offset Attribute data offset.
 * @param func Callback function.
 *
 * @return 0 in case of success or negative value in case of error.
 */
int bt_gatt_read(struct bt_conn *conn, uint16_t handle, uint16_t offset,
		 bt_gatt_read_func_t func);

/** @brief Write Attribute Value by handle
 *
 * This procedure write the attribute value and return the result in the
 * callback.
 *
 * @param conn Connection object.
 * @param handle Attribute handle.
 * @param offset Attribute data offset.
 * @param data Data to be written.
 * @param length Data length.
 * @param func Callback function.
 *
 * @return 0 in case of success or negative value in case of error.
 */
int bt_gatt_write(struct bt_conn *conn, uint16_t handle, uint16_t offset,
		  const void *data, uint16_t length, bt_gatt_rsp_func_t func);

/** @brief Write Attribute Value by handle without reponse
 *
 * This procedure write the attribute value without requiring an
 * acknowledgement that the write was successfully performed
 *
 * @param conn Connection object.
 * @param handle Attribute handle.
 * @param data Data to be written.
 * @param length Data length.
 * @param sign Whether to sign data
 *
 * @return 0 in case of success or negative value in case of error.
 */
int bt_gatt_write_without_response(struct bt_conn *conn, uint16_t handle,
				   const void *data, uint16_t length,
				   bool sign);

/** @brief GATT Subscribe parameters */
struct bt_gatt_subscribe_params {
	bt_addr_le_t _peer;
	/** Subscribe value callback */
	bt_gatt_read_func_t func;
	/** Subscribe destroy callback */
	void (*destroy)(void *user_data);
	/** Subscribe value handle */
	uint16_t value_handle;
	/** Subscribe value */
	uint16_t value;
	struct bt_gatt_subscribe_params *_next;
};

/** @brief Subscribe Attribute Value Notification
 *
 * This procedure subscribe to value notification using the Client
 * Characteristic Configuration handle.
 *
 * @param conn Connection object.
 * @param handle CCC handle.
 * @param params Subscribe parameters.
 *
 * @return 0 in case of success or negative value in case of error.
 */
int bt_gatt_subscribe(struct bt_conn *conn, uint16_t handle,
		      struct bt_gatt_subscribe_params *params);

/** @brief Unsubscribe Attribute Value Notification
 *
 * This procedure unsubscribe to value notification using the Client
 * Characteristic Configuration handle.
 *
 * @param conn Connection object.
 * @param handle CCC handle.
 * @param params Subscribe parameters.
 *
 * @return 0 in case of success or negative value in case of error.
 */
int bt_gatt_unsubscribe(struct bt_conn *conn, uint16_t handle,
			struct bt_gatt_subscribe_params *params);

/** @brief Cancel GATT pending request
 *
 *  @param conn Connection object.
 */
void bt_gatt_cancel(struct bt_conn *conn);

/** @brief Read Multiple Attribute Values by set of handles
 *
 *  Routine to be used to retrieve set of attributes values determined by set of
 *  handles in one call.
 *
 *  @param conn Connection object.
 *  @param handles Set of valid handles to attributes.
 *  @param count Number of handles to be read.
 *  @param func User callback routine to get retrieved values.
 *
 *  @return 0 in case of success or negative value in case of error.
 */
int bt_gatt_read_multiple(struct bt_conn *conn, const uint16_t *handles,
			  size_t count, bt_gatt_read_func_t func);

#endif /* CONFIG_BLUETOOTH_GATT_CLIENT */
#endif /* CONFIG_BLUETOOTH_CENTRAL || CONFIG_BLUETOOTH_PERIPHERAL */
#endif /* __BT_GATT_H */