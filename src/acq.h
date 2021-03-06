/*
 * Copyright (C) 2011-2014 Swift Navigation Inc.
 * Contact: Fergus Noble <fnoble@swift-nav.com>
 *
 * This source is subject to the license found in the file 'LICENSE' which must
 * be be distributed together with this source. All other rights reserved.
 *
 * THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
 * EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef SWIFTNAV_ACQ_H
#define SWIFTNAV_ACQ_H

#include <libswiftnav/common.h>

void acq_set_prn(u8 prn);

bool acq_load(u32 count);
void acq_service_load_done(void);

void acq_search(float cf_min, float cf_max, float cf_bin_width);
void acq_service_irq(void);
void acq_get_results(float* cp, float* cf, float* snr);
void acq_send_result(u8 prn, float snr, float cp, float cf);

#endif
