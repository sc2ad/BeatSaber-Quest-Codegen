// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.CspParameters
#include "System/Security/Cryptography/CspParameters.hpp"
// Including type: System.Security.Cryptography.CspProviderFlags
#include "System/Security/Cryptography/CspProviderFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.CspParameters.get_Flags
System::Security::Cryptography::CspProviderFlags System::Security::Cryptography::CspParameters::get_Flags() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::CspProviderFlags>(this, "get_Flags"));
}
// Autogenerated method: System.Security.Cryptography.CspParameters.set_Flags
void System::Security::Cryptography::CspParameters::set_Flags(System::Security::Cryptography::CspProviderFlags value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Flags", value));
}
// Autogenerated method: System.Security.Cryptography.CspParameters..ctor
System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor(int dwTypeIn) {
  return THROW_UNLESS(il2cpp_utils::New<CspParameters*>(dwTypeIn));
}
// Autogenerated method: System.Security.Cryptography.CspParameters..ctor
System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor(int dwTypeIn, ::Il2CppString* strProviderNameIn, ::Il2CppString* strContainerNameIn) {
  return THROW_UNLESS(il2cpp_utils::New<CspParameters*>(dwTypeIn, strProviderNameIn, strContainerNameIn));
}
// Autogenerated method: System.Security.Cryptography.CspParameters..ctor
System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor(int providerType, ::Il2CppString* providerName, ::Il2CppString* keyContainerName, System::Security::Cryptography::CspProviderFlags flags) {
  return THROW_UNLESS(il2cpp_utils::New<CspParameters*>(providerType, providerName, keyContainerName, flags));
}
// Autogenerated method: System.Security.Cryptography.CspParameters..ctor
System::Security::Cryptography::CspParameters* System::Security::Cryptography::CspParameters::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<CspParameters*>());
}