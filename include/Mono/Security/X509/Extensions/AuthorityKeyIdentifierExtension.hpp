// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.X509.X509Extension
#include "Mono/Security/X509/X509Extension.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Mono.Security.X509.Extensions
namespace Mono::Security::X509::Extensions {
  // Forward declaring type: AuthorityKeyIdentifierExtension
  class AuthorityKeyIdentifierExtension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*, "Mono.Security.X509.Extensions", "AuthorityKeyIdentifierExtension");
// Type namespace: Mono.Security.X509.Extensions
namespace Mono::Security::X509::Extensions {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthorityKeyIdentifierExtension : public ::Mono::Security::X509::X509Extension {
    public:
    public:
    // private System.Byte[] aki
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> aki;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept {
      return aki;
    }
    // Get instance field reference: private System.Byte[] aki
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_aki();
    // public System.Byte[] get_Identifier()
    // Offset: 0x23B6F7C
    ::ArrayW<uint8_t> get_Identifier();
    // public System.Void .ctor(Mono.Security.X509.X509Extension extension)
    // Offset: 0x23B6D3C
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.Void X509Extension::.ctor(Mono.Security.X509.X509Extension extension)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthorityKeyIdentifierExtension* New_ctor(::Mono::Security::X509::X509Extension* extension) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthorityKeyIdentifierExtension*, creationType>(extension)));
    }
    // protected override System.Void Decode()
    // Offset: 0x23B6D44
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.Void X509Extension::Decode()
    void Decode();
    // protected override System.Void Encode()
    // Offset: 0x23B6E5C
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.Void X509Extension::Encode()
    void Encode();
    // public override System.String ToString()
    // Offset: 0x23B6FF8
    // Implemented from: Mono.Security.X509.X509Extension
    // Base method: System.String X509Extension::ToString()
    ::StringW ToString();
  }; // Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
  #pragma pack(pop)
  static check_size<sizeof(AuthorityKeyIdentifierExtension), 40 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_X509_Extensions_AuthorityKeyIdentifierExtensionSizeCheck;
  static_assert(sizeof(AuthorityKeyIdentifierExtension) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::get_Identifier
// Il2CppName: get_Identifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::get_Identifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*), "get_Identifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Decode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::Encode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::*)()>(&Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
