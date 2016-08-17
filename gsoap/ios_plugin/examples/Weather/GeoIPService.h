/* GeoIPService.h
   Generated by wsdl2h 2.8.33 from http://www.webservicex.net/globalweather.asmx?WSDL and typemap.dat
   2016-08-17 14:14:23 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/** @page page_notes Notes

@note HINTS:
 - Run soapcpp2 on GeoIPService.h to generate the SOAP/XML processing logic.
   Use soapcpp2 -I to specify paths for #import
   To build with STL, 'stl.h' is imported from 'import' dir in package.
   Use soapcpp2 -j to generate improved proxy and server classes.
   Use soapcpp2 -r to generate a report.
 - Use wsdl2h -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Run Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h -R to generate REST operations.
 - Use wsdl2h -nname to use name as the base namespace prefix instead of 'ns'.
 - Use wsdl2h -Nname for service prefix and produce multiple service bindings
 - Use wsdl2h -d to enable DOM support for xsd:anyType.
 - Use wsdl2h -g to auto-generate readers and writers for root elements.
 - Use wsdl2h -b to auto-generate bi-directional operations (duplex ops).
 - Use wsdl2h -U to map XML names to C++ Unicode identifiers instead of _xNNNN.
 - Use wsdl2h -u to disable the generation of unions.
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

@warning
   DO NOT INCLUDE THIS ANNOTATED FILE DIRECTLY IN YOUR PROJECT SOURCE CODE.
   USE THE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT'S SOURCE CODE:
   THE soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

@copyright LICENSE:
@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The wsdl2h tool and its generated software are released under the GPL.
This software is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt c++,w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   http://www.webserviceX.NET                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * $CONTAINER                                                                 *
 *   std::vector                                                              *
 *                                                                            *
\******************************************************************************/

template <class T> class std::vector;

/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/

#import "stl.h"	// enable STL containers when used (option -s removes STL dependency)

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "http://www.webserviceX.NET"

*/

#define SOAP_NAMESPACE_OF_ns1	"http://www.webserviceX.NET"
//gsoap ns1   schema namespace:	http://www.webserviceX.NET
//gsoap ns1   schema elementForm:	qualified
//gsoap ns1   schema attributeForm:	unqualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/


//  Forward declaration of class _ns1__GetWeather.
class _ns1__GetWeather;

//  Forward declaration of class _ns1__GetWeatherResponse.
class _ns1__GetWeatherResponse;

//  Forward declaration of class _ns1__GetCitiesByCountry.
class _ns1__GetCitiesByCountry;

//  Forward declaration of class _ns1__GetCitiesByCountryResponse.
class _ns1__GetCitiesByCountryResponse;


/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://www.webserviceX.NET                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://www.webserviceX.NET                                               *
 *                                                                            *
\******************************************************************************/

/// @brief Top-level root element "http://www.webserviceX.NET":GetWeather
/// @brief "http://www.webserviceX.NET":GetWeather is a complexType.
///
/// class _ns1__GetWeather operations:
/// - _ns1__GetWeather* soap_new__ns1__GetWeather(soap*) allocate
/// - _ns1__GetWeather* soap_new__ns1__GetWeather(soap*, int num) allocate array
/// - _ns1__GetWeather* soap_new_req__ns1__GetWeather(soap*, ...) allocate, set required members
/// - _ns1__GetWeather* soap_new_set__ns1__GetWeather(soap*, ...) allocate, set all public members
/// - _ns1__GetWeather::soap_default(soap*) reset members to default
/// - int soap_read__ns1__GetWeather(soap*, _ns1__GetWeather*) deserialize from a stream
/// - int soap_write__ns1__GetWeather(soap*, _ns1__GetWeather*) serialize to a stream
/// - _ns1__GetWeather* _ns1__GetWeather::soap_dup(soap*) returns deep copy of _ns1__GetWeather, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__GetWeather::soap_del() deep deletes _ns1__GetWeather data members, use only after _ns1__GetWeather::soap_dup(NULL) (use soapcpp2 -Ed)
class _ns1__GetWeather
{ public:
/// Element "CityName" of XSD type xs:string.
    std::string*                         CityName                       0;	///< Optional element.
/// Element "CountryName" of XSD type xs:string.
    std::string*                         CountryName                    0;	///< Optional element.
/// A handle to the soap struct context that manages this instance when instantiated by a context or NULL otherwise (automatically set).
    struct soap                         *soap                          ;
};

/// @brief Top-level root element "http://www.webserviceX.NET":GetWeatherResponse
/// @brief "http://www.webserviceX.NET":GetWeatherResponse is a complexType.
///
/// class _ns1__GetWeatherResponse operations:
/// - _ns1__GetWeatherResponse* soap_new__ns1__GetWeatherResponse(soap*) allocate
/// - _ns1__GetWeatherResponse* soap_new__ns1__GetWeatherResponse(soap*, int num) allocate array
/// - _ns1__GetWeatherResponse* soap_new_req__ns1__GetWeatherResponse(soap*, ...) allocate, set required members
/// - _ns1__GetWeatherResponse* soap_new_set__ns1__GetWeatherResponse(soap*, ...) allocate, set all public members
/// - _ns1__GetWeatherResponse::soap_default(soap*) reset members to default
/// - int soap_read__ns1__GetWeatherResponse(soap*, _ns1__GetWeatherResponse*) deserialize from a stream
/// - int soap_write__ns1__GetWeatherResponse(soap*, _ns1__GetWeatherResponse*) serialize to a stream
/// - _ns1__GetWeatherResponse* _ns1__GetWeatherResponse::soap_dup(soap*) returns deep copy of _ns1__GetWeatherResponse, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__GetWeatherResponse::soap_del() deep deletes _ns1__GetWeatherResponse data members, use only after _ns1__GetWeatherResponse::soap_dup(NULL) (use soapcpp2 -Ed)
class _ns1__GetWeatherResponse
{ public:
/// Element "GetWeatherResult" of XSD type xs:string.
    std::string*                         GetWeatherResult               0;	///< Optional element.
/// A handle to the soap struct context that manages this instance when instantiated by a context or NULL otherwise (automatically set).
    struct soap                         *soap                          ;
};

/// @brief Top-level root element "http://www.webserviceX.NET":GetCitiesByCountry
/// @brief "http://www.webserviceX.NET":GetCitiesByCountry is a complexType.
///
/// class _ns1__GetCitiesByCountry operations:
/// - _ns1__GetCitiesByCountry* soap_new__ns1__GetCitiesByCountry(soap*) allocate
/// - _ns1__GetCitiesByCountry* soap_new__ns1__GetCitiesByCountry(soap*, int num) allocate array
/// - _ns1__GetCitiesByCountry* soap_new_req__ns1__GetCitiesByCountry(soap*, ...) allocate, set required members
/// - _ns1__GetCitiesByCountry* soap_new_set__ns1__GetCitiesByCountry(soap*, ...) allocate, set all public members
/// - _ns1__GetCitiesByCountry::soap_default(soap*) reset members to default
/// - int soap_read__ns1__GetCitiesByCountry(soap*, _ns1__GetCitiesByCountry*) deserialize from a stream
/// - int soap_write__ns1__GetCitiesByCountry(soap*, _ns1__GetCitiesByCountry*) serialize to a stream
/// - _ns1__GetCitiesByCountry* _ns1__GetCitiesByCountry::soap_dup(soap*) returns deep copy of _ns1__GetCitiesByCountry, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__GetCitiesByCountry::soap_del() deep deletes _ns1__GetCitiesByCountry data members, use only after _ns1__GetCitiesByCountry::soap_dup(NULL) (use soapcpp2 -Ed)
class _ns1__GetCitiesByCountry
{ public:
/// Element "CountryName" of XSD type xs:string.
    std::string*                         CountryName                    0;	///< Optional element.
/// A handle to the soap struct context that manages this instance when instantiated by a context or NULL otherwise (automatically set).
    struct soap                         *soap                          ;
};

/// @brief Top-level root element "http://www.webserviceX.NET":GetCitiesByCountryResponse
/// @brief "http://www.webserviceX.NET":GetCitiesByCountryResponse is a complexType.
///
/// class _ns1__GetCitiesByCountryResponse operations:
/// - _ns1__GetCitiesByCountryResponse* soap_new__ns1__GetCitiesByCountryResponse(soap*) allocate
/// - _ns1__GetCitiesByCountryResponse* soap_new__ns1__GetCitiesByCountryResponse(soap*, int num) allocate array
/// - _ns1__GetCitiesByCountryResponse* soap_new_req__ns1__GetCitiesByCountryResponse(soap*, ...) allocate, set required members
/// - _ns1__GetCitiesByCountryResponse* soap_new_set__ns1__GetCitiesByCountryResponse(soap*, ...) allocate, set all public members
/// - _ns1__GetCitiesByCountryResponse::soap_default(soap*) reset members to default
/// - int soap_read__ns1__GetCitiesByCountryResponse(soap*, _ns1__GetCitiesByCountryResponse*) deserialize from a stream
/// - int soap_write__ns1__GetCitiesByCountryResponse(soap*, _ns1__GetCitiesByCountryResponse*) serialize to a stream
/// - _ns1__GetCitiesByCountryResponse* _ns1__GetCitiesByCountryResponse::soap_dup(soap*) returns deep copy of _ns1__GetCitiesByCountryResponse, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__GetCitiesByCountryResponse::soap_del() deep deletes _ns1__GetCitiesByCountryResponse data members, use only after _ns1__GetCitiesByCountryResponse::soap_dup(NULL) (use soapcpp2 -Ed)
class _ns1__GetCitiesByCountryResponse
{ public:
/// Element "GetCitiesByCountryResult" of XSD type xs:string.
    std::string*                         GetCitiesByCountryResult       0;	///< Optional element.
/// A handle to the soap struct context that manages this instance when instantiated by a context or NULL otherwise (automatically set).
    struct soap                         *soap                          ;
};


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://www.webserviceX.NET                                               *
 *                                                                            *
\******************************************************************************/

/// @brief Top-level root element "http://www.webserviceX.NET":string of XSD type xs:string.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://www.webserviceX.NET                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/

// This service supports SOAP 1.2 namespaces:
#import "soap12.h"

//gsoap ns1  service name:	GlobalWeatherSoap 
//gsoap ns1  service type:	GlobalWeatherSoap 
//gsoap ns1  service port:	http://www.webservicex.net/globalweather.asmx 
//gsoap ns1  service namespace:	http://www.webserviceX.NET 
//gsoap ns1  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_bindings Service Bindings

  - @ref GlobalWeatherSoap

@section Service_more More Information

  - @ref page_notes "Notes"

  - @ref page_XMLDataBinding "XML Data Binding"

  - @ref SOAP_ENV__Header "SOAP Header Content" (when applicable)

  - @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/**

@page GlobalWeatherSoap Binding "GlobalWeatherSoap"

@section GlobalWeatherSoap_operations Operations of Binding "GlobalWeatherSoap"

  - @ref __ns1__GetWeather

  - @ref __ns1__GetCitiesByCountry

  - @ref __ns1__GetWeather_

  - @ref __ns1__GetCitiesByCountry_

@section GlobalWeatherSoap_ports Default endpoints of Binding "GlobalWeatherSoap"

  - http://www.webservicex.net/globalweather.asmx

@note Multiple service bindings collected as one, use wsdl2h option -Nname to produce a separate service for each binding


*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   GlobalWeatherSoap                                                        *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__GetWeather                                                        *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__GetWeather" of service binding "GlobalWeatherSoap".
Get weather report for all major cities around the world.

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://www.webservicex.net/globalweather.asmx

  - Default SOAP action or REST location path:
    - "http://www.webserviceX.NET/GetWeather"

  - Addressing input action: "http://www.webserviceX.NET/GetWeather"

  - Addressing output action: "http://www.webserviceX.NET/GetWeatherResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__GetWeather(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__GetWeather*                   ns1__GetWeather,
    // output parameters:
    _ns1__GetWeatherResponse           &ns1__GetWeatherResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__GetWeather(
    struct soap *soap,
    // input parameters:
    _ns1__GetWeather*                   ns1__GetWeather,
    // output parameters:
    _ns1__GetWeatherResponse           &ns1__GetWeatherResponse
  );
@endcode

C++ proxy class (defined in soapGlobalWeatherSoapProxy.h generated with soapcpp2):
@code
  class GlobalWeatherSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapGlobalWeatherSoapService.h generated with soapcpp2):
@code
  class GlobalWeatherSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	GetWeather SOAP
//gsoap ns1  service method-style:	GetWeather document
//gsoap ns1  service method-encoding:	GetWeather literal
//gsoap ns1  service method-input-action:	GetWeather http://www.webserviceX.NET/GetWeather
//gsoap ns1  service method-output-action:	GetWeather http://www.webserviceX.NET/GetWeatherResponse
int __ns1__GetWeather(
    _ns1__GetWeather*                   ns1__GetWeather,	///< Input parameter
    _ns1__GetWeatherResponse           &ns1__GetWeatherResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__GetCitiesByCountry                                                *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__GetCitiesByCountry" of service binding "GlobalWeatherSoap".
Get all major cities by country name(full / part).

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://www.webservicex.net/globalweather.asmx

  - Default SOAP action or REST location path:
    - "http://www.webserviceX.NET/GetCitiesByCountry"

  - Addressing input action: "http://www.webserviceX.NET/GetCitiesByCountry"

  - Addressing output action: "http://www.webserviceX.NET/GetCitiesByCountryResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__GetCitiesByCountry(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__GetCitiesByCountry*           ns1__GetCitiesByCountry,
    // output parameters:
    _ns1__GetCitiesByCountryResponse   &ns1__GetCitiesByCountryResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__GetCitiesByCountry(
    struct soap *soap,
    // input parameters:
    _ns1__GetCitiesByCountry*           ns1__GetCitiesByCountry,
    // output parameters:
    _ns1__GetCitiesByCountryResponse   &ns1__GetCitiesByCountryResponse
  );
@endcode

C++ proxy class (defined in soapGlobalWeatherSoapProxy.h generated with soapcpp2):
@code
  class GlobalWeatherSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapGlobalWeatherSoapService.h generated with soapcpp2):
@code
  class GlobalWeatherSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	GetCitiesByCountry SOAP
//gsoap ns1  service method-style:	GetCitiesByCountry document
//gsoap ns1  service method-encoding:	GetCitiesByCountry literal
//gsoap ns1  service method-input-action:	GetCitiesByCountry http://www.webserviceX.NET/GetCitiesByCountry
//gsoap ns1  service method-output-action:	GetCitiesByCountry http://www.webserviceX.NET/GetCitiesByCountryResponse
int __ns1__GetCitiesByCountry(
    _ns1__GetCitiesByCountry*           ns1__GetCitiesByCountry,	///< Input parameter
    _ns1__GetCitiesByCountryResponse   &ns1__GetCitiesByCountryResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__GetWeather_                                                       *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__GetWeather_" of service binding "GlobalWeatherSoap".
Get weather report for all major cities around the world.

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://www.webservicex.net/globalweather.asmx

  - Default SOAP action or REST location path:
    - "http://www.webserviceX.NET/GetWeather"

  - Addressing input action: "http://www.webserviceX.NET/GetWeather"

  - Addressing output action: "http://www.webserviceX.NET/GetWeatherResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__GetWeather_(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__GetWeather*                   ns1__GetWeather,
    // output parameters:
    _ns1__GetWeatherResponse           &ns1__GetWeatherResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__GetWeather_(
    struct soap *soap,
    // input parameters:
    _ns1__GetWeather*                   ns1__GetWeather,
    // output parameters:
    _ns1__GetWeatherResponse           &ns1__GetWeatherResponse
  );
@endcode

C++ proxy class (defined in soapGlobalWeatherSoapProxy.h generated with soapcpp2):
@code
  class GlobalWeatherSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapGlobalWeatherSoapService.h generated with soapcpp2):
@code
  class GlobalWeatherSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	GetWeather_ SOAP
//gsoap ns1  service method-style:	GetWeather_ document
//gsoap ns1  service method-encoding:	GetWeather_ literal
//gsoap ns1  service method-input-action:	GetWeather_ http://www.webserviceX.NET/GetWeather
//gsoap ns1  service method-output-action:	GetWeather_ http://www.webserviceX.NET/GetWeatherResponse
int __ns1__GetWeather_(
    _ns1__GetWeather*                   ns1__GetWeather,	///< Input parameter
    _ns1__GetWeatherResponse           &ns1__GetWeatherResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__GetCitiesByCountry_                                               *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__GetCitiesByCountry_" of service binding "GlobalWeatherSoap".
Get all major cities by country name(full / part).

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://www.webservicex.net/globalweather.asmx

  - Default SOAP action or REST location path:
    - "http://www.webserviceX.NET/GetCitiesByCountry"

  - Addressing input action: "http://www.webserviceX.NET/GetCitiesByCountry"

  - Addressing output action: "http://www.webserviceX.NET/GetCitiesByCountryResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__GetCitiesByCountry_(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__GetCitiesByCountry*           ns1__GetCitiesByCountry,
    // output parameters:
    _ns1__GetCitiesByCountryResponse   &ns1__GetCitiesByCountryResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__GetCitiesByCountry_(
    struct soap *soap,
    // input parameters:
    _ns1__GetCitiesByCountry*           ns1__GetCitiesByCountry,
    // output parameters:
    _ns1__GetCitiesByCountryResponse   &ns1__GetCitiesByCountryResponse
  );
@endcode

C++ proxy class (defined in soapGlobalWeatherSoapProxy.h generated with soapcpp2):
@code
  class GlobalWeatherSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapGlobalWeatherSoapService.h generated with soapcpp2):
@code
  class GlobalWeatherSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	GetCitiesByCountry_ SOAP
//gsoap ns1  service method-style:	GetCitiesByCountry_ document
//gsoap ns1  service method-encoding:	GetCitiesByCountry_ literal
//gsoap ns1  service method-input-action:	GetCitiesByCountry_ http://www.webserviceX.NET/GetCitiesByCountry
//gsoap ns1  service method-output-action:	GetCitiesByCountry_ http://www.webserviceX.NET/GetCitiesByCountryResponse
int __ns1__GetCitiesByCountry_(
    _ns1__GetCitiesByCountry*           ns1__GetCitiesByCountry,	///< Input parameter
    _ns1__GetCitiesByCountryResponse   &ns1__GetCitiesByCountryResponse	///< Output parameter
);

/**

@page GlobalWeatherSoap Binding "GlobalWeatherSoap"

@section GlobalWeatherSoap_policy_enablers Policy Enablers of Binding "GlobalWeatherSoap"

None specified.

*/

/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

Data can be read and deserialized from:
  - an int file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = (int)...
  - a C++ stream (istream, stringstream), using soap->is = (istream*)...
  - a C string, using soap->is = (const char*)...
  - any input, using the soap->frecv() callback

Data can be serialized and written to:
  - an int file descriptor, using soap->sendfd = (int)...
  - a socket, using soap->socket = (int)...
  - a C++ stream (ostream, stringstream), using soap->os = (ostream*)...
  - a C string, using soap->os = (const char**)...
  - any output, using the soap->fsend() callback

The following options are available for (de)serialization control:
  - soap->encodingStyle = NULL; to remove SOAP 1.1/1.2 encodingStyle
  - soap_mode(soap, SOAP_XML_TREE); XML without id-ref (no cycles!)
  - soap_mode(soap, SOAP_XML_GRAPH); XML with id-ref (including cycles)
  - soap_set_namespaces(soap, struct Namespace *nsmap); to set xmlns bindings


@section ns1 Top-level root elements of schema "http://www.webserviceX.NET"

  - <ns1:GetWeather> @ref _ns1__GetWeather
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__GetWeather(struct soap*, _ns1__GetWeather*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__GetWeather(struct soap*, _ns1__GetWeather*);
    @endcode

  - <ns1:GetWeatherResponse> @ref _ns1__GetWeatherResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__GetWeatherResponse(struct soap*, _ns1__GetWeatherResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__GetWeatherResponse(struct soap*, _ns1__GetWeatherResponse*);
    @endcode

  - <ns1:GetCitiesByCountry> @ref _ns1__GetCitiesByCountry
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__GetCitiesByCountry(struct soap*, _ns1__GetCitiesByCountry*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__GetCitiesByCountry(struct soap*, _ns1__GetCitiesByCountry*);
    @endcode

  - <ns1:GetCitiesByCountryResponse> @ref _ns1__GetCitiesByCountryResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__GetCitiesByCountryResponse(struct soap*, _ns1__GetCitiesByCountryResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__GetCitiesByCountryResponse(struct soap*, _ns1__GetCitiesByCountryResponse*);
    @endcode

  - <ns1:string> (use wsdl2h option -g to auto-generate type _ns1__string)

*/

/* End of GeoIPService.h */
