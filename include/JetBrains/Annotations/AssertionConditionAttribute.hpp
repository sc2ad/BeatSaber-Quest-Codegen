// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.AssertionConditionType
#include "JetBrains/Annotations/AssertionConditionType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: AssertionConditionAttribute
  class AssertionConditionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::AssertionConditionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AssertionConditionAttribute*, "JetBrains.Annotations", "AssertionConditionAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.AssertionConditionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10AF308
  class AssertionConditionAttribute : public ::System::Attribute {
    public:
    public:
    // private JetBrains.Annotations.AssertionConditionType <ConditionType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::JetBrains::Annotations::AssertionConditionType ConditionType;
    // Field size check
    static_assert(sizeof(::JetBrains::Annotations::AssertionConditionType) == 0x4);
    public:
    // Creating conversion operator: operator ::JetBrains::Annotations::AssertionConditionType
    constexpr operator ::JetBrains::Annotations::AssertionConditionType() const noexcept {
      return ConditionType;
    }
    // Get instance field reference: private JetBrains.Annotations.AssertionConditionType <ConditionType>k__BackingField
    [[deprecated("Use field access instead!")]] ::JetBrains::Annotations::AssertionConditionType& dyn_$ConditionType$k__BackingField();
    // public JetBrains.Annotations.AssertionConditionType get_ConditionType()
    // Offset: 0x2B35D98
    ::JetBrains::Annotations::AssertionConditionType get_ConditionType();
    // private System.Void set_ConditionType(JetBrains.Annotations.AssertionConditionType value)
    // Offset: 0x2B35DA0
    void set_ConditionType(::JetBrains::Annotations::AssertionConditionType value);
    // public System.Void .ctor(JetBrains.Annotations.AssertionConditionType conditionType)
    // Offset: 0x2B35D6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssertionConditionAttribute* New_ctor(::JetBrains::Annotations::AssertionConditionType conditionType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::AssertionConditionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssertionConditionAttribute*, creationType>(conditionType)));
    }
  }; // JetBrains.Annotations.AssertionConditionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssertionConditionAttribute), 16 + sizeof(::JetBrains::Annotations::AssertionConditionType)> __JetBrains_Annotations_AssertionConditionAttributeSizeCheck;
  static_assert(sizeof(AssertionConditionAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AssertionConditionAttribute::get_ConditionType
// Il2CppName: get_ConditionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::JetBrains::Annotations::AssertionConditionType (JetBrains::Annotations::AssertionConditionAttribute::*)()>(&JetBrains::Annotations::AssertionConditionAttribute::get_ConditionType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AssertionConditionAttribute*), "get_ConditionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AssertionConditionAttribute::set_ConditionType
// Il2CppName: set_ConditionType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AssertionConditionAttribute::*)(::JetBrains::Annotations::AssertionConditionType)>(&JetBrains::Annotations::AssertionConditionAttribute::set_ConditionType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("JetBrains.Annotations", "AssertionConditionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AssertionConditionAttribute*), "set_ConditionType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AssertionConditionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
