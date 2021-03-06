//////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) GBS 2014 All Right Reserved, http://gbs-jsc.com.                   //
// This source is subject to the GBS Permissive License. Please see the License.txt //
// file for more information.                                                       //
//                                                                                  //
// file: RangefinderManager.cpp                                                             //
//////////////////////////////////////////////////////////////////////////////////////

#include "RangefinderManager.hpp"
#include "GStringUtils.hpp"
#include "GSystem.hpp"
#include "GUserSettings.hpp"

//namespace GBS {
//namespace STM {
//namespace Application {
//namespace Business {
//namespace EScaleManager {
//////////////////////////////////////////////////////////////////////////////////////
RangefinderManager::RangefinderManager()
{
}

//////////////////////////////////////////////////////////////////////////////////////
RangefinderManager::~RangefinderManager()
{
}

//////////////////////////////////////////////////////////////////////////////////////
RangefinderManager& RangefinderManager::getInstance()
{
   static RangefinderManager instance;
   return instance;
}

//////////////////////////////////////////////////////////////////////////////////////
bool RangefinderManager::init()
{
}

//////////////////////////////////////////////////////////////////////////////////////
bool RangefinderManager::deinit()
{
}
//////////////////////////////////////////////////////////////////////////////////////
//} //EScaleManager
//} //Business
//} //Application
//} //STM
//} //GBS
