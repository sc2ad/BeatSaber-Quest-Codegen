// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: CustomSignalEventDrawer
  class CustomSignalEventDrawer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::CustomSignalEventDrawer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::CustomSignalEventDrawer*, "UnityEngine.Timeline", "CustomSignalEventDrawer");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.CustomSignalEventDrawer
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomSignalEventDrawer : public ::UnityEngine::PropertyAttribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x1E12680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomSignalEventDrawer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::CustomSignalEventDrawer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomSignalEventDrawer*, creationType>()));
    }
  }; // UnityEngine.Timeline.CustomSignalEventDrawer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::CustomSignalEventDrawer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
