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
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: DebuggerNonUserCodeAttribute
  class DebuggerNonUserCodeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::DebuggerNonUserCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerNonUserCodeAttribute*, "System.Diagnostics", "DebuggerNonUserCodeAttribute");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DebuggerNonUserCodeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 118D654
  // [ComVisibleAttribute] Offset: 118D654
  class DebuggerNonUserCodeAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x188001C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebuggerNonUserCodeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::DebuggerNonUserCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebuggerNonUserCodeAttribute*, creationType>()));
    }
  }; // System.Diagnostics.DebuggerNonUserCodeAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::DebuggerNonUserCodeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
