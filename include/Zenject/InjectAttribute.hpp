// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InjectAttributeBase
#include "Zenject/InjectAttributeBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectAttribute
  class InjectAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::InjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectAttribute*, "Zenject", "InjectAttribute");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1200510
  class InjectAttribute : public ::Zenject::InjectAttributeBase {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A82F20
    // Implemented from: Zenject.InjectAttributeBase
    // Base method: System.Void InjectAttributeBase::.ctor()
    // Base method: System.Void PreserveAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InjectAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectAttribute*, creationType>()));
    }
  }; // Zenject.InjectAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
