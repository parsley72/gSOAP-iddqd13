/*
        qtime.cpp

        See qtime.h for documentation.

        Compile this file and link it with your code.

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc., All Rights Reserved.
This part of the software is released under ONE of the following licenses:
GPL, the gSOAP public license, OR Genivia's license for commercial use.
--------------------------------------------------------------------------------
gSOAP public license.

The contents of this file are subject to the gSOAP Public License Version 1.3
(the "License"); you may not use this file except in compliance with the
License. You may obtain a copy of the License at
http://www.cs.fsu.edu/~engelen/soaplicense.html
Software distributed under the License is distributed on an "AS IS" basis,
WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
for the specific language governing rights and limitations under the License.

The Initial Developer of the Original Code is Robert A. van Engelen.
Copyright (C) 2000-2016, Robert van Engelen, Genivia, Inc., All Rights Reserved.
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
A commercial use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/* When using soapcpp2 option -q<name> or -p<name>, change "soapH.h" in the line below. */
/* soapH.h generated by soapcpp2 from .h file containing #import "qtime.h" */

#include "soapH.h"

static void * instantiate_xsd__time(struct soap*, int, const char*, const char*, size_t*);

static int delete_xsd__time(struct soap*, struct soap_clist*);

static void copy_xsd__time(struct soap*, int, int, void*, size_t, const void*, void**);

void soap_serialize_xsd__time(struct soap *soap, QTime const *a)
{
  (void)soap; (void)a; /* appease -Wall -Werror */
}

void soap_default_xsd__time(struct soap *soap, QTime *a)
{
  (void)soap; /* appease -Wall -Werror */
  *a = QTime();
}

int soap_out_xsd__time(struct soap *soap, char const *tag, int id, QTime const *a, char const *type)
{
  if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_xsd__time), type)
   || soap_string_out(soap, soap_xsd__time2s(soap, *a), 0))
    return soap->error;
  return soap_element_end_out(soap, tag);
}

QTime *soap_in_xsd__time(struct soap *soap, char const *tag, QTime *a, char const *type)
{
  if (soap_element_begin_in(soap, tag, 0, NULL))
    return NULL;
  if (*soap->type
   && soap_match_att(soap, soap->type, type)
   && soap_match_att(soap, soap->type, ":time"))
  {
    soap->error = SOAP_TYPE;
    soap_revert(soap);
    return NULL;
  }
  a = (QTime*)soap_id_enter(soap, soap->id, a, SOAP_TYPE_xsd__time, sizeof(QTime), NULL, NULL, instantiate_xsd__time, NULL);
  if (*soap->href)
  {
    a = (QTime*)soap_id_forward(soap, soap->href, a, 0, SOAP_TYPE_xsd__time, 0, sizeof(QTime), 0, copy_xsd__time, NULL);
  }
  else if (a)
  {
    if (soap_s2xsd__time(soap, soap_value(soap), a))
      return NULL;
  }
  if (soap->body && soap_element_end_in(soap, tag))
    return NULL;
  return a;
}

const char * soap_xsd__time2s(struct soap *soap, QTime a)
{
  //hh:mm:ss.zzzZ
  if (!a.isValid())
    a = QTime(0, 0, 0, 0);
  QString str = a.toString("HH:mm:ss.zzzZ");
  QByteArray ba = str.toLatin1();
  soap_strcpy(soap->tmpbuf, qstrlen(ba)+1, ba.constData());
  return soap->tmpbuf;
}

int soap_s2xsd__time(struct soap *soap, const char *s, QTime *a)
{
  *a = QTime();
  if (s)
  {
    //grab hrs, mins, secs, mills
    char *t;
    unsigned long d = 0;
    int hrs = 0, mins = 0, secs = 0, mills = 0;
    d = soap_strtoul(s, &t, 10);
    if (*t == ':')
    {
      /* hh:mm:ss */
      hrs = d;
      mins = (int)soap_strtoul(t + 1, &t, 10);
      secs = (int)soap_strtoul(t + 1, &t, 10);
    }
    else if (!(soap->mode & SOAP_XML_STRICT))
    {
      /* hhmmss */
      hrs = (int)(d / 10000);
      mins = (int)(d / 100 % 100);
      secs = (int)(d % 100);
    }
    else
    {
      return soap->error = SOAP_TYPE;
    }
    //grab the milliseconds if it's included
    if (*t == '.')
      mills = (int)soap_strtoul(t+1, &t, 10);
    //set the time
    a->setHMS(hrs, mins, secs, mills);
    //grab the timezone and adjust time
    if (*t == ' ' && !(soap->mode & SOAP_XML_STRICT))
      t++;
    if (*t)
    {
#ifndef WITH_NOZONE
      if (*t == '+' || *t == '-')
      {
        int hrs, mins;
        mins = (int)soap_strtol(t, &t, 10);
        if (*t == ':')
        {
          /* +hh:mm */
          hrs = mins;
          mins = (int)soap_strtol(t + 1, &t, 10);
          if (hrs < 0)
            mins = -mins;
        }
        else if (!(soap->mode & SOAP_XML_STRICT))
        {
          /* +hhmm */
          hrs = mins / 100;
          mins = mins % 100;
        }
        else
        {
          /* +hh */
          hrs = mins;
          mins = 0;
        }
        if (*t)
          return soap->error = SOAP_TYPE;
        (void)a->addSecs(-mins*60);
        (void)a->addSecs(-hrs*3600);
      }
      else if (*t != 'Z')
      {
        return soap->error = SOAP_TYPE;
      }
#endif
    }
    else
    {
      /* no UTC or timezone, so assume we got a localtime */
    }
  }
  return soap->error;
}

static void * instantiate_xsd__time(struct soap *soap, int n, const char *type, const char *arrayType, size_t *size)
{
  DBGLOG(TEST, SOAP_MESSAGE(fdebug, "soap_instantiate_xsd__time(%d, %s, %s)\n", n, type?type:"", arrayType?arrayType:""));
  struct soap_clist *cp = soap_link(soap, SOAP_TYPE_xsd__time, n, delete_xsd__time);
  (void)type; (void)arrayType; /* appease -Wall -Werror */
  if (!cp)
    return NULL;
  if (n < 0)
  {	cp->ptr = SOAP_NEW(soap, QTime);
    if (size)
      *size = sizeof(QTime);
  }
  else
  {	cp->ptr = SOAP_NEW_ARRAY(soap, QTime, n);
    if (size)
      *size = n * sizeof(QTime);
  }
  DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Instantiated location=%p\n", cp->ptr));
  if (!cp->ptr)
    soap->error = SOAP_EOM;
  return (QTime*)cp->ptr;
}

static int delete_xsd__time(struct soap *soap, struct soap_clist *p)
{
  (void)soap; /* appease -Wall -Werror */
  if (p->type == SOAP_TYPE_xsd__time)
  {
    if (p->size < 0)
      SOAP_DELETE(soap, static_cast<QTime*>(p->ptr), QTime);
    else
      SOAP_DELETE_ARRAY(soap, static_cast<QTime*>(p->ptr), QTime);
    return SOAP_OK;
  }
  return SOAP_ERR;
}

static void copy_xsd__time(struct soap *soap, int st, int tt, void *p, size_t index, const void *q, void **x)
{
  (void)soap; (void)st; (void)tt; (void)index; (void)x; /* appease -Wall -Werror */
  DBGLOG(TEST, SOAP_MESSAGE(fdebug, "Copying QTime %p -> %p\n", q, p));
  *(QTime*)p = *(QTime*)q;
}
