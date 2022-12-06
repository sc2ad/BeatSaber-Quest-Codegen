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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyDescriptionAttribute
  class AssemblyDescriptionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::AssemblyDescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyDescriptionAttribute*, "System.Reflection", "AssemblyDescriptionAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyDescriptionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 106DAA8
  // [ComVisibleAttribute] Offset: 106DAA8
  class AssemblyDescriptionAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String m_description
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_description;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_description;
    }
    // Get instance field reference: private System.String m_description
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_description();
    // public System.Void .ctor(System.String description)
    // Offset: 0x22E4AC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyDescriptionAttribute* New_ctor(::StringW description) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyDescriptionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyDescriptionAttribute*, creationType>(description)));
    }
  }; // System.Reflection.AssemblyDescriptionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyDescriptionAttribute), 16 + sizeof(::StringW)> __System_Reflection_AssemblyDescriptionAttributeSizeCheck;
  static_assert(sizeof(AssemblyDescriptionAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyDescriptionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
