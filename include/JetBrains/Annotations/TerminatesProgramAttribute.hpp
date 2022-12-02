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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: TerminatesProgramAttribute
  class TerminatesProgramAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::TerminatesProgramAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::TerminatesProgramAttribute*, "JetBrains.Annotations", "TerminatesProgramAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.TerminatesProgramAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10C5588
  // [ObsoleteAttribute] Offset: 10C5588
  class TerminatesProgramAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x2B6B4C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TerminatesProgramAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::TerminatesProgramAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TerminatesProgramAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.TerminatesProgramAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::TerminatesProgramAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
