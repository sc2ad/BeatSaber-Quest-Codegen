// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.NoTransitionInstaller
#include "Zenject/NoTransitionInstaller.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
  // Forward declaring type: MissionObjective
  class MissionObjective;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionLevelNoTransitionInstaller
  class MissionLevelNoTransitionInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelNoTransitionInstaller*, "", "MissionLevelNoTransitionInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelNoTransitionInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private BeatmapLevelSO _beatmapLevel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapLevelSO* beatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _beatmapDifficulty
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: beatmapDifficulty and: colorScheme
    char __padding2[0x4] = {};
    // private ColorSchemeSO _colorScheme
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ColorSchemeSO* colorScheme;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorSchemeSO*) == 0x8);
    // private MissionObjective[] _missionObjectives
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MissionObjective*>) == 0x8);
    // private GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers*) == 0x8);
    // private PlayerSpecificSettings _playerSpecificSettings
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // private System.String _backButtonText
    // Size: 0x8
    // Offset: 0x50
    ::StringW backButtonText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [SpaceAttribute] Offset: 0x1250E78
    // private MissionLevelScenesTransitionSetupDataSO _scenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* scenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BeatmapLevelSO _beatmapLevel
    ::GlobalNamespace::BeatmapLevelSO*& dyn__beatmapLevel();
    // Get instance field reference: private BeatmapCharacteristicSO _beatmapCharacteristic
    ::GlobalNamespace::BeatmapCharacteristicSO*& dyn__beatmapCharacteristic();
    // Get instance field reference: private BeatmapDifficulty _beatmapDifficulty
    ::GlobalNamespace::BeatmapDifficulty& dyn__beatmapDifficulty();
    // Get instance field reference: private ColorSchemeSO _colorScheme
    ::GlobalNamespace::ColorSchemeSO*& dyn__colorScheme();
    // Get instance field reference: private MissionObjective[] _missionObjectives
    ::ArrayW<::GlobalNamespace::MissionObjective*>& dyn__missionObjectives();
    // Get instance field reference: private GameplayModifiers _gameplayModifiers
    ::GlobalNamespace::GameplayModifiers*& dyn__gameplayModifiers();
    // Get instance field reference: private PlayerSpecificSettings _playerSpecificSettings
    ::GlobalNamespace::PlayerSpecificSettings*& dyn__playerSpecificSettings();
    // Get instance field reference: private System.String _backButtonText
    ::StringW& dyn__backButtonText();
    // Get instance field reference: private MissionLevelScenesTransitionSetupDataSO _scenesTransitionSetupData
    ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& dyn__scenesTransitionSetupData();
    // public System.Void .ctor()
    // Offset: 0x2A6F37C
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelNoTransitionInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MissionLevelNoTransitionInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelNoTransitionInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings(Zenject.DiContainer container)
    // Offset: 0x2A6F2BC
    // Implemented from: Zenject.NoTransitionInstaller
    // Base method: System.Void NoTransitionInstaller::InstallBindings(Zenject.DiContainer container)
    void InstallBindings(::Zenject::DiContainer* container);
  }; // MissionLevelNoTransitionInstaller
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelNoTransitionInstaller), 88 + sizeof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*)> __GlobalNamespace_MissionLevelNoTransitionInstallerSizeCheck;
  static_assert(sizeof(MissionLevelNoTransitionInstaller) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelNoTransitionInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelNoTransitionInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelNoTransitionInstaller::*)(::Zenject::DiContainer*)>(&GlobalNamespace::MissionLevelNoTransitionInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelNoTransitionInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
