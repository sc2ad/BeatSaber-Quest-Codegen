// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.BasicClient
#include "System/Net/BasicClient.hpp"
// Including type: System.Net.Authorization
#include "System/Net/Authorization.hpp"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.Net.ICredentials
#include "System/Net/ICredentials.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.BasicClient.GetBytes
::Array<uint8_t>* System::Net::BasicClient::GetBytes(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System.Net", "BasicClient", "GetBytes", str));
}
// Autogenerated method: System.Net.BasicClient.InternalAuthenticate
System::Net::Authorization* System::Net::BasicClient::InternalAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Authorization*>("System.Net", "BasicClient", "InternalAuthenticate", webRequest, credentials));
}
// Autogenerated method: System.Net.BasicClient.Authenticate
System::Net::Authorization* System::Net::BasicClient::Authenticate(::Il2CppString* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Authorization*>(this, "Authenticate", challenge, webRequest, credentials));
}
// Autogenerated method: System.Net.BasicClient.PreAuthenticate
System::Net::Authorization* System::Net::BasicClient::PreAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Authorization*>(this, "PreAuthenticate", webRequest, credentials));
}
// Autogenerated method: System.Net.BasicClient.get_AuthenticationType
::Il2CppString* System::Net::BasicClient::get_AuthenticationType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_AuthenticationType"));
}
// Autogenerated method: System.Net.BasicClient..ctor
System::Net::BasicClient* System::Net::BasicClient::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BasicClient*>());
}