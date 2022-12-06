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
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: TripleDES
  class TripleDES;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::TripleDES);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::TripleDES*, "System.Security.Cryptography", "TripleDES");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.TripleDES
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1070224
  class TripleDES : public ::System::Security::Cryptography::SymmetricAlgorithm {
    public:
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static ::ArrayW<::System::Security::Cryptography::KeySizes*> _get_s_legalBlockSizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
    static void _set_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value);
    // Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static ::ArrayW<::System::Security::Cryptography::KeySizes*> _get_s_legalKeySizes();
    // Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
    static void _set_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value);
    // static private System.Void .cctor()
    // Offset: 0x1BF6DDC
    static void _cctor();
    // static public System.Security.Cryptography.TripleDES Create()
    // Offset: 0x1BF6A34
    static ::System::Security::Cryptography::TripleDES* Create();
    // static public System.Boolean IsWeakKey(System.Byte[] rgbKey)
    // Offset: 0x1BF6730
    static bool IsWeakKey(::ArrayW<uint8_t> rgbKey);
    // static private System.Boolean EqualBytes(System.Byte[] rgbKey, System.Int32 start1, System.Int32 start2, System.Int32 count)
    // Offset: 0x1BF6BF8
    static bool EqualBytes(::ArrayW<uint8_t> rgbKey, int start1, int start2, int count);
    // static private System.Boolean IsLegalKeySize(System.Byte[] rgbKey)
    // Offset: 0x1BF6AFC
    static bool IsLegalKeySize(::ArrayW<uint8_t> rgbKey);
    // public override System.Byte[] get_Key()
    // Offset: 0x1BF665C
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_Key()
    ::ArrayW<uint8_t> get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x1BF6884
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::ArrayW<uint8_t> value);
    // protected System.Void .ctor()
    // Offset: 0x1BF65B8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TripleDES* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::TripleDES::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TripleDES*, creationType>()));
    }
  }; // System.Security.Cryptography.TripleDES
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDES::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::TripleDES::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDES*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDES::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::TripleDES* (*)()>(&System::Security::Cryptography::TripleDES::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDES*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDES::IsWeakKey
// Il2CppName: IsWeakKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::TripleDES::IsWeakKey)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDES*), "IsWeakKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDES::EqualBytes
// Il2CppName: EqualBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, int, int, int)>(&System::Security::Cryptography::TripleDES::EqualBytes)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* start1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* start2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDES*), "EqualBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey, start1, start2, count});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDES::IsLegalKeySize
// Il2CppName: IsLegalKeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::TripleDES::IsLegalKeySize)> {
  static const MethodInfo* get() {
    static auto* rgbKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDES*), "IsLegalKeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbKey});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDES::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::TripleDES::*)()>(&System::Security::Cryptography::TripleDES::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDES*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDES::set_Key
// Il2CppName: set_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::TripleDES::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::TripleDES::set_Key)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDES*), "set_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDES::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
