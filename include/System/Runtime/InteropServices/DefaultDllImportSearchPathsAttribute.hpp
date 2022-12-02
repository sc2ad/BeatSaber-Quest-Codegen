// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.DllImportSearchPath
#include "System/Runtime/InteropServices/DllImportSearchPath.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: DefaultDllImportSearchPathsAttribute
  class DefaultDllImportSearchPathsAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*, "System.Runtime.InteropServices", "DefaultDllImportSearchPathsAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.DefaultDllImportSearchPathsAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1071910
  // [ComVisibleAttribute] Offset: 1071910
  class DefaultDllImportSearchPathsAttribute : public ::System::Attribute {
    public:
    public:
    // System.Runtime.InteropServices.DllImportSearchPath _paths
    // Size: 0x4
    // Offset: 0x10
    ::System::Runtime::InteropServices::DllImportSearchPath paths;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::DllImportSearchPath) == 0x4);
    public:
    // Creating conversion operator: operator ::System::Runtime::InteropServices::DllImportSearchPath
    constexpr operator ::System::Runtime::InteropServices::DllImportSearchPath() const noexcept {
      return paths;
    }
    // Get instance field reference: System.Runtime.InteropServices.DllImportSearchPath _paths
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::DllImportSearchPath& dyn__paths();
    // public System.Void .ctor(System.Runtime.InteropServices.DllImportSearchPath paths)
    // Offset: 0x1E0DE00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultDllImportSearchPathsAttribute* New_ctor(::System::Runtime::InteropServices::DllImportSearchPath paths) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultDllImportSearchPathsAttribute*, creationType>(paths)));
    }
  }; // System.Runtime.InteropServices.DefaultDllImportSearchPathsAttribute
  #pragma pack(pop)
  static check_size<sizeof(DefaultDllImportSearchPathsAttribute), 16 + sizeof(::System::Runtime::InteropServices::DllImportSearchPath)> __System_Runtime_InteropServices_DefaultDllImportSearchPathsAttributeSizeCheck;
  static_assert(sizeof(DefaultDllImportSearchPathsAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
