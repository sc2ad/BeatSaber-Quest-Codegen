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
// Including type: INoteControllerNoteDidStartDissolvingEvent
#include "GlobalNamespace/INoteControllerNoteDidStartDissolvingEvent.hpp"
// Including type: INoteControllerNoteDidPassJumpThreeQuartersEvent
#include "GlobalNamespace/INoteControllerNoteDidPassJumpThreeQuartersEvent.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ColorNoteVisuals
  class ColorNoteVisuals;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ColorNoteVisuals);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorNoteVisuals*, "", "ColorNoteVisuals");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: ColorNoteVisuals
  // [TokenAttribute] Offset: FFFFFFFF
  class ColorNoteVisuals : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::INoteControllerDidInitEvent, public ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent, public ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*/ {
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
    // private System.Single _defaultColorAlpha
    // Size: 0x4
    // Offset: 0x18
    float defaultColorAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: defaultColorAlpha and: noteController
    char __padding0[0x4] = {};
    // [SpaceAttribute] Offset: 0x124EF60
    // private NoteControllerBase _noteController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::NoteControllerBase* noteController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteControllerBase*) == 0x8);
    // [SpaceAttribute] Offset: 0x124EF98
    // private MaterialPropertyBlockController[] _materialPropertyBlockControllers
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*> materialPropertyBlockControllers;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*>) == 0x8);
    // private UnityEngine.MeshRenderer[] _arrowMeshRenderers
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::MeshRenderer*> arrowMeshRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::MeshRenderer*>) == 0x8);
    // private UnityEngine.MeshRenderer[] _circleMeshRenderers
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::MeshRenderer*> circleMeshRenderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::MeshRenderer*>) == 0x8);
    // [InjectAttribute] Offset: 0x124EFF0
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorManager*) == 0x8);
    // private System.Action`2<ColorNoteVisuals,NoteControllerBase> didInitEvent
    // Size: 0x8
    // Offset: 0x48
    ::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>* didInitEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>*) == 0x8);
    // private UnityEngine.Color _noteColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color noteColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::INoteControllerDidInitEvent
    operator ::GlobalNamespace::INoteControllerDidInitEvent() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(this);
    }
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
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x124F010
    // Get static field: static private readonly System.Int32 _colorId
    static int _get__colorId();
    // Set static field: static private readonly System.Int32 _colorId
    static void _set__colorId(int value);
    // Get instance field reference: private System.Single _defaultColorAlpha
    float& dyn__defaultColorAlpha();
    // Get instance field reference: private NoteControllerBase _noteController
    ::GlobalNamespace::NoteControllerBase*& dyn__noteController();
    // Get instance field reference: private MaterialPropertyBlockController[] _materialPropertyBlockControllers
    ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*>& dyn__materialPropertyBlockControllers();
    // Get instance field reference: private UnityEngine.MeshRenderer[] _arrowMeshRenderers
    ::ArrayW<::UnityEngine::MeshRenderer*>& dyn__arrowMeshRenderers();
    // Get instance field reference: private UnityEngine.MeshRenderer[] _circleMeshRenderers
    ::ArrayW<::UnityEngine::MeshRenderer*>& dyn__circleMeshRenderers();
    // Get instance field reference: private readonly ColorManager _colorManager
    ::GlobalNamespace::ColorManager*& dyn__colorManager();
    // Get instance field reference: private System.Action`2<ColorNoteVisuals,NoteControllerBase> didInitEvent
    ::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>*& dyn_didInitEvent();
    // Get instance field reference: private UnityEngine.Color _noteColor
    ::UnityEngine::Color& dyn__noteColor();
    // private System.Void set_showArrow(System.Boolean value)
    // Offset: 0x13560B0
    void set_showArrow(bool value);
    // private System.Void set_showCircle(System.Boolean value)
    // Offset: 0x135612C
    void set_showCircle(bool value);
    // public System.Void add_didInitEvent(System.Action`2<ColorNoteVisuals,NoteControllerBase> value)
    // Offset: 0x1355F68
    void add_didInitEvent(::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>* value);
    // public System.Void remove_didInitEvent(System.Action`2<ColorNoteVisuals,NoteControllerBase> value)
    // Offset: 0x135600C
    void remove_didInitEvent(::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>* value);
    // protected System.Void Awake()
    // Offset: 0x13561A8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1356380
    void OnDestroy();
    // public System.Void HandleNoteControllerDidInit(NoteControllerBase noteController)
    // Offset: 0x13565A4
    void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);
    // public System.Void HandleNoteControllerNoteDidPassJumpThreeQuarters(NoteControllerBase noteController)
    // Offset: 0x1356748
    void HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController);
    // public System.Void HandleNoteControllerNoteDidStartDissolving(NoteControllerBase noteController, System.Single duration)
    // Offset: 0x1356774
    void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float duration);
    // public System.Void .ctor()
    // Offset: 0x13567A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorNoteVisuals* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ColorNoteVisuals::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorNoteVisuals*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x13567B0
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ColorNoteVisuals
  #pragma pack(pop)
  static check_size<sizeof(ColorNoteVisuals), 80 + sizeof(::UnityEngine::Color)> __GlobalNamespace_ColorNoteVisualsSizeCheck;
  static_assert(sizeof(ColorNoteVisuals) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::set_showArrow
// Il2CppName: set_showArrow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(bool)>(&GlobalNamespace::ColorNoteVisuals::set_showArrow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "set_showArrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::set_showCircle
// Il2CppName: set_showCircle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(bool)>(&GlobalNamespace::ColorNoteVisuals::set_showCircle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "set_showCircle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::add_didInitEvent
// Il2CppName: add_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>*)>(&GlobalNamespace::ColorNoteVisuals::add_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorNoteVisuals"), ::il2cpp_utils::GetClassFromName("", "NoteControllerBase")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "add_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::remove_didInitEvent
// Il2CppName: remove_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(::System::Action_2<::GlobalNamespace::ColorNoteVisuals*, ::GlobalNamespace::NoteControllerBase*>*)>(&GlobalNamespace::ColorNoteVisuals::remove_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ColorNoteVisuals"), ::il2cpp_utils::GetClassFromName("", "NoteControllerBase")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "remove_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)()>(&GlobalNamespace::ColorNoteVisuals::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)()>(&GlobalNamespace::ColorNoteVisuals::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::HandleNoteControllerDidInit
// Il2CppName: HandleNoteControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(::GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::ColorNoteVisuals::HandleNoteControllerDidInit)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidPassJumpThreeQuarters
// Il2CppName: HandleNoteControllerNoteDidPassJumpThreeQuarters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(::GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidPassJumpThreeQuarters)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "HandleNoteControllerNoteDidPassJumpThreeQuarters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidStartDissolving
// Il2CppName: HandleNoteControllerNoteDidStartDissolving
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorNoteVisuals::*)(::GlobalNamespace::NoteControllerBase*, float)>(&GlobalNamespace::ColorNoteVisuals::HandleNoteControllerNoteDidStartDissolving)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), "HandleNoteControllerNoteDidStartDissolving", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ColorNoteVisuals::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::ColorNoteVisuals::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorNoteVisuals*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
