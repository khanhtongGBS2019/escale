//////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) GBS 2012 All Right Reserved, http://gbs-jsc.com.                   //
// This source is subject to the GBS Permissive License. Please see the License.txt //
// file for more information.                                                       //
//                                                                                  //
// file: GListItemBase.cpp                                                          //
//////////////////////////////////////////////////////////////////////////////////////

#include "GListItemBase.hpp"
#include "GList.hpp"

//namespace GBS {
//namespace STM {
//namespace Framework {
//namespace UIControl {

//////////////////////////////////////////////////////////////////////////////////////
GListItemBase::GListItemBase()
{
   m_pParent = NULL;
}

//////////////////////////////////////////////////////////////////////////////////////
GList* GListItemBase::parent()
{
   return m_pParent;
}

//////////////////////////////////////////////////////////////////////////////////////
void GListItemBase::setParent(GList* parent)
{
   m_pParent = parent;
}

//////////////////////////////////////////////////////////////////////////////////////
//} //UIControl
//} //Framework
//} //STM
//} //GBS
