// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterDataModel
  class BTSCharacterDataModel;
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
  // Forward declaring type: BeatmapEventCallbackData
  class BeatmapEventCallbackData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterSpawnEventEffect
  class BTSCharacterSpawnEventEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BTSCharacterSpawnEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterSpawnEventEffect*, "", "BTSCharacterSpawnEventEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterSpawnEventEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class BTSCharacterSpawnEventEffect : public ::UnityEngine::MonoBehaviour {
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
    // private System.Single _animationStartAheadTime
    // Size: 0x4
    // Offset: 0x18
    float animationStartAheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: animationStartAheadTime and: btsCharacterDataModel
    char __padding0[0x4] = {};
    // private BTSCharacterDataModel _btsCharacterDataModel
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BTSCharacterDataModel* btsCharacterDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BTSCharacterDataModel*) == 0x8);
    // [NullAllowed] Offset: 0x1239F7C
    // private UnityEngine.Transform _characterWrapper
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* characterWrapper;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0x1239FB8
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // [InjectAttribute] Offset: 0x1239FC8
    // private readonly IReadonlyBeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // [InjectAttribute] Offset: 0x1239FD8
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private System.Action`1<BTSCharacter> startCharacterAnimationEvent
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_1<::GlobalNamespace::BTSCharacter*>* startCharacterAnimationEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::BTSCharacter*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,BTSCharacter> _idsToCharacterPrefabsDictionary
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::BTSCharacter*>* idsToCharacterPrefabsDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::BTSCharacter*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,BTSCharacter> _idsToCharactersDictionary
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::BTSCharacter*>* idsToCharactersDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::BTSCharacter*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.AnimationClip> _idsToAnimationClipsDictionary
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::AnimationClip*>* idsToAnimationClipsDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::AnimationClip*>*) == 0x8);
    // private System.Boolean _isInitialized
    // Size: 0x1
    // Offset: 0x68
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitialized and: eventsCallbackData
    char __padding10[0x7] = {};
    // private BeatmapEventCallbackData _eventsCallbackData
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::BeatmapEventCallbackData* eventsCallbackData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapEventCallbackData*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> _handles
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* handles;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private BeatmapEventType kCharacterDisplayEventType
    static constexpr const int kCharacterDisplayEventType = 40;
    // Get static field: static private BeatmapEventType kCharacterDisplayEventType
    static ::GlobalNamespace::BeatmapEventType _get_kCharacterDisplayEventType();
    // Set static field: static private BeatmapEventType kCharacterDisplayEventType
    static void _set_kCharacterDisplayEventType(::GlobalNamespace::BeatmapEventType value);
    // Get instance field reference: private System.Single _animationStartAheadTime
    float& dyn__animationStartAheadTime();
    // Get instance field reference: private BTSCharacterDataModel _btsCharacterDataModel
    ::GlobalNamespace::BTSCharacterDataModel*& dyn__btsCharacterDataModel();
    // Get instance field reference: private UnityEngine.Transform _characterWrapper
    ::UnityEngine::Transform*& dyn__characterWrapper();
    // Get instance field reference: private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    ::GlobalNamespace::IBeatmapObjectCallbackController*& dyn__beatmapObjectCallbackController();
    // Get instance field reference: private readonly IReadonlyBeatmapData _beatmapData
    ::GlobalNamespace::IReadonlyBeatmapData*& dyn__beatmapData();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private System.Action`1<BTSCharacter> startCharacterAnimationEvent
    ::System::Action_1<::GlobalNamespace::BTSCharacter*>*& dyn_startCharacterAnimationEvent();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Int32,BTSCharacter> _idsToCharacterPrefabsDictionary
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::BTSCharacter*>*& dyn__idsToCharacterPrefabsDictionary();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Int32,BTSCharacter> _idsToCharactersDictionary
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::BTSCharacter*>*& dyn__idsToCharactersDictionary();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.AnimationClip> _idsToAnimationClipsDictionary
    ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::AnimationClip*>*& dyn__idsToAnimationClipsDictionary();
    // Get instance field reference: private System.Boolean _isInitialized
    bool& dyn__isInitialized();
    // Get instance field reference: private BeatmapEventCallbackData _eventsCallbackData
    ::GlobalNamespace::BeatmapEventCallbackData*& dyn__eventsCallbackData();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> _handles
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& dyn__handles();
    // public System.Boolean get_isInitialized()
    // Offset: 0x2B38484
    bool get_isInitialized();
    // public System.Void add_startCharacterAnimationEvent(System.Action`1<BTSCharacter> value)
    // Offset: 0x2B37C2C
    void add_startCharacterAnimationEvent(::System::Action_1<::GlobalNamespace::BTSCharacter*>* value);
    // public System.Void remove_startCharacterAnimationEvent(System.Action`1<BTSCharacter> value)
    // Offset: 0x2B3803C
    void remove_startCharacterAnimationEvent(::System::Action_1<::GlobalNamespace::BTSCharacter*>* value);
    // protected System.Void Start()
    // Offset: 0x2B3848C
    void Start();
    // private System.Void LoadAddressables()
    // Offset: 0x2B38964
    void LoadAddressables();
    // private System.Void CleanupAddressables()
    // Offset: 0x2B390A4
    void CleanupAddressables();
    // protected System.Void OnDestroy()
    // Offset: 0x2B391F4
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x2B392C0
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(::GlobalNamespace::BeatmapEventData* beatmapEventData);
    // static private System.Tuple`2<BTSCharacter,UnityEngine.AnimationClip> GetCharacterWithAnimationClip(System.Collections.Generic.Dictionary`2<System.Int32,BTSCharacter> charDictionary, System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.AnimationClip> animDictionary, System.Int32 prefabId, System.Int32 animationId)
    // Offset: 0x2B38F4C
    static ::System::Tuple_2<::GlobalNamespace::BTSCharacter*, ::UnityEngine::AnimationClip*>* GetCharacterWithAnimationClip(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::BTSCharacter*>* charDictionary, ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::AnimationClip*>* animDictionary, int prefabId, int animationId);
    // public System.Void .ctor()
    // Offset: 0x2B39444
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterSpawnEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BTSCharacterSpawnEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterSpawnEventEffect*, creationType>()));
    }
  }; // BTSCharacterSpawnEventEffect
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterSpawnEventEffect), 120 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*)> __GlobalNamespace_BTSCharacterSpawnEventEffectSizeCheck;
  static_assert(sizeof(BTSCharacterSpawnEventEffect) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnEventEffect::get_isInitialized
// Il2CppName: get_isInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&GlobalNamespace::BTSCharacterSpawnEventEffect::get_isInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnEventEffect*), "get_isInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnEventEffect::add_startCharacterAnimationEvent
// Il2CppName: add_startCharacterAnimationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnEventEffect::*)(::System::Action_1<::GlobalNamespace::BTSCharacter*>*)>(&GlobalNamespace::BTSCharacterSpawnEventEffect::add_startCharacterAnimationEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BTSCharacter")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnEventEffect*), "add_startCharacterAnimationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnEventEffect::remove_startCharacterAnimationEvent
// Il2CppName: remove_startCharacterAnimationEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnEventEffect::*)(::System::Action_1<::GlobalNamespace::BTSCharacter*>*)>(&GlobalNamespace::BTSCharacterSpawnEventEffect::remove_startCharacterAnimationEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BTSCharacter")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnEventEffect*), "remove_startCharacterAnimationEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnEventEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&GlobalNamespace::BTSCharacterSpawnEventEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnEventEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnEventEffect::LoadAddressables
// Il2CppName: LoadAddressables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&GlobalNamespace::BTSCharacterSpawnEventEffect::LoadAddressables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnEventEffect*), "LoadAddressables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnEventEffect::CleanupAddressables
// Il2CppName: CleanupAddressables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&GlobalNamespace::BTSCharacterSpawnEventEffect::CleanupAddressables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnEventEffect*), "CleanupAddressables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnEventEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&GlobalNamespace::BTSCharacterSpawnEventEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnEventEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
// Il2CppName: HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BTSCharacterSpawnEventEffect::*)(::GlobalNamespace::BeatmapEventData*)>(&GlobalNamespace::BTSCharacterSpawnEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger)> {
  static const MethodInfo* get() {
    static auto* beatmapEventData = &::il2cpp_utils::GetClassFromName("", "BeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnEventEffect*), "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnEventEffect::GetCharacterWithAnimationClip
// Il2CppName: GetCharacterWithAnimationClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Tuple_2<::GlobalNamespace::BTSCharacter*, ::UnityEngine::AnimationClip*>* (*)(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::BTSCharacter*>*, ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::AnimationClip*>*, int, int)>(&GlobalNamespace::BTSCharacterSpawnEventEffect::GetCharacterWithAnimationClip)> {
  static const MethodInfo* get() {
    static auto* charDictionary = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("", "BTSCharacter")})->byval_arg;
    static auto* animDictionary = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")})->byval_arg;
    static auto* prefabId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* animationId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BTSCharacterSpawnEventEffect*), "GetCharacterWithAnimationClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{charDictionary, animDictionary, prefabId, animationId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BTSCharacterSpawnEventEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
