// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GenericSignal`1
#include "GlobalNamespace/GenericSignal_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BoolSignal
  class BoolSignal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BoolSignal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolSignal*, "", "BoolSignal");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BoolSignal
  // [TokenAttribute] Offset: FFFFFFFF
  class BoolSignal : public ::GlobalNamespace::GenericSignal_1<bool> {
    public:
    // public System.Void .ctor()
    // Offset: 0x15F1FC4
    // Implemented from: GenericSignal`1
    // Base method: System.Void GenericSignal_1::.ctor()
    // Base method: System.Void Signal::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoolSignal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BoolSignal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoolSignal*, creationType>()));
    }
  }; // BoolSignal
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BoolSignal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
