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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoxCuttableBySaber
  class BoxCuttableBySaber;
  // Forward declaring type: NoteMovement
  class NoteMovement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ProModeTrailingCollidersController
  class ProModeTrailingCollidersController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ProModeTrailingCollidersController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProModeTrailingCollidersController*, "", "ProModeTrailingCollidersController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ProModeTrailingCollidersController
  // [TokenAttribute] Offset: FFFFFFFF
  class ProModeTrailingCollidersController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private BoxCuttableBySaber _mainSmallCuttableBySaber
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BoxCuttableBySaber* mainSmallCuttableBySaber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BoxCuttableBySaber*) == 0x8);
    // private BoxCuttableBySaber[] _trailingSmallCuttableBySaberList
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*> trailingSmallCuttableBySaberList;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BoxCuttableBySaber*>) == 0x8);
    // private NoteMovement _noteMovement
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::NoteMovement* noteMovement;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteMovement*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BoxCuttableBySaber _mainSmallCuttableBySaber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BoxCuttableBySaber*& dyn__mainSmallCuttableBySaber();
    // Get instance field reference: private BoxCuttableBySaber[] _trailingSmallCuttableBySaberList
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BoxCuttableBySaber*>& dyn__trailingSmallCuttableBySaberList();
    // Get instance field reference: private NoteMovement _noteMovement
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteMovement*& dyn__noteMovement();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // public System.Void .ctor()
    // Offset: 0x141D70C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProModeTrailingCollidersController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ProModeTrailingCollidersController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProModeTrailingCollidersController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x141D3F4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x141D490
    void OnDestroy();
    // private System.Void HandleNoteDidMoveInJumpPhase()
    // Offset: 0x141D564
    void HandleNoteDidMoveInJumpPhase();
  }; // ProModeTrailingCollidersController
  #pragma pack(pop)
  static check_size<sizeof(ProModeTrailingCollidersController), 48 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_ProModeTrailingCollidersControllerSizeCheck;
  static_assert(sizeof(ProModeTrailingCollidersController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ProModeTrailingCollidersController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ProModeTrailingCollidersController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProModeTrailingCollidersController::*)()>(&GlobalNamespace::ProModeTrailingCollidersController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProModeTrailingCollidersController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProModeTrailingCollidersController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProModeTrailingCollidersController::*)()>(&GlobalNamespace::ProModeTrailingCollidersController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProModeTrailingCollidersController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProModeTrailingCollidersController::HandleNoteDidMoveInJumpPhase
// Il2CppName: HandleNoteDidMoveInJumpPhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ProModeTrailingCollidersController::*)()>(&GlobalNamespace::ProModeTrailingCollidersController::HandleNoteDidMoveInJumpPhase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProModeTrailingCollidersController*), "HandleNoteDidMoveInJumpPhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
