// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ObservableVariableSO`1
#include "GlobalNamespace/ObservableVariableSO_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Vector3SO
  class Vector3SO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Vector3SO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3SO*, "", "Vector3SO");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: Vector3SO
  // [TokenAttribute] Offset: FFFFFFFF
  class Vector3SO : public ::GlobalNamespace::ObservableVariableSO_1<::UnityEngine::Vector3> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A87C40
    // Implemented from: ObservableVariableSO`1
    // Base method: System.Void ObservableVariableSO_1::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector3SO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Vector3SO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector3SO*, creationType>()));
    }
  }; // Vector3SO
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Vector3SO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
