// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.YieldInstruction
#include "UnityEngine/YieldInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitForEndOfFrame
  class WaitForEndOfFrame;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::WaitForEndOfFrame);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitForEndOfFrame*, "UnityEngine", "WaitForEndOfFrame");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.WaitForEndOfFrame
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 11A62AC
  class WaitForEndOfFrame : public ::UnityEngine::YieldInstruction {
    public:
    // public System.Void .ctor()
    // Offset: 0x270545C
    // Implemented from: UnityEngine.YieldInstruction
    // Base method: System.Void YieldInstruction::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaitForEndOfFrame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::WaitForEndOfFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaitForEndOfFrame*, creationType>()));
    }
  }; // UnityEngine.WaitForEndOfFrame
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::WaitForEndOfFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
