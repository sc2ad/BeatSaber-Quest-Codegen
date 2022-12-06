// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: X509CertificateUtility
#include "GlobalNamespace/X509CertificateUtility.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System/Security/Cryptography/X509Certificates/X509ChainStatus.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility::$$c*, "", "X509CertificateUtility/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: X509CertificateUtility/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class X509CertificateUtility::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly X509CertificateUtility/<>c <>9
    static ::GlobalNamespace::X509CertificateUtility::$$c* _get_$$9();
    // Set static field: static public readonly X509CertificateUtility/<>c <>9
    static void _set_$$9(::GlobalNamespace::X509CertificateUtility::$$c* value);
    // Get static field: static public System.Func`2<System.Security.Cryptography.X509Certificates.X509ChainStatus,System.String> <>9__10_0
    static ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* _get_$$9__10_0();
    // Set static field: static public System.Func`2<System.Security.Cryptography.X509Certificates.X509ChainStatus,System.String> <>9__10_0
    static void _set_$$9__10_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* value);
    // Get static field: static public System.Func`2<System.Security.Cryptography.X509Certificates.X509ChainStatus,System.String> <>9__11_0
    static ::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* _get_$$9__11_0();
    // Set static field: static public System.Func`2<System.Security.Cryptography.X509Certificates.X509ChainStatus,System.String> <>9__11_0
    static void _set_$$9__11_0(::System::Func_2<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x26CA314
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x26CA378
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateUtility::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::X509CertificateUtility::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateUtility::$$c*, creationType>()));
    }
    // System.String <ValidateCertificateChainUnity>b__10_0(System.Security.Cryptography.X509Certificates.X509ChainStatus s)
    // Offset: 0x26CA380
    ::StringW $ValidateCertificateChainUnity$b__10_0(::System::Security::Cryptography::X509Certificates::X509ChainStatus s);
    // System.String <ValidateCertificateChainDotNet>b__11_0(System.Security.Cryptography.X509Certificates.X509ChainStatus s)
    // Offset: 0x26CA408
    ::StringW $ValidateCertificateChainDotNet$b__11_0(::System::Security::Cryptography::X509Certificates::X509ChainStatus s);
  }; // X509CertificateUtility/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::X509CertificateUtility::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$$c::$ValidateCertificateChainUnity$b__10_0
// Il2CppName: <ValidateCertificateChainUnity>b__10_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::X509CertificateUtility::$$c::*)(::System::Security::Cryptography::X509Certificates::X509ChainStatus)>(&GlobalNamespace::X509CertificateUtility::$$c::$ValidateCertificateChainUnity$b__10_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$$c*), "<ValidateCertificateChainUnity>b__10_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$$c::$ValidateCertificateChainDotNet$b__11_0
// Il2CppName: <ValidateCertificateChainDotNet>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::X509CertificateUtility::$$c::*)(::System::Security::Cryptography::X509Certificates::X509ChainStatus)>(&GlobalNamespace::X509CertificateUtility::$$c::$ValidateCertificateChainDotNet$b__11_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$$c*), "<ValidateCertificateChainDotNet>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
