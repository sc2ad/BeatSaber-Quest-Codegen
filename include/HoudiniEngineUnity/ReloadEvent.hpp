// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`3
#include "UnityEngine/Events/UnityEvent_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_HoudiniAsset
  class HEU_HoudiniAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // WARNING Size may be invalid!
  // Autogenerated type: HoudiniEngineUnity.ReloadEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class ReloadEvent : public UnityEngine::Events::UnityEvent_3<HoudiniEngineUnity::HEU_HoudiniAsset*, bool, System::Collections::Generic::List_1<UnityEngine::GameObject*>*> {
    public:
    // Creating value type constructor for type: ReloadEvent
    ReloadEvent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x17084A4
    // Implemented from: UnityEngine.Events.UnityEvent`3
    // Base method: System.Void UnityEvent_3::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReloadEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::ReloadEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReloadEvent*, creationType>()));
    }
  }; // HoudiniEngineUnity.ReloadEvent
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::ReloadEvent*, "HoudiniEngineUnity", "ReloadEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::ReloadEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!