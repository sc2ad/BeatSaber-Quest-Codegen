// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ContextMenuItemAttribute
  class ContextMenuItemAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ContextMenuItemAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContextMenuItemAttribute*, "UnityEngine", "ContextMenuItemAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ContextMenuItemAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11C0020
  class ContextMenuItemAttribute : public ::UnityEngine::PropertyAttribute {
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
    // public readonly System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String function
    // Size: 0x8
    // Offset: 0x18
    ::StringW function;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.String name
    ::StringW& dyn_name();
    // Get instance field reference: public readonly System.String function
    ::StringW& dyn_function();
    // public System.Void .ctor(System.String name, System.String function)
    // Offset: 0x1F2D56C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextMenuItemAttribute* New_ctor(::StringW name, ::StringW function) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ContextMenuItemAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextMenuItemAttribute*, creationType>(name, function)));
    }
  }; // UnityEngine.ContextMenuItemAttribute
  #pragma pack(pop)
  static check_size<sizeof(ContextMenuItemAttribute), 24 + sizeof(::StringW)> __UnityEngine_ContextMenuItemAttributeSizeCheck;
  static_assert(sizeof(ContextMenuItemAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ContextMenuItemAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
