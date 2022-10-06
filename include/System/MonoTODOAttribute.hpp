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
// Type namespace: System
namespace System {
  // Forward declaring type: MonoTODOAttribute
  class MonoTODOAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MonoTODOAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoTODOAttribute*, "System", "MonoTODOAttribute");
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.MonoTODOAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1053FEC
  class MonoTODOAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String comment
    // Size: 0x8
    // Offset: 0x10
    ::StringW comment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return comment;
    }
    // Get instance field reference: private System.String comment
    [[deprecated("Use field access instead!")]] ::StringW& dyn_comment();
    // public System.Void .ctor(System.String comment)
    // Offset: 0x1BE62F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTODOAttribute* New_ctor(::StringW comment) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MonoTODOAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTODOAttribute*, creationType>(comment)));
    }
    // public System.Void .ctor()
    // Offset: 0x1BE6328
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTODOAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MonoTODOAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTODOAttribute*, creationType>()));
    }
  }; // System.MonoTODOAttribute
  #pragma pack(pop)
  static check_size<sizeof(MonoTODOAttribute), 16 + sizeof(::StringW)> __System_MonoTODOAttributeSizeCheck;
  static_assert(sizeof(MonoTODOAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MonoTODOAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MonoTODOAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
