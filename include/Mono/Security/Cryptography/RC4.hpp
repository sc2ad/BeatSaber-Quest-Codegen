// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.SymmetricAlgorithm
#include "System/Security/Cryptography/SymmetricAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeySizes
  class KeySizes;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: RC4
  class RC4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::RC4);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::RC4*, "Mono.Security.Cryptography", "RC4");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.RC4
  // [TokenAttribute] Offset: FFFFFFFF
  class RC4 : public ::System::Security::Cryptography::SymmetricAlgorithm {
    public:
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static ::ArrayW<::System::Security::Cryptography::KeySizes*> _get_s_legalBlockSizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static void _set_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value);
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static ::ArrayW<::System::Security::Cryptography::KeySizes*> _get_s_legalKeySizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static void _set_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value);
    // public System.Void .ctor()
    // Offset: 0x23AF53C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC4* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::RC4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC4*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x23B3848
    static void _cctor();
    // static public Mono.Security.Cryptography.RC4 Create()
    // Offset: 0x23AED04
    static ::Mono::Security::Cryptography::RC4* Create();
    // public override System.Byte[] get_IV()
    // Offset: 0x23B37F8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_IV()
    ::ArrayW<uint8_t> get_IV();
    // public override System.Void set_IV(System.Byte[] value)
    // Offset: 0x23B3844
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_IV(System.Byte[] value)
    void set_IV(::ArrayW<uint8_t> value);
  }; // Mono.Security.Cryptography.RC4
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::RC4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::RC4::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Cryptography::RC4::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RC4*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RC4::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Cryptography::RC4* (*)()>(&Mono::Security::Cryptography::RC4::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RC4*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RC4::get_IV
// Il2CppName: get_IV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::RC4::*)()>(&Mono::Security::Cryptography::RC4::get_IV)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RC4*), "get_IV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::RC4::set_IV
// Il2CppName: set_IV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RC4::*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::RC4::set_IV)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::RC4*), "set_IV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
