// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeConnection
  class MissionNodeConnection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeUpdatePositionInEditMode
  class MissionNodeUpdatePositionInEditMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionNodeUpdatePositionInEditMode);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeUpdatePositionInEditMode*, "", "MissionNodeUpdatePositionInEditMode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodeUpdatePositionInEditMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class MissionNodeUpdatePositionInEditMode : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MissionNodeConnection _missionNodeConnection
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionNodeConnection* missionNodeConnection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNodeConnection*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionNodeConnection _missionNodeConnection
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionNodeConnection*& dyn__missionNodeConnection();
    // public System.Void .ctor()
    // Offset: 0x132EAA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodeUpdatePositionInEditMode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionNodeUpdatePositionInEditMode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodeUpdatePositionInEditMode*, creationType>()));
    }
  }; // MissionNodeUpdatePositionInEditMode
  #pragma pack(pop)
  static check_size<sizeof(MissionNodeUpdatePositionInEditMode), 24 + sizeof(::GlobalNamespace::MissionNodeConnection*)> __GlobalNamespace_MissionNodeUpdatePositionInEditModeSizeCheck;
  static_assert(sizeof(MissionNodeUpdatePositionInEditMode) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeUpdatePositionInEditMode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
