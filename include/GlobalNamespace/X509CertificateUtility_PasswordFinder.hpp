// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: X509CertificateUtility
#include "GlobalNamespace/X509CertificateUtility.hpp"
// Including type: Org.BouncyCastle.OpenSsl.IPasswordFinder
#include "Org/BouncyCastle/OpenSsl/IPasswordFinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility::PasswordFinder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility::PasswordFinder*, "", "X509CertificateUtility/PasswordFinder");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: X509CertificateUtility/PasswordFinder
  // [TokenAttribute] Offset: FFFFFFFF
  class X509CertificateUtility::PasswordFinder : public ::Il2CppObject/*, public ::Org::BouncyCastle::OpenSsl::IPasswordFinder*/ {
    public:
    public:
    // private readonly System.Char[] _password
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppChar> password;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::OpenSsl::IPasswordFinder
    operator ::Org::BouncyCastle::OpenSsl::IPasswordFinder() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>(this);
    }
    // Creating interface conversion operator: i_IPasswordFinder
    inline ::Org::BouncyCastle::OpenSsl::IPasswordFinder* i_IPasswordFinder() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::OpenSsl::IPasswordFinder*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<::Il2CppChar>
    constexpr operator ::ArrayW<::Il2CppChar>() const noexcept {
      return password;
    }
    // Get instance field reference: private readonly System.Char[] _password
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn__password();
    // public System.Void .ctor(System.Byte[] password)
    // Offset: 0x26CAB40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateUtility::PasswordFinder* New_ctor(::ArrayW<uint8_t> password) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::X509CertificateUtility::PasswordFinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateUtility::PasswordFinder*, creationType>(password)));
    }
    // public System.Void .ctor(System.String password)
    // Offset: 0x26C91C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateUtility::PasswordFinder* New_ctor(::StringW password) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::X509CertificateUtility::PasswordFinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateUtility::PasswordFinder*, creationType>(password)));
    }
    // public System.Char[] GetPassword()
    // Offset: 0x26CAC08
    ::ArrayW<::Il2CppChar> GetPassword();
  }; // X509CertificateUtility/PasswordFinder
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateUtility::PasswordFinder), 16 + sizeof(::ArrayW<::Il2CppChar>)> __GlobalNamespace_X509CertificateUtility_PasswordFinderSizeCheck;
  static_assert(sizeof(X509CertificateUtility::PasswordFinder) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::PasswordFinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::PasswordFinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::PasswordFinder::GetPassword
// Il2CppName: GetPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppChar> (GlobalNamespace::X509CertificateUtility::PasswordFinder::*)()>(&GlobalNamespace::X509CertificateUtility::PasswordFinder::GetPassword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::PasswordFinder*), "GetPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
