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
  // Forward declaring type: TypeForwardedFromAttribute
  class TypeForwardedFromAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::TypeForwardedFromAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TypeForwardedFromAttribute*, "System.Runtime.CompilerServices", "TypeForwardedFromAttribute");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.TypeForwardedFromAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11ACB58
  class TypeForwardedFromAttribute : public ::System::Attribute {
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
    // private System.String assemblyFullName
    // Size: 0x8
    // Offset: 0x10
    ::StringW assemblyFullName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return assemblyFullName;
    }
    // Get instance field reference: private System.String assemblyFullName
    ::StringW& dyn_assemblyFullName();
    // public System.String get_AssemblyFullName()
    // Offset: 0x1D49BDC
    ::StringW get_AssemblyFullName();
    // public System.Void .ctor(System.String assemblyFullName)
    // Offset: 0x1D49B34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeForwardedFromAttribute* New_ctor(::StringW assemblyFullName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::TypeForwardedFromAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeForwardedFromAttribute*, creationType>(assemblyFullName)));
    }
  }; // System.Runtime.CompilerServices.TypeForwardedFromAttribute
  #pragma pack(pop)
  static check_size<sizeof(TypeForwardedFromAttribute), 16 + sizeof(::StringW)> __System_Runtime_CompilerServices_TypeForwardedFromAttributeSizeCheck;
  static_assert(sizeof(TypeForwardedFromAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TypeForwardedFromAttribute::get_AssemblyFullName
// Il2CppName: get_AssemblyFullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::CompilerServices::TypeForwardedFromAttribute::*)()>(&System::Runtime::CompilerServices::TypeForwardedFromAttribute::get_AssemblyFullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::TypeForwardedFromAttribute*), "get_AssemblyFullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::TypeForwardedFromAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
