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
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: LocalizationRequiredAttribute
  class LocalizationRequiredAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::LocalizationRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::LocalizationRequiredAttribute*, "JetBrains.Annotations", "LocalizationRequiredAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.LocalizationRequiredAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10C50E0
  class LocalizationRequiredAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Boolean <Required>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool Required;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return Required;
    }
    // Get instance field reference: private System.Boolean <Required>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Required$k__BackingField();
    // public System.Boolean get_Required()
    // Offset: 0x2B6B084
    bool get_Required();
    // private System.Void set_Required(System.Boolean value)
    // Offset: 0x2B6B08C
    void set_Required(bool value);
    // public System.Void .ctor()
    // Offset: 0x2B6B028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationRequiredAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::LocalizationRequiredAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationRequiredAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.Boolean required)
    // Offset: 0x2B6B054
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationRequiredAttribute* New_ctor(bool required) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::LocalizationRequiredAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationRequiredAttribute*, creationType>(required)));
    }
  }; // JetBrains.Annotations.LocalizationRequiredAttribute
  #pragma pack(pop)
  static check_size<sizeof(LocalizationRequiredAttribute), 16 + sizeof(bool)> __JetBrains_Annotations_LocalizationRequiredAttributeSizeCheck;
  static_assert(sizeof(LocalizationRequiredAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::LocalizationRequiredAttribute::get_Required
// Il2CppName: get_Required
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (JetBrains::Annotations::LocalizationRequiredAttribute::*)()>(&JetBrains::Annotations::LocalizationRequiredAttribute::get_Required)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::LocalizationRequiredAttribute*), "get_Required", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::LocalizationRequiredAttribute::set_Required
// Il2CppName: set_Required
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::LocalizationRequiredAttribute::*)(bool)>(&JetBrains::Annotations::LocalizationRequiredAttribute::set_Required)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::LocalizationRequiredAttribute*), "set_Required", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::LocalizationRequiredAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::LocalizationRequiredAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
