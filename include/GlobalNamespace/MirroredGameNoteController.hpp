// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MirroredNoteController`1
#include "GlobalNamespace/MirroredNoteController_1.hpp"
// Including type: ICubeNoteControllerInitializable`1
#include "GlobalNamespace/ICubeNoteControllerInitializable_1.hpp"
// Including type: INoteVisualModifierTypeProvider
#include "GlobalNamespace/INoteVisualModifierTypeProvider.hpp"
// Including type: INoteMovementProvider
#include "GlobalNamespace/INoteMovementProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IGameNoteMirrorable
  class IGameNoteMirrorable;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: NoteVisualModifierType
  struct NoteVisualModifierType;
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
  // Forward declaring type: MirroredGameNoteController
  class MirroredGameNoteController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MirroredGameNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredGameNoteController*, "", "MirroredGameNoteController");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MirroredGameNoteController
  // [TokenAttribute] Offset: FFFFFFFF
  class MirroredGameNoteController : public ::GlobalNamespace::MirroredNoteController_1<::GlobalNamespace::IGameNoteMirrorable*>/*, public ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MirroredGameNoteController*>, public ::GlobalNamespace::INoteVisualModifierTypeProvider, public ::GlobalNamespace::INoteMovementProvider*/ {
    public:
    // Nested type: ::GlobalNamespace::MirroredGameNoteController::Pool
    class Pool;
    public:
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // [InjectAttribute] Offset: 0x11145E8
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorManager*) == 0x8);
    // private System.Action`1<MirroredGameNoteController> cubeNoteControllerDidInitEvent
    // Size: 0x8
    // Offset: 0x58
    ::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>* cubeNoteControllerDidInitEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MirroredGameNoteController*>
    operator ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MirroredGameNoteController*>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MirroredGameNoteController*>*>(this);
    }
    // Creating interface conversion operator: i_MirroredGameNoteController
    inline ::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MirroredGameNoteController*>* i_MirroredGameNoteController() noexcept {
      return reinterpret_cast<::GlobalNamespace::ICubeNoteControllerInitializable_1<::GlobalNamespace::MirroredGameNoteController*>*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteVisualModifierTypeProvider
    operator ::GlobalNamespace::INoteVisualModifierTypeProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(this);
    }
    // Creating interface conversion operator: i_INoteVisualModifierTypeProvider
    inline ::GlobalNamespace::INoteVisualModifierTypeProvider* i_INoteVisualModifierTypeProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::INoteVisualModifierTypeProvider*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteMovementProvider
    operator ::GlobalNamespace::INoteMovementProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteMovementProvider*>(this);
    }
    // Creating interface conversion operator: i_INoteMovementProvider
    inline ::GlobalNamespace::INoteMovementProvider* i_INoteMovementProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::INoteMovementProvider*>(this);
    }
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1114608
    // Get static field: static private readonly System.Int32 _colorId
    static int _get__colorId();
    // Set static field: static private readonly System.Int32 _colorId
    static void _set__colorId(int value);
    // Get instance field reference: private MaterialPropertyBlockController _materialPropertyBlockController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MaterialPropertyBlockController*& dyn__materialPropertyBlockController();
    // Get instance field reference: private readonly ColorManager _colorManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private System.Action`1<MirroredGameNoteController> cubeNoteControllerDidInitEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>*& dyn_cubeNoteControllerDidInitEvent();
    // public NoteMovement get_noteMovement()
    // Offset: 0x1346960
    ::GlobalNamespace::NoteMovement* get_noteMovement();
    // public NoteVisualModifierType get_noteVisualModifierType()
    // Offset: 0x1346A1C
    ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();
    // public System.Void add_cubeNoteControllerDidInitEvent(System.Action`1<MirroredGameNoteController> value)
    // Offset: 0x1346818
    void add_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>* value);
    // public System.Void remove_cubeNoteControllerDidInitEvent(System.Action`1<MirroredGameNoteController> value)
    // Offset: 0x13468BC
    void remove_cubeNoteControllerDidInitEvent(::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1346C74
    static void _cctor();
    // public System.Void Mirror(IGameNoteMirrorable noteController)
    // Offset: 0x1346AD0
    void Mirror(::GlobalNamespace::IGameNoteMirrorable* noteController);
    // public System.Void .ctor()
    // Offset: 0x1346C24
    // Implemented from: MirroredNoteController`1
    // Base method: System.Void MirroredNoteController_1::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredGameNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MirroredGameNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredGameNoteController*, creationType>()));
    }
  }; // MirroredGameNoteController
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MirroredGameNoteController::get_noteMovement
// Il2CppName: get_noteMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteMovement* (GlobalNamespace::MirroredGameNoteController::*)()>(&GlobalNamespace::MirroredGameNoteController::get_noteMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredGameNoteController*), "get_noteMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredGameNoteController::get_noteVisualModifierType
// Il2CppName: get_noteVisualModifierType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteVisualModifierType (GlobalNamespace::MirroredGameNoteController::*)()>(&GlobalNamespace::MirroredGameNoteController::get_noteVisualModifierType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredGameNoteController*), "get_noteVisualModifierType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredGameNoteController::add_cubeNoteControllerDidInitEvent
// Il2CppName: add_cubeNoteControllerDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredGameNoteController::*)(::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>*)>(&GlobalNamespace::MirroredGameNoteController::add_cubeNoteControllerDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MirroredGameNoteController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredGameNoteController*), "add_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredGameNoteController::remove_cubeNoteControllerDidInitEvent
// Il2CppName: remove_cubeNoteControllerDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredGameNoteController::*)(::System::Action_1<::GlobalNamespace::MirroredGameNoteController*>*)>(&GlobalNamespace::MirroredGameNoteController::remove_cubeNoteControllerDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MirroredGameNoteController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredGameNoteController*), "remove_cubeNoteControllerDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredGameNoteController::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MirroredGameNoteController::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredGameNoteController*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredGameNoteController::Mirror
// Il2CppName: Mirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MirroredGameNoteController::*)(::GlobalNamespace::IGameNoteMirrorable*)>(&GlobalNamespace::MirroredGameNoteController::Mirror)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "IGameNoteMirrorable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MirroredGameNoteController*), "Mirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MirroredGameNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
