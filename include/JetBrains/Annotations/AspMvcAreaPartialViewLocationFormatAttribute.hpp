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
  // Forward declaring type: AspMvcAreaPartialViewLocationFormatAttribute
  class AspMvcAreaPartialViewLocationFormatAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcAreaPartialViewLocationFormatAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10C71D0
  class AspMvcAreaPartialViewLocationFormatAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String <Format>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Format;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Format;
    }
    // Get instance field reference: private System.String <Format>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Format$k__BackingField();
    // public System.String get_Format()
    // Offset: 0x2B6177C
    ::StringW get_Format();
    // private System.Void set_Format(System.String value)
    // Offset: 0x2B61784
    void set_Format(::StringW value);
    // public System.Void .ctor(System.String format)
    // Offset: 0x2B61750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcAreaPartialViewLocationFormatAttribute* New_ctor(::StringW format) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcAreaPartialViewLocationFormatAttribute*, creationType>(format)));
    }
  }; // JetBrains.Annotations.AspMvcAreaPartialViewLocationFormatAttribute
  #pragma pack(pop)
  static check_size<sizeof(AspMvcAreaPartialViewLocationFormatAttribute), 16 + sizeof(::StringW)> __JetBrains_Annotations_AspMvcAreaPartialViewLocationFormatAttributeSizeCheck;
  static_assert(sizeof(AspMvcAreaPartialViewLocationFormatAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute::get_Format
// Il2CppName: get_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute::*)()>(&JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute::get_Format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute*), "get_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute::set_Format
// Il2CppName: set_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute::*)(::StringW)>(&JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute::set_Format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute*), "set_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::AspMvcAreaPartialViewLocationFormatAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
