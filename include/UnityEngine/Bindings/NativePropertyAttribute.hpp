// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Bindings.NativeMethodAttribute
#include "UnityEngine/Bindings/NativeMethodAttribute.hpp"
// Including type: UnityEngine.Bindings.TargetType
#include "UnityEngine/Bindings/TargetType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Forward declaring type: NativePropertyAttribute
  class NativePropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Bindings::NativePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativePropertyAttribute*, "UnityEngine.Bindings", "NativePropertyAttribute");
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativePropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11BBB6C
  class NativePropertyAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [DebuggerBrowsableAttribute] Offset: 0x11BC1C8
    // private UnityEngine.Bindings.TargetType <TargetType>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::Bindings::TargetType TargetType;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bindings::TargetType) == 0x4);
    public:
    // Creating conversion operator: operator ::UnityEngine::Bindings::TargetType
    constexpr operator ::UnityEngine::Bindings::TargetType() const noexcept {
      return TargetType;
    }
    // Get instance field reference: private UnityEngine.Bindings.TargetType <TargetType>k__BackingField
    ::UnityEngine::Bindings::TargetType& dyn_$TargetType$k__BackingField();
    // public System.Void set_TargetType(UnityEngine.Bindings.TargetType value)
    // Offset: 0x2A8F6DC
    void set_TargetType(::UnityEngine::Bindings::TargetType value);
    // public System.Void .ctor(System.String name, System.Boolean isFree, UnityEngine.Bindings.TargetType targetType)
    // Offset: 0x2A8F6F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativePropertyAttribute* New_ctor(::StringW name, bool isFree, ::UnityEngine::Bindings::TargetType targetType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativePropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativePropertyAttribute*, creationType>(name, isFree, targetType)));
    }
    // public System.Void .ctor()
    // Offset: 0x2A8F6E4
    // Implemented from: UnityEngine.Bindings.NativeMethodAttribute
    // Base method: System.Void NativeMethodAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativePropertyAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativePropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativePropertyAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x2A8F6EC
    // Implemented from: UnityEngine.Bindings.NativeMethodAttribute
    // Base method: System.Void NativeMethodAttribute::.ctor(System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativePropertyAttribute* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativePropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativePropertyAttribute*, creationType>(name)));
    }
  }; // UnityEngine.Bindings.NativePropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativePropertyAttribute), 28 + sizeof(::UnityEngine::Bindings::TargetType)> __UnityEngine_Bindings_NativePropertyAttributeSizeCheck;
  static_assert(sizeof(NativePropertyAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::NativePropertyAttribute::set_TargetType
// Il2CppName: set_TargetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativePropertyAttribute::*)(::UnityEngine::Bindings::TargetType)>(&UnityEngine::Bindings::NativePropertyAttribute::set_TargetType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Bindings", "TargetType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativePropertyAttribute*), "set_TargetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativePropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativePropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativePropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
