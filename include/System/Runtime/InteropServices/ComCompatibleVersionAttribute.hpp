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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: ComCompatibleVersionAttribute
  class ComCompatibleVersionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::ComCompatibleVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::ComCompatibleVersionAttribute*, "System.Runtime.InteropServices", "ComCompatibleVersionAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.ComCompatibleVersionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10718E8
  // [ComVisibleAttribute] Offset: 10718E8
  class ComCompatibleVersionAttribute : public ::System::Attribute {
    public:
    public:
    // System.Int32 _major
    // Size: 0x4
    // Offset: 0x10
    int major;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _minor
    // Size: 0x4
    // Offset: 0x14
    int minor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _build
    // Size: 0x4
    // Offset: 0x18
    int build;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _revision
    // Size: 0x4
    // Offset: 0x1C
    int revision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Int32 _major
    [[deprecated("Use field access instead!")]] int& dyn__major();
    // Get instance field reference: System.Int32 _minor
    [[deprecated("Use field access instead!")]] int& dyn__minor();
    // Get instance field reference: System.Int32 _build
    [[deprecated("Use field access instead!")]] int& dyn__build();
    // Get instance field reference: System.Int32 _revision
    [[deprecated("Use field access instead!")]] int& dyn__revision();
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build, System.Int32 revision)
    // Offset: 0x1E098C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComCompatibleVersionAttribute* New_ctor(int major, int minor, int build, int revision) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::ComCompatibleVersionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComCompatibleVersionAttribute*, creationType>(major, minor, build, revision)));
    }
  }; // System.Runtime.InteropServices.ComCompatibleVersionAttribute
  #pragma pack(pop)
  static check_size<sizeof(ComCompatibleVersionAttribute), 28 + sizeof(int)> __System_Runtime_InteropServices_ComCompatibleVersionAttributeSizeCheck;
  static_assert(sizeof(ComCompatibleVersionAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::ComCompatibleVersionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
