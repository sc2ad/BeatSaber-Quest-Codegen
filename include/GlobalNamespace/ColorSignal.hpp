// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GenericSignal`1
#include "GlobalNamespace/GenericSignal_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorSignal
  class ColorSignal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorSignal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSignal*, "", "ColorSignal");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ColorSignal
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorSignal : public ::GlobalNamespace::GenericSignal_1<::UnityEngine::Color> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1565D78
    // Implemented from: GenericSignal`1
    // Base method: System.Void GenericSignal_1::.ctor()
    // Base method: System.Void Signal::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSignal* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorSignal::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSignal*, creationType>()));
    }
  }; // ColorSignal
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorSignal::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
