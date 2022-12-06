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
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: TypeDependencyAttribute
  class TypeDependencyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::TypeDependencyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TypeDependencyAttribute*, "System.Runtime.CompilerServices", "TypeDependencyAttribute");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.TypeDependencyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 107139C
  class TypeDependencyAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String typeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW typeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return typeName;
    }
    // Get instance field reference: private System.String typeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_typeName();
    // public System.Void .ctor(System.String typeName)
    // Offset: 0x1E08E60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDependencyAttribute* New_ctor(::StringW typeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::TypeDependencyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDependencyAttribute*, creationType>(typeName)));
    }
  }; // System.Runtime.CompilerServices.TypeDependencyAttribute
  #pragma pack(pop)
  static check_size<sizeof(TypeDependencyAttribute), 16 + sizeof(::StringW)> __System_Runtime_CompilerServices_TypeDependencyAttributeSizeCheck;
  static_assert(sizeof(TypeDependencyAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TypeDependencyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
