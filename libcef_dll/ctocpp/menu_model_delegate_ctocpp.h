// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=4c41e357f90dc80d39d56b5e37fefdd2bcc99e92$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_DELEGATE_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_DELEGATE_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_menu_model_capi.h"
#include "include/capi/cef_menu_model_delegate_capi.h"
#include "include/cef_menu_model.h"
#include "include/cef_menu_model_delegate.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefMenuModelDelegateCToCpp
    : public CefCToCppRefCounted<CefMenuModelDelegateCToCpp,
                                 CefMenuModelDelegate,
                                 cef_menu_model_delegate_t> {
 public:
  CefMenuModelDelegateCToCpp();

  // CefMenuModelDelegate methods.
  void ExecuteCommand(CefRefPtr<CefMenuModel> menu_model,
                      int command_id,
                      cef_event_flags_t event_flags) override;
  void MouseOutsideMenu(CefRefPtr<CefMenuModel> menu_model,
                        const CefPoint& screen_point) override;
  void UnhandledOpenSubmenu(CefRefPtr<CefMenuModel> menu_model,
                            bool is_rtl) override;
  void UnhandledCloseSubmenu(CefRefPtr<CefMenuModel> menu_model,
                             bool is_rtl) override;
  void MenuWillShow(CefRefPtr<CefMenuModel> menu_model) override;
  void MenuClosed(CefRefPtr<CefMenuModel> menu_model) override;
  bool FormatLabel(CefRefPtr<CefMenuModel> menu_model,
                   CefString& label) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_MENU_MODEL_DELEGATE_CTOCPP_H_
