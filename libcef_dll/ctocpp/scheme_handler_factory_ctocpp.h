// Copyright (c) 2009 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// -------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef _SCHEMEHANDLERFACTORY_CTOCPP_H
#define _SCHEMEHANDLERFACTORY_CTOCPP_H

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else // BUILDING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefSchemeHandlerFactoryCToCpp
    : public CefCToCpp<CefSchemeHandlerFactoryCToCpp, CefSchemeHandlerFactory,
        cef_scheme_handler_factory_t>
{
public:
  CefSchemeHandlerFactoryCToCpp(cef_scheme_handler_factory_t* str)
      : CefCToCpp<CefSchemeHandlerFactoryCToCpp, CefSchemeHandlerFactory,
          cef_scheme_handler_factory_t>(str) {}
  virtual ~CefSchemeHandlerFactoryCToCpp() {}

  // CefSchemeHandlerFactory methods
  virtual CefRefPtr<CefSchemeHandler> Create();
};

#endif // BUILDING_CEF_SHARED
#endif // _SCHEMEHANDLERFACTORY_CTOCPP_H

