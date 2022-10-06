// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: INoteControllerDidInitEvent
#include "GlobalNamespace/INoteControllerDidInitEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoxCollider
  class BoxCollider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteBigCuttableColliderSize
  class NoteBigCuttableColliderSize;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteBigCuttableColliderSize);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteBigCuttableColliderSize*, "", "NoteBigCuttableColliderSize");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: NoteBigCuttableColliderSize
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteBigCuttableColliderSize : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::INoteControllerDidInitEvent*/ {
    public:
    public:
    // private NoteController _noteController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::NoteController* noteController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteController*) == 0x8);
    // private UnityEngine.BoxCollider _boxCollider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::BoxCollider* boxCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::BoxCollider*) == 0x8);
    // private UnityEngine.Vector3 _defaultColliderSize
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 defaultColliderSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteControllerDidInitEvent
    operator ::GlobalNamespace::INoteControllerDidInitEvent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(this);
    }
    // Creating interface conversion operator: i_INoteControllerDidInitEvent
    inline ::GlobalNamespace::INoteControllerDidInitEvent* i_INoteControllerDidInitEvent() noexcept {
      return reinterpret_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private NoteController _noteController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteController*& dyn__noteController();
    // Get instance field reference: private UnityEngine.BoxCollider _boxCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::BoxCollider*& dyn__boxCollider();
    // Get instance field reference: private UnityEngine.Vector3 _defaultColliderSize
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__defaultColliderSize();
    // public System.Void .ctor()
    // Offset: 0x1502704
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteBigCuttableColliderSize* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteBigCuttableColliderSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteBigCuttableColliderSize*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x1502420
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1502500
    void OnDestroy();
    // public System.Void HandleNoteControllerDidInit(NoteControllerBase noteController)
    // Offset: 0x1502610
    void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);
  }; // NoteBigCuttableColliderSize
  #pragma pack(pop)
  static check_size<sizeof(NoteBigCuttableColliderSize), 40 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_NoteBigCuttableColliderSizeSizeCheck;
  static_assert(sizeof(NoteBigCuttableColliderSize) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteBigCuttableColliderSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteBigCuttableColliderSize::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&GlobalNamespace::NoteBigCuttableColliderSize::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteBigCuttableColliderSize*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteBigCuttableColliderSize*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit
// Il2CppName: HandleNoteControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteBigCuttableColliderSize::*)(::GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteBigCuttableColliderSize*), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
