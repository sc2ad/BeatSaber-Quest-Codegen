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
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionNodeNameGenerator
  class MissionNodeNameGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionNodeNameGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeNameGenerator*, "", "MissionNodeNameGenerator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodeNameGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionNodeNameGenerator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private MissionNodesManager _missionNodesManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionNodesManager* missionNodesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionNodesManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MissionNodesManager _missionNodesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MissionNodesManager*& dyn__missionNodesManager();
    // public System.Void .ctor()
    // Offset: 0x1486548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodeNameGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionNodeNameGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodeNameGenerator*, creationType>()));
    }
  }; // MissionNodeNameGenerator
  #pragma pack(pop)
  static check_size<sizeof(MissionNodeNameGenerator), 24 + sizeof(::GlobalNamespace::MissionNodesManager*)> __GlobalNamespace_MissionNodeNameGeneratorSizeCheck;
  static_assert(sizeof(MissionNodeNameGenerator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionNodeNameGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
