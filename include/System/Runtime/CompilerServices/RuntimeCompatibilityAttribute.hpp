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
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: RuntimeCompatibilityAttribute
  class RuntimeCompatibilityAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*, "System.Runtime.CompilerServices", "RuntimeCompatibilityAttribute");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 11ACAF0
  class RuntimeCompatibilityAttribute : public ::System::Attribute {
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
    // private System.Boolean m_wrapNonExceptionThrows
    // Size: 0x1
    // Offset: 0x10
    bool m_wrapNonExceptionThrows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_wrapNonExceptionThrows;
    }
    // Get instance field reference: private System.Boolean m_wrapNonExceptionThrows
    bool& dyn_m_wrapNonExceptionThrows();
    // public System.Void set_WrapNonExceptionThrows(System.Boolean value)
    // Offset: 0x1D4944C
    void set_WrapNonExceptionThrows(bool value);
    // public System.Void .ctor()
    // Offset: 0x1D49444
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeCompatibilityAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeCompatibilityAttribute*, creationType>()));
    }
  }; // System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
  #pragma pack(pop)
  static check_size<sizeof(RuntimeCompatibilityAttribute), 16 + sizeof(bool)> __System_Runtime_CompilerServices_RuntimeCompatibilityAttributeSizeCheck;
  static_assert(sizeof(RuntimeCompatibilityAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows
// Il2CppName: set_WrapNonExceptionThrows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::*)(bool)>(&System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*), "set_WrapNonExceptionThrows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
