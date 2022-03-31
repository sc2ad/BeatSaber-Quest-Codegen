// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IGameEnergyCounter
#include "GlobalNamespace/IGameEnergyCounter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberClashChecker
  class SaberClashChecker;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: PlayerHeadAndObstacleInteraction
  class PlayerHeadAndObstacleInteraction;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameEnergyCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameEnergyCounter*, "", "GameEnergyCounter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: GameEnergyCounter
  // [TokenAttribute] Offset: FFFFFFFF
  class GameEnergyCounter : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IGameEnergyCounter*/ {
    public:
    // Nested type: ::GlobalNamespace::GameEnergyCounter::InitData
    class InitData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Int32 _batteryLives
    // Size: 0x4
    // Offset: 0x18
    int batteryLives;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: batteryLives and: initData
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0x1255898
    // private readonly GameEnergyCounter/InitData _initData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameEnergyCounter::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameEnergyCounter::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0x12558A8
    // private readonly SaberClashChecker _saberClashChecker
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SaberClashChecker* saberClashChecker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberClashChecker*) == 0x8);
    // [InjectAttribute] Offset: 0x12558B8
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x12558C8
    // private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::PlayerHeadAndObstacleInteraction* playerHeadAndObstacleInteraction;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeadAndObstacleInteraction*) == 0x8);
    // private System.Action didInitEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* didInitEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action gameEnergyDidReach0Event
    // Size: 0x8
    // Offset: 0x48
    ::System::Action* gameEnergyDidReach0Event;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`1<System.Single> gameEnergyDidChangeEvent
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_1<float>* gameEnergyDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // private System.Single <energy>k__BackingField
    // Size: 0x4
    // Offset: 0x58
    float energy;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private GameplayModifiers/EnergyType <energyType>k__BackingField
    // Size: 0x4
    // Offset: 0x5C
    ::GlobalNamespace::GameplayModifiers::EnergyType energyType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers::EnergyType) == 0x4);
    // private System.Boolean <noFail>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool noFail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <instaFail>k__BackingField
    // Size: 0x1
    // Offset: 0x61
    bool instaFail;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <failOnSaberClash>k__BackingField
    // Size: 0x1
    // Offset: 0x62
    bool failOnSaberClash;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x63
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _didReach0Energy
    // Size: 0x1
    // Offset: 0x64
    bool didReach0Energy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: didReach0Energy and: nextFrameEnergyChange
    char __padding14[0x3] = {};
    // private System.Single _nextFrameEnergyChange
    // Size: 0x4
    // Offset: 0x68
    float nextFrameEnergyChange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IGameEnergyCounter
    operator ::GlobalNamespace::IGameEnergyCounter() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IGameEnergyCounter*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kBadNoteEnergyDrain
    static constexpr const float kBadNoteEnergyDrain = 0.1;
    // Get static field: static private System.Single kBadNoteEnergyDrain
    static float _get_kBadNoteEnergyDrain();
    // Set static field: static private System.Single kBadNoteEnergyDrain
    static void _set_kBadNoteEnergyDrain(float value);
    // static field const value: static private System.Single kBadBurstSliderElementEnergyDrain
    static constexpr const float kBadBurstSliderElementEnergyDrain = 0.025;
    // Get static field: static private System.Single kBadBurstSliderElementEnergyDrain
    static float _get_kBadBurstSliderElementEnergyDrain();
    // Set static field: static private System.Single kBadBurstSliderElementEnergyDrain
    static void _set_kBadBurstSliderElementEnergyDrain(float value);
    // static field const value: static private System.Single kMissNoteEnergyDrain
    static constexpr const float kMissNoteEnergyDrain = 0.15;
    // Get static field: static private System.Single kMissNoteEnergyDrain
    static float _get_kMissNoteEnergyDrain();
    // Set static field: static private System.Single kMissNoteEnergyDrain
    static void _set_kMissNoteEnergyDrain(float value);
    // static field const value: static private System.Single kMissBurstSliderElementEnergyDrain
    static constexpr const float kMissBurstSliderElementEnergyDrain = 0.03;
    // Get static field: static private System.Single kMissBurstSliderElementEnergyDrain
    static float _get_kMissBurstSliderElementEnergyDrain();
    // Set static field: static private System.Single kMissBurstSliderElementEnergyDrain
    static void _set_kMissBurstSliderElementEnergyDrain(float value);
    // static field const value: static private System.Single kHitBombEnergyDrain
    static constexpr const float kHitBombEnergyDrain = 0.15;
    // Get static field: static private System.Single kHitBombEnergyDrain
    static float _get_kHitBombEnergyDrain();
    // Set static field: static private System.Single kHitBombEnergyDrain
    static void _set_kHitBombEnergyDrain(float value);
    // static field const value: static private System.Single kGoodNoteEnergyCharge
    static constexpr const float kGoodNoteEnergyCharge = 0.01;
    // Get static field: static private System.Single kGoodNoteEnergyCharge
    static float _get_kGoodNoteEnergyCharge();
    // Set static field: static private System.Single kGoodNoteEnergyCharge
    static void _set_kGoodNoteEnergyCharge(float value);
    // static field const value: static private System.Single kGoodBurstSliderElementCharge
    static constexpr const float kGoodBurstSliderElementCharge = 0.002;
    // Get static field: static private System.Single kGoodBurstSliderElementCharge
    static float _get_kGoodBurstSliderElementCharge();
    // Set static field: static private System.Single kGoodBurstSliderElementCharge
    static void _set_kGoodBurstSliderElementCharge(float value);
    // static field const value: static private System.Single kObstacleEnergyDrainPerSecond
    static constexpr const float kObstacleEnergyDrainPerSecond = 1.3;
    // Get static field: static private System.Single kObstacleEnergyDrainPerSecond
    static float _get_kObstacleEnergyDrainPerSecond();
    // Set static field: static private System.Single kObstacleEnergyDrainPerSecond
    static void _set_kObstacleEnergyDrainPerSecond(float value);
    // Get instance field reference: private System.Int32 _batteryLives
    int& dyn__batteryLives();
    // Get instance field reference: private readonly GameEnergyCounter/InitData _initData
    ::GlobalNamespace::GameEnergyCounter::InitData*& dyn__initData();
    // Get instance field reference: private readonly SaberClashChecker _saberClashChecker
    ::GlobalNamespace::SaberClashChecker*& dyn__saberClashChecker();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly PlayerHeadAndObstacleInteraction _playerHeadAndObstacleInteraction
    ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& dyn__playerHeadAndObstacleInteraction();
    // Get instance field reference: private System.Action didInitEvent
    ::System::Action*& dyn_didInitEvent();
    // Get instance field reference: private System.Action gameEnergyDidReach0Event
    ::System::Action*& dyn_gameEnergyDidReach0Event();
    // Get instance field reference: private System.Action`1<System.Single> gameEnergyDidChangeEvent
    ::System::Action_1<float>*& dyn_gameEnergyDidChangeEvent();
    // Get instance field reference: private System.Single <energy>k__BackingField
    float& dyn_$energy$k__BackingField();
    // Get instance field reference: private GameplayModifiers/EnergyType <energyType>k__BackingField
    ::GlobalNamespace::GameplayModifiers::EnergyType& dyn_$energyType$k__BackingField();
    // Get instance field reference: private System.Boolean <noFail>k__BackingField
    bool& dyn_$noFail$k__BackingField();
    // Get instance field reference: private System.Boolean <instaFail>k__BackingField
    bool& dyn_$instaFail$k__BackingField();
    // Get instance field reference: private System.Boolean <failOnSaberClash>k__BackingField
    bool& dyn_$failOnSaberClash$k__BackingField();
    // Get instance field reference: private System.Boolean _isInitialized
    bool& dyn__isInitialized();
    // Get instance field reference: private System.Boolean _didReach0Energy
    bool& dyn__didReach0Energy();
    // Get instance field reference: private System.Single _nextFrameEnergyChange
    float& dyn__nextFrameEnergyChange();
    // public System.Boolean get_isInitialized()
    // Offset: 0x1394578
    bool get_isInitialized();
    // public System.Single get_energy()
    // Offset: 0x1394580
    float get_energy();
    // private System.Void set_energy(System.Single value)
    // Offset: 0x1394588
    void set_energy(float value);
    // public System.Int32 get_batteryEnergy()
    // Offset: 0x1394590
    int get_batteryEnergy();
    // public System.Int32 get_batteryLives()
    // Offset: 0x1394614
    int get_batteryLives();
    // public GameplayModifiers/EnergyType get_energyType()
    // Offset: 0x139461C
    ::GlobalNamespace::GameplayModifiers::EnergyType get_energyType();
    // private System.Void set_energyType(GameplayModifiers/EnergyType value)
    // Offset: 0x1394624
    void set_energyType(::GlobalNamespace::GameplayModifiers::EnergyType value);
    // public System.Boolean get_noFail()
    // Offset: 0x139462C
    bool get_noFail();
    // private System.Void set_noFail(System.Boolean value)
    // Offset: 0x1394634
    void set_noFail(bool value);
    // public System.Boolean get_instaFail()
    // Offset: 0x1394640
    bool get_instaFail();
    // private System.Void set_instaFail(System.Boolean value)
    // Offset: 0x1394648
    void set_instaFail(bool value);
    // public System.Boolean get_failOnSaberClash()
    // Offset: 0x1394654
    bool get_failOnSaberClash();
    // private System.Void set_failOnSaberClash(System.Boolean value)
    // Offset: 0x139465C
    void set_failOnSaberClash(bool value);
    // public System.Void add_didInitEvent(System.Action value)
    // Offset: 0x13942E8
    void add_didInitEvent(::System::Action* value);
    // public System.Void remove_didInitEvent(System.Action value)
    // Offset: 0x139438C
    void remove_didInitEvent(::System::Action* value);
    // public System.Void add_gameEnergyDidReach0Event(System.Action value)
    // Offset: 0x1394430
    void add_gameEnergyDidReach0Event(::System::Action* value);
    // public System.Void remove_gameEnergyDidReach0Event(System.Action value)
    // Offset: 0x13944D4
    void remove_gameEnergyDidReach0Event(::System::Action* value);
    // public System.Void add_gameEnergyDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x13829B0
    void add_gameEnergyDidChangeEvent(::System::Action_1<float>* value);
    // public System.Void remove_gameEnergyDidChangeEvent(System.Action`1<System.Single> value)
    // Offset: 0x1382730
    void remove_gameEnergyDidChangeEvent(::System::Action_1<float>* value);
    // protected System.Void Start()
    // Offset: 0x1394668
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13947D8
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0x13948C0
    void LateUpdate();
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x1394AF8
    void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
    // private System.Void HandleNoteWasMissed(NoteController noteController)
    // Offset: 0x1394BE4
    void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);
    // private System.Void ProcessEnergyChange(System.Single energyChange)
    // Offset: 0x13949C4
    void ProcessEnergyChange(float energyChange);
    // public System.Void .ctor()
    // Offset: 0x1394C54
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameEnergyCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameEnergyCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameEnergyCounter*, creationType>()));
    }
  }; // GameEnergyCounter
  #pragma pack(pop)
  static check_size<sizeof(GameEnergyCounter), 104 + sizeof(float)> __GlobalNamespace_GameEnergyCounterSizeCheck;
  static_assert(sizeof(GameEnergyCounter) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::get_isInitialized
// Il2CppName: get_isInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::get_isInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "get_isInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::get_energy
// Il2CppName: get_energy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::get_energy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "get_energy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::set_energy
// Il2CppName: set_energy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(float)>(&GlobalNamespace::GameEnergyCounter::set_energy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "set_energy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::get_batteryEnergy
// Il2CppName: get_batteryEnergy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::get_batteryEnergy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "get_batteryEnergy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::get_batteryLives
// Il2CppName: get_batteryLives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::get_batteryLives)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "get_batteryLives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::get_energyType
// Il2CppName: get_energyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers::EnergyType (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::get_energyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "get_energyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::set_energyType
// Il2CppName: set_energyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(::GlobalNamespace::GameplayModifiers::EnergyType)>(&GlobalNamespace::GameEnergyCounter::set_energyType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers/EnergyType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "set_energyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::get_noFail
// Il2CppName: get_noFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::get_noFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "get_noFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::set_noFail
// Il2CppName: set_noFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(bool)>(&GlobalNamespace::GameEnergyCounter::set_noFail)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "set_noFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::get_instaFail
// Il2CppName: get_instaFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::get_instaFail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "get_instaFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::set_instaFail
// Il2CppName: set_instaFail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(bool)>(&GlobalNamespace::GameEnergyCounter::set_instaFail)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "set_instaFail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::get_failOnSaberClash
// Il2CppName: get_failOnSaberClash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::get_failOnSaberClash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "get_failOnSaberClash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::set_failOnSaberClash
// Il2CppName: set_failOnSaberClash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(bool)>(&GlobalNamespace::GameEnergyCounter::set_failOnSaberClash)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "set_failOnSaberClash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::add_didInitEvent
// Il2CppName: add_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(::System::Action*)>(&GlobalNamespace::GameEnergyCounter::add_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "add_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::remove_didInitEvent
// Il2CppName: remove_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(::System::Action*)>(&GlobalNamespace::GameEnergyCounter::remove_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "remove_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::add_gameEnergyDidReach0Event
// Il2CppName: add_gameEnergyDidReach0Event
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(::System::Action*)>(&GlobalNamespace::GameEnergyCounter::add_gameEnergyDidReach0Event)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "add_gameEnergyDidReach0Event", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::remove_gameEnergyDidReach0Event
// Il2CppName: remove_gameEnergyDidReach0Event
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(::System::Action*)>(&GlobalNamespace::GameEnergyCounter::remove_gameEnergyDidReach0Event)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "remove_gameEnergyDidReach0Event", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::add_gameEnergyDidChangeEvent
// Il2CppName: add_gameEnergyDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(::System::Action_1<float>*)>(&GlobalNamespace::GameEnergyCounter::add_gameEnergyDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "add_gameEnergyDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::remove_gameEnergyDidChangeEvent
// Il2CppName: remove_gameEnergyDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(::System::Action_1<float>*)>(&GlobalNamespace::GameEnergyCounter::remove_gameEnergyDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "remove_gameEnergyDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)()>(&GlobalNamespace::GameEnergyCounter::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::HandleNoteWasCut
// Il2CppName: HandleNoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::GameEnergyCounter::HandleNoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "HandleNoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::HandleNoteWasMissed
// Il2CppName: HandleNoteWasMissed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(::GlobalNamespace::NoteController*)>(&GlobalNamespace::GameEnergyCounter::HandleNoteWasMissed)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "HandleNoteWasMissed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::ProcessEnergyChange
// Il2CppName: ProcessEnergyChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameEnergyCounter::*)(float)>(&GlobalNamespace::GameEnergyCounter::ProcessEnergyChange)> {
  static const MethodInfo* get() {
    static auto* energyChange = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameEnergyCounter*), "ProcessEnergyChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{energyChange});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameEnergyCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
