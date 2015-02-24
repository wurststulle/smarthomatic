/*
* This file is part of smarthomatic, http://www.smarthomatic.org.
* Copyright (c) 2013..2014 Uwe Freese
*
* smarthomatic is free software: you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation, either version 3 of the License, or (at your
* option) any later version.
*
* smarthomatic is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with smarthomatic. If not, see <http://www.gnu.org/licenses/>.
*
* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
* ! WARNING: This file is generated by the SHC EEPROM editor and should !
* ! never be modified manually.                                         !
* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/

#ifndef _PACKET_HEADEREXT_COMMON_H
#define _PACKET_HEADEREXT_COMMON_H

#include <stdbool.h>
#include "util.h"
#include "e2p_access.h"

#include "packet_headerext_ackstatus.h"
#include "packet_headerext_ack.h"
#include "packet_headerext_status.h"
#include "packet_headerext_setgetsave.h"
#include "packet_headerext_setget.h"
#include "packet_headerext_set.h"
#include "packet_headerext_get.h"

// This file contains functions to access fields common to several message
// types. It allows the user to access the fields without explicitly
// specifying the message type in the function call.
// WARNING: If you access a field not contained in the received MessageType,
// you get a wrong value 0!

// Initialize the header offset variable, used to correctly interpret
// contents of the header extension and the message data after reception.
static void pkg_header_adjust_offset(void) __attribute__ ((unused));
static void pkg_header_adjust_offset(void)
{
  __MESSAGETYPE = pkg_header_get_messagetype();

  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      __HEADEROFFSETBITS = 120;
      break;
    case MESSAGETYPE_ACK:
      __HEADEROFFSETBITS = 109;
      break;
    case MESSAGETYPE_STATUS:
      __HEADEROFFSETBITS = 83;
      break;
    case MESSAGETYPE_SETGETSAVE:
      __HEADEROFFSETBITS = 95;
      break;
    case MESSAGETYPE_SETGET:
      __HEADEROFFSETBITS = 95;
      break;
    case MESSAGETYPE_SET:
      __HEADEROFFSETBITS = 95;
      break;
    case MESSAGETYPE_GET:
      __HEADEROFFSETBITS = 95;
      break;
  }
}

// Set AckPacketCounter (UIntValue)
// Same function for all MessageTypes!
static void pkg_headerext_common_set_ackpacketcounter(uint32_t val) __attribute__ ((unused));
static void pkg_headerext_common_set_ackpacketcounter(uint32_t val)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      pkg_headerext_ackstatus_set_ackpacketcounter(val);
      break;
    case MESSAGETYPE_ACK:
      pkg_headerext_ack_set_ackpacketcounter(val);
      break;
    default:
      break;
  }
}

// Get AckPacketCounter (UIntValue)
// Same function for all MessageTypes!
static uint32_t pkg_headerext_common_get_ackpacketcounter(void) __attribute__ ((unused));
static uint32_t pkg_headerext_common_get_ackpacketcounter(void)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      return pkg_headerext_ackstatus_get_ackpacketcounter();
      break;
    case MESSAGETYPE_ACK:
      return pkg_headerext_ack_get_ackpacketcounter();
      break;
    default:
      return 0;
      break;
  }
}

// Set MessageID (UIntValue)
// Same function for all MessageTypes!
static void pkg_headerext_common_set_messageid(uint32_t val) __attribute__ ((unused));
static void pkg_headerext_common_set_messageid(uint32_t val)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      pkg_headerext_ackstatus_set_messageid(val);
      break;
    case MESSAGETYPE_STATUS:
      pkg_headerext_status_set_messageid(val);
      break;
    case MESSAGETYPE_SETGETSAVE:
      pkg_headerext_setgetsave_set_messageid(val);
      break;
    case MESSAGETYPE_SETGET:
      pkg_headerext_setget_set_messageid(val);
      break;
    case MESSAGETYPE_SET:
      pkg_headerext_set_set_messageid(val);
      break;
    case MESSAGETYPE_GET:
      pkg_headerext_get_set_messageid(val);
      break;
    default:
      break;
  }
}

// Get MessageID (UIntValue)
// Same function for all MessageTypes!
static uint32_t pkg_headerext_common_get_messageid(void) __attribute__ ((unused));
static uint32_t pkg_headerext_common_get_messageid(void)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      return pkg_headerext_ackstatus_get_messageid();
      break;
    case MESSAGETYPE_STATUS:
      return pkg_headerext_status_get_messageid();
      break;
    case MESSAGETYPE_SETGETSAVE:
      return pkg_headerext_setgetsave_get_messageid();
      break;
    case MESSAGETYPE_SETGET:
      return pkg_headerext_setget_get_messageid();
      break;
    case MESSAGETYPE_SET:
      return pkg_headerext_set_get_messageid();
      break;
    case MESSAGETYPE_GET:
      return pkg_headerext_get_get_messageid();
      break;
    default:
      return 0;
      break;
  }
}

// Set AckSenderID (UIntValue)
// Same function for all MessageTypes!
static void pkg_headerext_common_set_acksenderid(uint32_t val) __attribute__ ((unused));
static void pkg_headerext_common_set_acksenderid(uint32_t val)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      pkg_headerext_ackstatus_set_acksenderid(val);
      break;
    case MESSAGETYPE_ACK:
      pkg_headerext_ack_set_acksenderid(val);
      break;
    default:
      break;
  }
}

// Get AckSenderID (UIntValue)
// Same function for all MessageTypes!
static uint32_t pkg_headerext_common_get_acksenderid(void) __attribute__ ((unused));
static uint32_t pkg_headerext_common_get_acksenderid(void)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      return pkg_headerext_ackstatus_get_acksenderid();
      break;
    case MESSAGETYPE_ACK:
      return pkg_headerext_ack_get_acksenderid();
      break;
    default:
      return 0;
      break;
  }
}

// Set ReceiverID (UIntValue)
// Same function for all MessageTypes!
static void pkg_headerext_common_set_receiverid(uint32_t val) __attribute__ ((unused));
static void pkg_headerext_common_set_receiverid(uint32_t val)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_SETGETSAVE:
      pkg_headerext_setgetsave_set_receiverid(val);
      break;
    case MESSAGETYPE_SETGET:
      pkg_headerext_setget_set_receiverid(val);
      break;
    case MESSAGETYPE_SET:
      pkg_headerext_set_set_receiverid(val);
      break;
    case MESSAGETYPE_GET:
      pkg_headerext_get_set_receiverid(val);
      break;
    default:
      break;
  }
}

// Get ReceiverID (UIntValue)
// Same function for all MessageTypes!
static uint32_t pkg_headerext_common_get_receiverid(void) __attribute__ ((unused));
static uint32_t pkg_headerext_common_get_receiverid(void)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_SETGETSAVE:
      return pkg_headerext_setgetsave_get_receiverid();
      break;
    case MESSAGETYPE_SETGET:
      return pkg_headerext_setget_get_receiverid();
      break;
    case MESSAGETYPE_SET:
      return pkg_headerext_set_get_receiverid();
      break;
    case MESSAGETYPE_GET:
      return pkg_headerext_get_get_receiverid();
      break;
    default:
      return 0;
      break;
  }
}

// Set MessageGroupID (UIntValue)
// Same function for all MessageTypes!
static void pkg_headerext_common_set_messagegroupid(uint32_t val) __attribute__ ((unused));
static void pkg_headerext_common_set_messagegroupid(uint32_t val)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      pkg_headerext_ackstatus_set_messagegroupid(val);
      break;
    case MESSAGETYPE_STATUS:
      pkg_headerext_status_set_messagegroupid(val);
      break;
    case MESSAGETYPE_SETGETSAVE:
      pkg_headerext_setgetsave_set_messagegroupid(val);
      break;
    case MESSAGETYPE_SETGET:
      pkg_headerext_setget_set_messagegroupid(val);
      break;
    case MESSAGETYPE_SET:
      pkg_headerext_set_set_messagegroupid(val);
      break;
    case MESSAGETYPE_GET:
      pkg_headerext_get_set_messagegroupid(val);
      break;
    default:
      break;
  }
}

// Get MessageGroupID (UIntValue)
// Same function for all MessageTypes!
static uint32_t pkg_headerext_common_get_messagegroupid(void) __attribute__ ((unused));
static uint32_t pkg_headerext_common_get_messagegroupid(void)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      return pkg_headerext_ackstatus_get_messagegroupid();
      break;
    case MESSAGETYPE_STATUS:
      return pkg_headerext_status_get_messagegroupid();
      break;
    case MESSAGETYPE_SETGETSAVE:
      return pkg_headerext_setgetsave_get_messagegroupid();
      break;
    case MESSAGETYPE_SETGET:
      return pkg_headerext_setget_get_messagegroupid();
      break;
    case MESSAGETYPE_SET:
      return pkg_headerext_set_get_messagegroupid();
      break;
    case MESSAGETYPE_GET:
      return pkg_headerext_get_get_messagegroupid();
      break;
    default:
      return 0;
      break;
  }
}

// Set Error (BoolValue)
// Same function for all MessageTypes!
static void pkg_headerext_common_set_error(bool val) __attribute__ ((unused));
static void pkg_headerext_common_set_error(bool val)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      pkg_headerext_ackstatus_set_error(val);
      break;
    case MESSAGETYPE_ACK:
      pkg_headerext_ack_set_error(val);
      break;
    default:
      break;
  }
}

// Get Error (BoolValue)
// Same function for all MessageTypes!
static bool pkg_headerext_common_get_error(void) __attribute__ ((unused));
static bool pkg_headerext_common_get_error(void)
{
  switch (__MESSAGETYPE)
  {
    case MESSAGETYPE_ACKSTATUS:
      return pkg_headerext_ackstatus_get_error();
      break;
    case MESSAGETYPE_ACK:
      return pkg_headerext_ack_get_error();
      break;
    default:
      return 0;
      break;
  }
}

#endif /* _PACKET_HEADEREXT_COMMON_H */
