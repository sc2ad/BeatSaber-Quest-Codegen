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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: AspRequiredAttributeAttribute
  class AspRequiredAttributeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::AspRequiredAttributeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspRequiredAttributeAttribute*, "JetBrains.Annotations", "AspRequiredAttributeAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.AspRequiredAttributeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11E6794
  class AspRequiredAttributeAttribute : public ::System::Attribute {
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
    // private System.String <Attribute>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Attribute;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Attribute;
    }
    // Get instance field reference: private System.String <Attribute>k__BackingField
    ::StringW& dyn_$Attribute$k__BackingField();
    // public System.String get_Attribute()
    // Offset: 0x2A46E94
    ::StringW get_Attribute();
    // private System.Void set_Attribute(System.String value)
    // Offset: 0x2A46E9C
    void set_Attribute(::StringW value);
    // public System.Void .ctor(System.String attribute)
    // Offset: 0x2A46E68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspRequiredAttributeAttribute* New_ctor(::StringW attribute) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::AspRequiredAttributeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspRequiredAttributeAttribute*, creationType>(attribute)));
    }
  }; // JetBrains.Annotations.AspRequiredAttributeAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspRequiredAttributeAttribute), 16 + sizeof(::StringW)> __JetBrains_Annotations_AspRequiredAttributeAttributeSizeCheck;
  static_assert(sizeof(AspRequiredAttributeAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AspRequiredAttributeAttribute::get_Attribute
// Il2CppName: get_Attribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (JetBrains::Annotations::AspRequiredAttributeAttribute::*)()>(&JetBrains::Annotations::AspRequiredAttributeAttribute::get_Attribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspRequiredAttributeAttribute*), "get_Attribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspRequiredAttributeAttribute::set_Attribute
// Il2CppName: set_Attribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspRequiredAttributeAttribute::*)(::StringW)>(&JetBrains::Annotations::AspRequiredAttributeAttribute::set_Attribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspRequiredAttributeAttribute*), "set_Attribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspRequiredAttributeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
