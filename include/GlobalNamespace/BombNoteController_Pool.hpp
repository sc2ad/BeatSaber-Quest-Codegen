// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BombNoteController
#include "GlobalNamespace/BombNoteController.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BombNoteController::Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombNoteController::Pool*, "", "BombNoteController/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BombNoteController/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class BombNoteController::Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BombNoteController*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x13E2298
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BombNoteController::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BombNoteController::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BombNoteController::Pool*, creationType>()));
    }
  }; // BombNoteController/Pool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BombNoteController::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
