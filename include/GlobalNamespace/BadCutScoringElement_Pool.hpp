// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BadCutScoringElement
#include "GlobalNamespace/BadCutScoringElement.hpp"
// Including type: ScoringElement/Pool`1
#include "GlobalNamespace/ScoringElement_Pool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BadCutScoringElement::Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadCutScoringElement::Pool*, "", "BadCutScoringElement/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BadCutScoringElement/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class BadCutScoringElement::Pool : public ::GlobalNamespace::ScoringElement::Pool_1<::GlobalNamespace::BadCutScoringElement*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x139D84C
    // Implemented from: ScoringElement/Pool`1
    // Base method: System.Void Pool_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BadCutScoringElement::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BadCutScoringElement::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BadCutScoringElement::Pool*, creationType>()));
    }
  }; // BadCutScoringElement/Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BadCutScoringElement::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
