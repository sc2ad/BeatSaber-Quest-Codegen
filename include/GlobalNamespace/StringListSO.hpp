// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StringListSO
  class StringListSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StringListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringListSO*, "", "StringListSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: StringListSO
  // [TokenAttribute] Offset: FFFFFFFF
  class StringListSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // [ReorderableAttribute] Offset: 0x10EB658
    // private System.String[] _strings
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> strings;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String[] _strings
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn__strings();
    // public System.String[] get_strings()
    // Offset: 0x2ABD680
    ::ArrayW<::StringW> get_strings();
    // public System.Void .ctor()
    // Offset: 0x2ABD688
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringListSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StringListSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringListSO*, creationType>()));
    }
  }; // StringListSO
  #pragma pack(pop)
  static check_size<sizeof(StringListSO), 24 + sizeof(::ArrayW<::StringW>)> __GlobalNamespace_StringListSOSizeCheck;
  static_assert(sizeof(StringListSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StringListSO::get_strings
// Il2CppName: get_strings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (GlobalNamespace::StringListSO::*)()>(&GlobalNamespace::StringListSO::get_strings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StringListSO*), "get_strings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StringListSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
