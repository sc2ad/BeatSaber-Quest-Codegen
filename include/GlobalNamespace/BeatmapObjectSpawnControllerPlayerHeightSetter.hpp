// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectSpawnControllerPlayerHeightSetter
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectSpawnControllerPlayerHeightSetter : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [InjectAttribute] Offset: 0xF0A81C
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xF0A82C
    // private readonly PlayerHeightDetector _playerHeightDetector
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayerHeightDetector* playerHeightDetector;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerHeightDetector*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    GlobalNamespace::BeatmapObjectSpawnController*& dyn__beatmapObjectSpawnController();
    // Get instance field reference: private readonly PlayerHeightDetector _playerHeightDetector
    GlobalNamespace::PlayerHeightDetector*& dyn__playerHeightDetector();
    // protected System.Void Start()
    // Offset: 0x12A54BC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x12A559C
    void OnDestroy();
    // private System.Void HandlePlayerHeightDidChange(System.Single playerHeight)
    // Offset: 0x12A5570
    void HandlePlayerHeightDidChange(float playerHeight);
    // static public System.Single JumpOffsetYForPlayerHeight(System.Single playerHeight)
    // Offset: 0x12A5678
    static float JumpOffsetYForPlayerHeight(float playerHeight);
    // public System.Void .ctor()
    // Offset: 0x12A5708
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectSpawnControllerPlayerHeightSetter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectSpawnControllerPlayerHeightSetter*, creationType>()));
    }
  }; // BeatmapObjectSpawnControllerPlayerHeightSetter
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnControllerPlayerHeightSetter), 32 + sizeof(GlobalNamespace::PlayerHeightDetector*)> __GlobalNamespace_BeatmapObjectSpawnControllerPlayerHeightSetterSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnControllerPlayerHeightSetter) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*, "", "BeatmapObjectSpawnControllerPlayerHeightSetter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::*)()>(&GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::*)()>(&GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::HandlePlayerHeightDidChange
// Il2CppName: HandlePlayerHeightDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::*)(float)>(&GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::HandlePlayerHeightDidChange)> {
  static const MethodInfo* get() {
    static auto* playerHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*), "HandlePlayerHeightDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::JumpOffsetYForPlayerHeight
// Il2CppName: JumpOffsetYForPlayerHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::JumpOffsetYForPlayerHeight)> {
  static const MethodInfo* get() {
    static auto* playerHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter*), "JumpOffsetYForPlayerHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerHeight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnControllerPlayerHeightSetter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
