// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.SymmetricAlgorithm
#include "System/Security/Cryptography/SymmetricAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeySizes
  class KeySizes;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RC2
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5F394
  class RC2 : public System::Security::Cryptography::SymmetricAlgorithm {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // protected System.Int32 EffectiveKeySizeValue
    // Size: 0x4
    // Offset: 0x44
    int EffectiveKeySizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return EffectiveKeySizeValue;
    }
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static ::ArrayW<System::Security::Cryptography::KeySizes*> _get_s_legalBlockSizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static void _set_s_legalBlockSizes(::ArrayW<System::Security::Cryptography::KeySizes*> value);
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static ::ArrayW<System::Security::Cryptography::KeySizes*> _get_s_legalKeySizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static void _set_s_legalKeySizes(::ArrayW<System::Security::Cryptography::KeySizes*> value);
    // Get instance field reference: protected System.Int32 EffectiveKeySizeValue
    int& dyn_EffectiveKeySizeValue();
    // public System.Int32 get_EffectiveKeySize()
    // Offset: 0x1A78F94
    int get_EffectiveKeySize();
    // static private System.Void .cctor()
    // Offset: 0x1A790BC
    static void _cctor();
    // static public System.Security.Cryptography.RC2 Create()
    // Offset: 0x1A79064
    static System::Security::Cryptography::RC2* Create();
    // public override System.Int32 get_KeySize()
    // Offset: 0x1A78FAC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Int32 SymmetricAlgorithm::get_KeySize()
    int get_KeySize();
    // public override System.Void set_KeySize(System.Int32 value)
    // Offset: 0x1A78FB4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_KeySize(System.Int32 value)
    void set_KeySize(int value);
    // protected System.Void .ctor()
    // Offset: 0x1A78EFC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RC2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RC2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RC2*, creationType>()));
    }
  }; // System.Security.Cryptography.RC2
  #pragma pack(pop)
  static check_size<sizeof(RC2), 68 + sizeof(int)> __System_Security_Cryptography_RC2SizeCheck;
  static_assert(sizeof(RC2) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RC2*, "System.Security.Cryptography", "RC2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RC2::get_EffectiveKeySize
// Il2CppName: get_EffectiveKeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RC2::*)()>(&System::Security::Cryptography::RC2::get_EffectiveKeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RC2*), "get_EffectiveKeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RC2::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::RC2::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RC2*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RC2::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::RC2* (*)()>(&System::Security::Cryptography::RC2::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RC2*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RC2::get_KeySize
// Il2CppName: get_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::RC2::*)()>(&System::Security::Cryptography::RC2::get_KeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RC2*), "get_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RC2::set_KeySize
// Il2CppName: set_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RC2::*)(int)>(&System::Security::Cryptography::RC2::set_KeySize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RC2*), "set_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RC2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
