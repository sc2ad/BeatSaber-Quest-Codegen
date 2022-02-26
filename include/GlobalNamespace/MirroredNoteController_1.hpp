// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NoteControllerBase
#include "GlobalNamespace/NoteControllerBase.hpp"
// Including type: INoteControllerNoteDidStartDissolvingEvent
#include "GlobalNamespace/INoteControllerNoteDidStartDissolvingEvent.hpp"
// Including type: INoteControllerNoteDidPassJumpThreeQuartersEvent
#include "GlobalNamespace/INoteControllerNoteDidPassJumpThreeQuartersEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INoteMirrorable
  class INoteMirrorable;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: INoteControllerDidInitEvent
  class INoteControllerDidInitEvent;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MirroredNoteController`1<T>
  template<typename T>
  class MirroredNoteController_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::MirroredNoteController_1, "", "MirroredNoteController`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MirroredNoteController`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class MirroredNoteController_1 : public ::GlobalNamespace::NoteControllerBase/*, public ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent, public ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*/ {
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
    // private UnityEngine.Transform _noteTransform
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Transform* noteTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // protected T followedNote
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T followedNote;
    // private UnityEngine.Transform _objectTransform
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Transform* objectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _followedObjectTransform
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Transform* followedObjectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _followedNoteTransform
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Transform* followedNoteTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private readonly LazyCopyHashSet`1<INoteControllerDidInitEvent> _didInitEvent
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* didInitEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*) == 0x8);
    // private readonly LazyCopyHashSet`1<INoteControllerNoteDidPassJumpThreeQuartersEvent> _noteDidPassJumpThreeQuartersEvent
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* noteDidPassJumpThreeQuartersEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*) == 0x8);
    // private readonly LazyCopyHashSet`1<INoteControllerNoteDidStartDissolvingEvent> _noteDidStartDissolvingEvent
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* noteDidStartDissolvingEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent
    operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent
    operator ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Transform _noteTransform
    ::UnityEngine::Transform*& dyn__noteTransform() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::dyn__noteTransform");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_noteTransform"))->offset;
      return *reinterpret_cast<::UnityEngine::Transform**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected T followedNote
    T& dyn_followedNote() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::dyn_followedNote");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "followedNote"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Transform _objectTransform
    ::UnityEngine::Transform*& dyn__objectTransform() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::dyn__objectTransform");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_objectTransform"))->offset;
      return *reinterpret_cast<::UnityEngine::Transform**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Transform _followedObjectTransform
    ::UnityEngine::Transform*& dyn__followedObjectTransform() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::dyn__followedObjectTransform");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_followedObjectTransform"))->offset;
      return *reinterpret_cast<::UnityEngine::Transform**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Transform _followedNoteTransform
    ::UnityEngine::Transform*& dyn__followedNoteTransform() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::dyn__followedNoteTransform");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_followedNoteTransform"))->offset;
      return *reinterpret_cast<::UnityEngine::Transform**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly LazyCopyHashSet`1<INoteControllerDidInitEvent> _didInitEvent
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*& dyn__didInitEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::dyn__didInitEvent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_didInitEvent"))->offset;
      return *reinterpret_cast<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly LazyCopyHashSet`1<INoteControllerNoteDidPassJumpThreeQuartersEvent> _noteDidPassJumpThreeQuartersEvent
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*& dyn__noteDidPassJumpThreeQuartersEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::dyn__noteDidPassJumpThreeQuartersEvent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_noteDidPassJumpThreeQuartersEvent"))->offset;
      return *reinterpret_cast<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly LazyCopyHashSet`1<INoteControllerNoteDidStartDissolvingEvent> _noteDidStartDissolvingEvent
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*& dyn__noteDidStartDissolvingEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::dyn__noteDidStartDissolvingEvent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_noteDidStartDissolvingEvent"))->offset;
      return *reinterpret_cast<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_hide(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::set_hide");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_hide", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // protected System.Void Awake()
    // Offset: 0xFFFFFFFF
    void Awake() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::Awake");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Awake", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void Update()
    // Offset: 0xFFFFFFFF
    void Update() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::Update");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Update", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFF
    void OnDestroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::OnDestroy");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void UpdatePositionAndRotation()
    // Offset: 0xFFFFFFFF
    void UpdatePositionAndRotation() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::UpdatePositionAndRotation");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "UpdatePositionAndRotation", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Mirror(T noteController)
    // Offset: 0xFFFFFFFF
    void Mirror(T noteController) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::Mirror");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Mirror", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(noteController)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, noteController);
    }
    // private System.Void RemoveListeners()
    // Offset: 0xFFFFFFFF
    void RemoveListeners() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::RemoveListeners");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RemoveListeners", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void HandleNoteControllerNoteDidStartDissolving(NoteControllerBase noteController, System.Single duration)
    // Offset: 0xFFFFFFFF
    void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float duration) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::HandleNoteControllerNoteDidStartDissolving");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleNoteControllerNoteDidStartDissolving", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(noteController), ::il2cpp_utils::ExtractType(duration)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, noteController, duration);
    }
    // public System.Void HandleNoteControllerNoteDidPassJumpThreeQuarters(NoteControllerBase noteController)
    // Offset: 0xFFFFFFFF
    void HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::HandleNoteControllerNoteDidPassJumpThreeQuarters");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HandleNoteControllerNoteDidPassJumpThreeQuarters", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(noteController)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, noteController);
    }
    // public override ILazyCopyHashSet`1<INoteControllerDidInitEvent> get_didInitEvent()
    // Offset: 0xFFFFFFFF
    // Implemented from: NoteControllerBase
    // Base method: ILazyCopyHashSet`1<INoteControllerDidInitEvent> NoteControllerBase::get_didInitEvent()
    ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* get_didInitEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::get_didInitEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_didInitEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*, false>(this, ___internal__method);
    }
    // public override ILazyCopyHashSet`1<INoteControllerNoteDidPassJumpThreeQuartersEvent> get_noteDidPassJumpThreeQuartersEvent()
    // Offset: 0xFFFFFFFF
    // Implemented from: NoteControllerBase
    // Base method: ILazyCopyHashSet`1<INoteControllerNoteDidPassJumpThreeQuartersEvent> NoteControllerBase::get_noteDidPassJumpThreeQuartersEvent()
    ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* get_noteDidPassJumpThreeQuartersEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::get_noteDidPassJumpThreeQuartersEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_noteDidPassJumpThreeQuartersEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*, false>(this, ___internal__method);
    }
    // public override ILazyCopyHashSet`1<INoteControllerNoteDidStartDissolvingEvent> get_noteDidStartDissolvingEvent()
    // Offset: 0xFFFFFFFF
    // Implemented from: NoteControllerBase
    // Base method: ILazyCopyHashSet`1<INoteControllerNoteDidStartDissolvingEvent> NoteControllerBase::get_noteDidStartDissolvingEvent()
    ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* get_noteDidStartDissolvingEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::get_noteDidStartDissolvingEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_noteDidStartDissolvingEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*, false>(this, ___internal__method);
    }
    // public override NoteData get_noteData()
    // Offset: 0xFFFFFFFF
    // Implemented from: NoteControllerBase
    // Base method: NoteData NoteControllerBase::get_noteData()
    ::GlobalNamespace::NoteData* get_noteData() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::get_noteData");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_noteData", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: NoteControllerBase
    // Base method: System.Void NoteControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredNoteController_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredNoteController_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredNoteController_1<T>*, creationType>()));
    }
  }; // MirroredNoteController`1
  // Could not write size check! Type: MirroredNoteController`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
