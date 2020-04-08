/* soapcalcProxy.h
   Generated by gSOAP 2.8.101 for calc.h

gSOAP XML Web services tools
Copyright (C) 2000-2020, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapcalcProxy_H
#define soapcalcProxy_H
#include "soapH.h"

    class SOAP_CMAC calcProxy : public soap {
      public:
        /// Endpoint URL of service 'calcProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in calc.h, if any
        /// Construct a proxy with new managing context
        calcProxy();
        /// Copy constructor
        calcProxy(const calcProxy& rhs);
        /// Construct proxy given a managing context
        calcProxy(const struct soap&);
        /// Construct proxy given a managing context and endpoint URL
        calcProxy(const struct soap&, const char *soap_endpoint_url);
        /// Constructor taking an endpoint URL
        calcProxy(const char *soap_endpoint_url);
        /// Constructor taking input and output mode flags for the new managing context
        calcProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        calcProxy(const char *soap_endpoint_url, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        calcProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context
        virtual ~calcProxy();
        /// Initializer used by constructors
        virtual void calcProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual calcProxy *copy();
        /// Copy assignment
        calcProxy& operator=(const calcProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault subcode QName string (NULL when absent)
        virtual const char *soap_fault_subcode();
        /// Get SOAP Fault string/reason (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail XML string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        //
        /// Web service synchronous operation 'add' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int add(double a, double b, double *result) { return this->add(NULL, NULL, a, b, result); }
        /// Web service synchronous operation 'add' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int add(const char *soap_endpoint_url, const char *soap_action, double a, double b, double *result) { return this->send_add(soap_endpoint_url, soap_action, a, b) || this->recv_add(result) ? this->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_add' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_add(const char *soap_endpoint_url, const char *soap_action, double a, double b);
        /// Web service asynchronous operation 'recv_add' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_add(double *result);
        //
        /// Web service synchronous operation 'sub' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int sub(double a, double b, double *result) { return this->sub(NULL, NULL, a, b, result); }
        /// Web service synchronous operation 'sub' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int sub(const char *soap_endpoint_url, const char *soap_action, double a, double b, double *result) { return this->send_sub(soap_endpoint_url, soap_action, a, b) || this->recv_sub(result) ? this->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_sub' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_sub(const char *soap_endpoint_url, const char *soap_action, double a, double b);
        /// Web service asynchronous operation 'recv_sub' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_sub(double *result);
        //
        /// Web service synchronous operation 'mul' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int mul(double a, double b, double *result) { return this->mul(NULL, NULL, a, b, result); }
        /// Web service synchronous operation 'mul' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int mul(const char *soap_endpoint_url, const char *soap_action, double a, double b, double *result) { return this->send_mul(soap_endpoint_url, soap_action, a, b) || this->recv_mul(result) ? this->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_mul' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_mul(const char *soap_endpoint_url, const char *soap_action, double a, double b);
        /// Web service asynchronous operation 'recv_mul' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_mul(double *result);
        //
        /// Web service synchronous operation 'div' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int div(double a, double b, double *result) { return this->div(NULL, NULL, a, b, result); }
        /// Web service synchronous operation 'div' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int div(const char *soap_endpoint_url, const char *soap_action, double a, double b, double *result) { return this->send_div(soap_endpoint_url, soap_action, a, b) || this->recv_div(result) ? this->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_div' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_div(const char *soap_endpoint_url, const char *soap_action, double a, double b);
        /// Web service asynchronous operation 'recv_div' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_div(double *result);
        //
        /// Web service synchronous operation 'pow' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int pow(double a, double b, double *result) { return this->pow(NULL, NULL, a, b, result); }
        /// Web service synchronous operation 'pow' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int pow(const char *soap_endpoint_url, const char *soap_action, double a, double b, double *result) { return this->send_pow(soap_endpoint_url, soap_action, a, b) || this->recv_pow(result) ? this->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_pow' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_pow(const char *soap_endpoint_url, const char *soap_action, double a, double b);
        /// Web service asynchronous operation 'recv_pow' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_pow(double *result);
    };
#endif
