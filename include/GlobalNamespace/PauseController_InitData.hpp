// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PauseController
#include "GlobalNamespace/PauseController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PauseController::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseController::InitData*, "", "PauseController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: PauseController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class PauseController::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Boolean startPaused
    // Size: 0x1
    // Offset: 0x10
    bool startPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return startPaused;
    }
    // Get instance field reference: public readonly System.Boolean startPaused
    [[deprecated("Use field access instead!")]] bool& dyn_startPaused();
    // public System.Void .ctor(System.Boolean startPaused)
    // Offset: 0x1363000
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseController::InitData* New_ctor(bool startPaused) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PauseController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseController::InitData*, creationType>(startPaused)));
    }
  }; // PauseController/InitData
  #pragma pack(pop)
  static check_size<sizeof(PauseController::InitData), 16 + sizeof(bool)> __GlobalNamespace_PauseController_InitDataSizeCheck;
  static_assert(sizeof(PauseController::InitData) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PauseController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
