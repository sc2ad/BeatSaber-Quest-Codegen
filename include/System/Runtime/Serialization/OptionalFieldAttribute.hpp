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
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: OptionalFieldAttribute
  class OptionalFieldAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::OptionalFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OptionalFieldAttribute*, "System.Runtime.Serialization", "OptionalFieldAttribute");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.OptionalFieldAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 11ABEA4
  // [AttributeUsageAttribute] Offset: 11ABEA4
  class OptionalFieldAttribute : public ::System::Attribute {
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
    // private System.Int32 versionAdded
    // Size: 0x4
    // Offset: 0x10
    int versionAdded;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return versionAdded;
    }
    // Get instance field reference: private System.Int32 versionAdded
    int& dyn_versionAdded();
    // public System.Void set_VersionAdded(System.Int32 value)
    // Offset: 0x1605E18
    void set_VersionAdded(int value);
    // public System.Void .ctor()
    // Offset: 0x1605E08
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OptionalFieldAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::OptionalFieldAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OptionalFieldAttribute*, creationType>()));
    }
  }; // System.Runtime.Serialization.OptionalFieldAttribute
  #pragma pack(pop)
  static check_size<sizeof(OptionalFieldAttribute), 16 + sizeof(int)> __System_Runtime_Serialization_OptionalFieldAttributeSizeCheck;
  static_assert(sizeof(OptionalFieldAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::OptionalFieldAttribute::set_VersionAdded
// Il2CppName: set_VersionAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::OptionalFieldAttribute::*)(int)>(&System::Runtime::Serialization::OptionalFieldAttribute::set_VersionAdded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::OptionalFieldAttribute*), "set_VersionAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::OptionalFieldAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
