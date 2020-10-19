// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebConnectionGroup
#include "System/Net/WebConnectionGroup.hpp"
// Including type: System.Net.WebConnectionGroup/ConnectionState
#include "System/Net/WebConnectionGroup_ConnectionState.hpp"
// Including type: System.Net.ServicePoint
#include "System/Net/ServicePoint.hpp"
// Including type: System.Collections.Generic.LinkedList`1
#include "System/Collections/Generic/LinkedList_1.hpp"
// Including type: System.Collections.Queue
#include "System/Collections/Queue.hpp"
// Including type: System.EventHandler
#include "System/EventHandler.hpp"
// Including type: System.Net.WebConnection
#include "System/Net/WebConnection.hpp"
// Including type: System.Net.HttpWebRequest
#include "System/Net/HttpWebRequest.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.WebConnectionGroup..ctor
System::Net::WebConnectionGroup* System::Net::WebConnectionGroup::New_ctor(System::Net::ServicePoint* sPoint, ::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::New<WebConnectionGroup*>(sPoint, name));
}
// Autogenerated method: System.Net.WebConnectionGroup.add_ConnectionClosed
void System::Net::WebConnectionGroup::add_ConnectionClosed(System::EventHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_ConnectionClosed", value));
}
// Autogenerated method: System.Net.WebConnectionGroup.remove_ConnectionClosed
void System::Net::WebConnectionGroup::remove_ConnectionClosed(System::EventHandler* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_ConnectionClosed", value));
}
// Autogenerated method: System.Net.WebConnectionGroup.OnConnectionClosed
void System::Net::WebConnectionGroup::OnConnectionClosed() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnConnectionClosed"));
}
// Autogenerated method: System.Net.WebConnectionGroup.Close
void System::Net::WebConnectionGroup::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.Net.WebConnectionGroup.GetConnection
System::Net::WebConnection* System::Net::WebConnectionGroup::GetConnection(System::Net::HttpWebRequest* request, bool& created) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::WebConnection*>(this, "GetConnection", request, created));
}
// Autogenerated method: System.Net.WebConnectionGroup.PrepareSharingNtlm
void System::Net::WebConnectionGroup::PrepareSharingNtlm(System::Net::WebConnection* cnc, System::Net::HttpWebRequest* request) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Net", "WebConnectionGroup", "PrepareSharingNtlm", cnc, request));
}
// Autogenerated method: System.Net.WebConnectionGroup.FindIdleConnection
System::Net::WebConnectionGroup::ConnectionState* System::Net::WebConnectionGroup::FindIdleConnection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::WebConnectionGroup::ConnectionState*>(this, "FindIdleConnection"));
}
// Autogenerated method: System.Net.WebConnectionGroup.CreateOrReuseConnection
System::Net::WebConnection* System::Net::WebConnectionGroup::CreateOrReuseConnection(System::Net::HttpWebRequest* request, bool& created) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::WebConnection*>(this, "CreateOrReuseConnection", request, created));
}
// Autogenerated method: System.Net.WebConnectionGroup.get_Name
::Il2CppString* System::Net::WebConnectionGroup::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Name"));
}
// Autogenerated method: System.Net.WebConnectionGroup.get_Queue
System::Collections::Queue* System::Net::WebConnectionGroup::get_Queue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Queue*>(this, "get_Queue"));
}
// Autogenerated method: System.Net.WebConnectionGroup.TryRecycle
bool System::Net::WebConnectionGroup::TryRecycle(System::TimeSpan maxIdleTime, System::DateTime& idleSince) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryRecycle", maxIdleTime, idleSince));
}