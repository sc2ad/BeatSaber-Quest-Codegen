// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SliderController/Pool
#include "GlobalNamespace/SliderController_Pool.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SliderController
  class SliderController;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderController::Pool::Short);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderController::Pool::Short*, "", "SliderController/Pool/Short");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SliderController/Pool/Short
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderController::Pool::Short : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::SliderController*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x13CB6EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderController::Pool::Short* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderController::Pool::Short::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderController::Pool::Short*, creationType>()));
    }
  }; // SliderController/Pool/Short
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderController::Pool::Short::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
