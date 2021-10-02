// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRController
  class VRController;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: VRControllersRecorderData
  class VRControllersRecorderData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: FullVRControllersRecorder
  // [TokenAttribute] Offset: FFFFFFFF
  class FullVRControllersRecorder : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FullVRControllersRecorder::Mode
    struct Mode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: FullVRControllersRecorder/Mode
    // [TokenAttribute] Offset: FFFFFFFF
    struct Mode/*, public System::Enum*/ {
      public:
      #ifdef USE_CODEGEN_FIELDS
      public:
      #else
      protected:
      #endif
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public FullVRControllersRecorder/Mode Record
      static constexpr const int Record = 0;
      // Get static field: static public FullVRControllersRecorder/Mode Record
      static GlobalNamespace::FullVRControllersRecorder::Mode _get_Record();
      // Set static field: static public FullVRControllersRecorder/Mode Record
      static void _set_Record(GlobalNamespace::FullVRControllersRecorder::Mode value);
      // static field const value: static public FullVRControllersRecorder/Mode Playback
      static constexpr const int Playback = 1;
      // Get static field: static public FullVRControllersRecorder/Mode Playback
      static GlobalNamespace::FullVRControllersRecorder::Mode _get_Playback();
      // Set static field: static public FullVRControllersRecorder/Mode Playback
      static void _set_Playback(GlobalNamespace::FullVRControllersRecorder::Mode value);
      // static field const value: static public FullVRControllersRecorder/Mode Off
      static constexpr const int Off = 2;
      // Get static field: static public FullVRControllersRecorder/Mode Off
      static GlobalNamespace::FullVRControllersRecorder::Mode _get_Off();
      // Set static field: static public FullVRControllersRecorder/Mode Off
      static void _set_Off(GlobalNamespace::FullVRControllersRecorder::Mode value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // FullVRControllersRecorder/Mode
    #pragma pack(pop)
    static check_size<sizeof(FullVRControllersRecorder::Mode), 0 + sizeof(int)> __GlobalNamespace_FullVRControllersRecorder_ModeSizeCheck;
    static_assert(sizeof(FullVRControllersRecorder::Mode) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.String _recordingFilePath
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* recordingFilePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private FullVRControllersRecorder/Mode _mode
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::FullVRControllersRecorder::Mode mode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FullVRControllersRecorder::Mode) == 0x4);
    // private System.Single _timeOffset
    // Size: 0x4
    // Offset: 0x24
    float timeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _othersSmooth
    // Size: 0x4
    // Offset: 0x28
    float othersSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _handsSmooth
    // Size: 0x4
    // Offset: 0x2C
    float handsSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _playbackFloorOffset
    // Size: 0x4
    // Offset: 0x30
    float playbackFloorOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: playbackFloorOffset and: controllers
    char __padding5[0x4] = {};
    // [SpaceAttribute] Offset: 0xF13D0C
    // private VRController[] _controllers
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<GlobalNamespace::VRController*> controllers;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::VRController*>) == 0x8);
    // [InjectAttribute] Offset: 0xF13D44
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Action`1<VRController> didSetControllerTransformEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_1<GlobalNamespace::VRController*>* didSetControllerTransformEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::VRController*>*) == 0x8);
    // private System.Int32 _keyframeIndex
    // Size: 0x4
    // Offset: 0x50
    int keyframeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: keyframeIndex and: data
    char __padding9[0x4] = {};
    // private VRControllersRecorderData _data
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::VRControllersRecorderData* data;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRControllersRecorderData*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _recordingFilePath
    ::Il2CppString*& dyn__recordingFilePath();
    // Get instance field reference: private FullVRControllersRecorder/Mode _mode
    GlobalNamespace::FullVRControllersRecorder::Mode& dyn__mode();
    // Get instance field reference: private System.Single _timeOffset
    float& dyn__timeOffset();
    // Get instance field reference: private System.Single _othersSmooth
    float& dyn__othersSmooth();
    // Get instance field reference: private System.Single _handsSmooth
    float& dyn__handsSmooth();
    // Get instance field reference: private System.Single _playbackFloorOffset
    float& dyn__playbackFloorOffset();
    // Get instance field reference: private VRController[] _controllers
    ::ArrayW<GlobalNamespace::VRController*>& dyn__controllers();
    // Get instance field reference: private AudioTimeSyncController _audioTimeSyncController
    GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private System.Action`1<VRController> didSetControllerTransformEvent
    System::Action_1<GlobalNamespace::VRController*>*& dyn_didSetControllerTransformEvent();
    // Get instance field reference: private System.Int32 _keyframeIndex
    int& dyn__keyframeIndex();
    // Get instance field reference: private VRControllersRecorderData _data
    GlobalNamespace::VRControllersRecorderData*& dyn__data();
    // public System.Void add_didSetControllerTransformEvent(System.Action`1<VRController> value)
    // Offset: 0x11D3274
    void add_didSetControllerTransformEvent(System::Action_1<GlobalNamespace::VRController*>* value);
    // public System.Void remove_didSetControllerTransformEvent(System.Action`1<VRController> value)
    // Offset: 0x11D3318
    void remove_didSetControllerTransformEvent(System::Action_1<GlobalNamespace::VRController*>* value);
    // protected System.Void Start()
    // Offset: 0x11D33BC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11D37B0
    void OnDestroy();
    // private System.Void PlaybackTick()
    // Offset: 0x11D385C
    void PlaybackTick();
    // private System.Void RecordTick()
    // Offset: 0x11D3C3C
    void RecordTick();
    // protected System.Void Update()
    // Offset: 0x11D3DE4
    void Update();
    // protected System.Void LateUpdate()
    // Offset: 0x11D3E34
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x11D3E44
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FullVRControllersRecorder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FullVRControllersRecorder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FullVRControllersRecorder*, creationType>()));
    }
  }; // FullVRControllersRecorder
  #pragma pack(pop)
  static check_size<sizeof(FullVRControllersRecorder), 88 + sizeof(GlobalNamespace::VRControllersRecorderData*)> __GlobalNamespace_FullVRControllersRecorderSizeCheck;
  static_assert(sizeof(FullVRControllersRecorder) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FullVRControllersRecorder*, "", "FullVRControllersRecorder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FullVRControllersRecorder::Mode, "", "FullVRControllersRecorder/Mode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FullVRControllersRecorder::add_didSetControllerTransformEvent
// Il2CppName: add_didSetControllerTransformEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullVRControllersRecorder::*)(System::Action_1<GlobalNamespace::VRController*>*)>(&GlobalNamespace::FullVRControllersRecorder::add_didSetControllerTransformEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "VRController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullVRControllersRecorder*), "add_didSetControllerTransformEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FullVRControllersRecorder::remove_didSetControllerTransformEvent
// Il2CppName: remove_didSetControllerTransformEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullVRControllersRecorder::*)(System::Action_1<GlobalNamespace::VRController*>*)>(&GlobalNamespace::FullVRControllersRecorder::remove_didSetControllerTransformEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "VRController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullVRControllersRecorder*), "remove_didSetControllerTransformEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FullVRControllersRecorder::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullVRControllersRecorder::*)()>(&GlobalNamespace::FullVRControllersRecorder::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullVRControllersRecorder*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FullVRControllersRecorder::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullVRControllersRecorder::*)()>(&GlobalNamespace::FullVRControllersRecorder::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullVRControllersRecorder*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FullVRControllersRecorder::PlaybackTick
// Il2CppName: PlaybackTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullVRControllersRecorder::*)()>(&GlobalNamespace::FullVRControllersRecorder::PlaybackTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullVRControllersRecorder*), "PlaybackTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FullVRControllersRecorder::RecordTick
// Il2CppName: RecordTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullVRControllersRecorder::*)()>(&GlobalNamespace::FullVRControllersRecorder::RecordTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullVRControllersRecorder*), "RecordTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FullVRControllersRecorder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullVRControllersRecorder::*)()>(&GlobalNamespace::FullVRControllersRecorder::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullVRControllersRecorder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FullVRControllersRecorder::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FullVRControllersRecorder::*)()>(&GlobalNamespace::FullVRControllersRecorder::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FullVRControllersRecorder*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FullVRControllersRecorder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
