/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_nfcd_INfcManager_h
#define mozilla_nfcd_INfcManager_h

class INfcManager {
public:
  virtual ~INfcManager() {};

  virtual bool initialize() = 0;
  virtual void enableDiscovery() = 0;
  virtual void* queryInterface(const char* name) = 0;
};

#endif