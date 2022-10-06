// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Forward declaring type: NativeHeaderAttribute
  class NativeHeaderAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Bindings::NativeHeaderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeHeaderAttribute*, "UnityEngine.Bindings", "NativeHeaderAttribute");
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeHeaderAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 106905C
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class NativeHeaderAttribute : public ::System::Attribute {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x10695E4
    // private System.String <Header>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Header;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Header;
    }
    // Get instance field reference: private System.String <Header>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Header$k__BackingField();
    // public System.Void set_Header(System.String value)
    // Offset: 0x2B43C6C
    void set_Header(::StringW value);
    // public System.Void .ctor(System.String header)
    // Offset: 0x2B43C74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeHeaderAttribute* New_ctor(::StringW header) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeHeaderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeHeaderAttribute*, creationType>(header)));
    }
  }; // UnityEngine.Bindings.NativeHeaderAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeHeaderAttribute), 16 + sizeof(::StringW)> __UnityEngine_Bindings_NativeHeaderAttributeSizeCheck;
  static_assert(sizeof(NativeHeaderAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeHeaderAttribute::set_Header
// Il2CppName: set_Header
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeHeaderAttribute::*)(::StringW)>(&UnityEngine::Bindings::NativeHeaderAttribute::set_Header)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeHeaderAttribute*), "set_Header", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeHeaderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
