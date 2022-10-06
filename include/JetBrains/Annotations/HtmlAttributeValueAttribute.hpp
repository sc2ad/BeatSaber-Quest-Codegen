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
  // Forward declaring type: HtmlAttributeValueAttribute
  class HtmlAttributeValueAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::HtmlAttributeValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::HtmlAttributeValueAttribute*, "JetBrains.Annotations", "HtmlAttributeValueAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.HtmlAttributeValueAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10AF2A8
  class HtmlAttributeValueAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Name;
    }
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // public System.String get_Name()
    // Offset: 0x2B35EF8
    ::StringW get_Name();
    // private System.Void set_Name(System.String value)
    // Offset: 0x2B35F00
    void set_Name(::StringW value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x2B35ECC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HtmlAttributeValueAttribute* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::HtmlAttributeValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HtmlAttributeValueAttribute*, creationType>(name)));
    }
  }; // JetBrains.Annotations.HtmlAttributeValueAttribute
  #pragma pack(pop)
  static check_size<sizeof(HtmlAttributeValueAttribute), 16 + sizeof(::StringW)> __JetBrains_Annotations_HtmlAttributeValueAttributeSizeCheck;
  static_assert(sizeof(HtmlAttributeValueAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::HtmlAttributeValueAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (JetBrains::Annotations::HtmlAttributeValueAttribute::*)()>(&JetBrains::Annotations::HtmlAttributeValueAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::HtmlAttributeValueAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::HtmlAttributeValueAttribute::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::HtmlAttributeValueAttribute::*)(::StringW)>(&JetBrains::Annotations::HtmlAttributeValueAttribute::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::HtmlAttributeValueAttribute*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::HtmlAttributeValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
