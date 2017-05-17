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
// $hash=da5f37cac68a3759f2dc14056f25f33fb2957315$
//

#include "libcef_dll/cpptoc/views/textfield_cpptoc.h"
#include "libcef_dll/cpptoc/views/view_cpptoc.h"
#include "libcef_dll/ctocpp/views/textfield_delegate_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

bool CefTextfieldDelegateCToCpp::OnKeyEvent(CefRefPtr<CefTextfield> textfield,
                                            const CefKeyEvent& event) {
  cef_textfield_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_key_event))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: textfield; type: refptr_diff
  DCHECK(textfield.get());
  if (!textfield.get())
    return false;

  // Execute
  int _retval = _struct->on_key_event(
      _struct, CefTextfieldCppToC::Wrap(textfield), &event);

  // Return type: bool
  return _retval ? true : false;
}

void CefTextfieldDelegateCToCpp::OnAfterUserAction(
    CefRefPtr<CefTextfield> textfield) {
  cef_textfield_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_after_user_action))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: textfield; type: refptr_diff
  DCHECK(textfield.get());
  if (!textfield.get())
    return;

  // Execute
  _struct->on_after_user_action(_struct, CefTextfieldCppToC::Wrap(textfield));
}

CefSize CefTextfieldDelegateCToCpp::GetPreferredSize(CefRefPtr<CefView> view) {
  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_preferred_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return CefSize();

  // Execute
  cef_size_t _retval =
      _struct->get_preferred_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

CefSize CefTextfieldDelegateCToCpp::GetMinimumSize(CefRefPtr<CefView> view) {
  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_minimum_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return CefSize();

  // Execute
  cef_size_t _retval =
      _struct->get_minimum_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

CefSize CefTextfieldDelegateCToCpp::GetMaximumSize(CefRefPtr<CefView> view) {
  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_maximum_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return CefSize();

  // Execute
  cef_size_t _retval =
      _struct->get_maximum_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

int CefTextfieldDelegateCToCpp::GetHeightForWidth(CefRefPtr<CefView> view,
                                                  int width) {
  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_height_for_width))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return 0;

  // Execute
  int _retval =
      _struct->get_height_for_width(_struct, CefViewCppToC::Wrap(view), width);

  // Return type: simple
  return _retval;
}

void CefTextfieldDelegateCToCpp::OnParentViewChanged(
    CefRefPtr<CefView> view,
    bool added,
    CefRefPtr<CefView> parent) {
  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_parent_view_changed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return;
  // Verify param: parent; type: refptr_diff
  DCHECK(parent.get());
  if (!parent.get())
    return;

  // Execute
  _struct->on_parent_view_changed(_struct, CefViewCppToC::Wrap(view), added,
                                  CefViewCppToC::Wrap(parent));
}

void CefTextfieldDelegateCToCpp::OnChildViewChanged(CefRefPtr<CefView> view,
                                                    bool added,
                                                    CefRefPtr<CefView> child) {
  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_child_view_changed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return;
  // Verify param: child; type: refptr_diff
  DCHECK(child.get());
  if (!child.get())
    return;

  // Execute
  _struct->on_child_view_changed(_struct, CefViewCppToC::Wrap(view), added,
                                 CefViewCppToC::Wrap(child));
}

void CefTextfieldDelegateCToCpp::OnFocus(CefRefPtr<CefView> view) {
  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_focus))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return;

  // Execute
  _struct->on_focus(_struct, CefViewCppToC::Wrap(view));
}

void CefTextfieldDelegateCToCpp::OnBlur(CefRefPtr<CefView> view) {
  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_blur))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return;

  // Execute
  _struct->on_blur(_struct, CefViewCppToC::Wrap(view));
}

// CONSTRUCTOR - Do not edit by hand.

CefTextfieldDelegateCToCpp::CefTextfieldDelegateCToCpp() {}

template <>
cef_textfield_delegate_t* CefCToCppRefCounted<
    CefTextfieldDelegateCToCpp,
    CefTextfieldDelegate,
    cef_textfield_delegate_t>::UnwrapDerived(CefWrapperType type,
                                             CefTextfieldDelegate* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefTextfieldDelegateCToCpp,
                                         CefTextfieldDelegate,
                                         cef_textfield_delegate_t>::DebugObjCt =
    0;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefTextfieldDelegateCToCpp,
                                   CefTextfieldDelegate,
                                   cef_textfield_delegate_t>::kWrapperType =
    WT_TEXTFIELD_DELEGATE;
