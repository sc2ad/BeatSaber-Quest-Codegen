// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissScoringElement
#include "GlobalNamespace/MissScoringElement.hpp"
// Including type: ScoringElement/Pool`1
#include "GlobalNamespace/ScoringElement_Pool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissScoringElement::Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissScoringElement::Pool*, "", "MissScoringElement/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MissScoringElement/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class MissScoringElement::Pool : public ::GlobalNamespace::ScoringElement::Pool_1<::GlobalNamespace::MissScoringElement*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x13458FC
    // Implemented from: ScoringElement/Pool`1
    // Base method: System.Void Pool_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissScoringElement::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissScoringElement::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissScoringElement::Pool*, creationType>()));
    }
  }; // MissScoringElement/Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissScoringElement::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
