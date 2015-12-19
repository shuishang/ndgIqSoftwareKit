/*
 * Copyright (c) 2015, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __BLE_SERVICE_DIS_H__
#define __BLE_SERVICE_DIS_H__

#include "ble_protocol.h"

#include "zephyr/bluetooth/gatt.h"

#include "services/ble_service/ble_service_gap_api.h"
#include "services/ble_service/ble_service_gatt.h"
#include "ble_service_int.h"
#include "ble_service_core_int.h"
#include "services/ble_service/ble_service_gatts_api.h"

/* Forward declarations */
struct _ble_register_svc;

/* Example default values */
#define MANUFACTURER_ID    0x1122334455
#define ORG_UNIQUE_ID      0x667788

struct ble_dis_system_id {
	uint64_t manufact_id;
	uint32_t org_unique_id;
};

struct ble_dis_regulatory_data_list {
	uint8_t *  p_list;		/**< Pointer the byte array containing the encoded opaque structure based on IEEE 11073-20601 specification. */
	uint8_t    list_len;		/**< Length of the byte array. */
};

/**
 * Plug & Play info.
 */
struct ble_dis_pnp_id {
	uint16_t vendor_id;	   /**< Vendor ID. */
	uint16_t product_id;	   /**< Product ID. */
	uint16_t product_version;  /**< Product Version. */
	uint8_t vendor_id_source;  /**< Vendor ID Source: 1 BT SIG, 2: USB consortium */
};

/**
 * Register DIS service.
 *
 * Registers the DIS service. the on_dis_rd_xxx functions will be called on
 * reception of this message. If not defined by application the default one will
 * be used.
 *
 * @param p_service_conn client service connection (cfw service connection)
 * @param p_reg pointer to application response
 *
 * @return @ref OS_ERR_TYPE, in failure case msg needs to freed by callee
 */
int ble_init_service_dis(cfw_service_conn_t * p_service_conn,
			 struct _ble_register_svc *p_reg);

/** Read/Init callback functions for DIS.
 *
 * Those functions are called on init. if buf is NULL, They must
 * return the value max length.
 */

/**
 * DIS characteristic init (read) functions. They can be overwritten by the
 * application (default implementation will compiled in).
 */
int on_dis_rd_manufacturer(struct bt_conn *conn, const struct bt_gatt_attr *attr,
		       void *buf, uint16_t len, uint16_t offset);

int on_dis_rd_model(struct bt_conn *conn, const struct bt_gatt_attr *attr,
		void *buf, uint16_t len, uint16_t offset);

int on_dis_rd_serial(struct bt_conn *conn, const struct bt_gatt_attr *attr,
		 void *buf, uint16_t len, uint16_t offset);

int on_dis_rd_hw_rev(struct bt_conn *conn, const struct bt_gatt_attr *attr,
		 void *buf, uint16_t len, uint16_t offset);

int on_dis_rd_fw_rev(struct bt_conn *conn, const struct bt_gatt_attr *attr,
		 void *buf, uint16_t len, uint16_t offset);

int on_rd_sw_rev(struct bt_conn *conn, const struct bt_gatt_attr *attr,
		 void *buf, uint16_t len, uint16_t offset);

#ifdef BLE_DIS_SYSTEM_ID
struct ble_dis_system_id __attribute__((weak)) dis_system_id;
#endif

#endif