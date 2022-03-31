// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/UnityEngine.EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRPointer
  class VRPointer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MenuShockwave
  class MenuShockwave;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MenuShockwave);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuShockwave*, "", "MenuShockwave");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xBF
  #pragma pack(push, 1)
  // Autogenerated type: MenuShockwave
  // [TokenAttribute] Offset: FFFFFFFF
  class MenuShockwave : public ::UnityEngine::MonoBehaviour {
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
    // private UnityEngine.ParticleSystem _shockwavePS
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ParticleSystem* shockwavePS;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private VRUIControls.VRPointer _vrPointer
    // Size: 0x8
    // Offset: 0x20
    ::VRUIControls::VRPointer* vrPointer;
    // Field size check
    static_assert(sizeof(::VRUIControls::VRPointer*) == 0x8);
    // private Signal[] _buttonClickEvents
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::Signal*> buttonClickEvents;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::Signal*>) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.EmitParams _shockwavePSEmitParams
    // Size: 0x8F
    // Offset: 0x30
    ::UnityEngine::ParticleSystem::EmitParams shockwavePSEmitParams;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.ParticleSystem _shockwavePS
    ::UnityEngine::ParticleSystem*& dyn__shockwavePS();
    // Get instance field reference: private VRUIControls.VRPointer _vrPointer
    ::VRUIControls::VRPointer*& dyn__vrPointer();
    // Get instance field reference: private Signal[] _buttonClickEvents
    ::ArrayW<::GlobalNamespace::Signal*>& dyn__buttonClickEvents();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.EmitParams _shockwavePSEmitParams
    ::UnityEngine::ParticleSystem::EmitParams& dyn__shockwavePSEmitParams();
    // protected System.Void Awake()
    // Offset: 0x12FF578
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x12FF588
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x12FF65C
    void OnDisable();
    // private System.Void HandleButtonClickEvent()
    // Offset: 0x12FF730
    void HandleButtonClickEvent();
    // public System.Void SpawnShockwave(UnityEngine.Vector3 pos)
    // Offset: 0x12FF764
    void SpawnShockwave(::UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0x12FF814
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuShockwave* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MenuShockwave::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuShockwave*, creationType>()));
    }
  }; // MenuShockwave
  #pragma pack(pop)
  static check_size<sizeof(MenuShockwave), 48 + sizeof(::UnityEngine::ParticleSystem::EmitParams)> __GlobalNamespace_MenuShockwaveSizeCheck;
  static_assert(sizeof(MenuShockwave) == 0xBF);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuShockwave::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuShockwave::*)()>(&GlobalNamespace::MenuShockwave::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuShockwave*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuShockwave::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuShockwave::*)()>(&GlobalNamespace::MenuShockwave::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuShockwave*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuShockwave::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuShockwave::*)()>(&GlobalNamespace::MenuShockwave::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuShockwave*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuShockwave::HandleButtonClickEvent
// Il2CppName: HandleButtonClickEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuShockwave::*)()>(&GlobalNamespace::MenuShockwave::HandleButtonClickEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuShockwave*), "HandleButtonClickEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuShockwave::SpawnShockwave
// Il2CppName: SpawnShockwave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MenuShockwave::*)(::UnityEngine::Vector3)>(&GlobalNamespace::MenuShockwave::SpawnShockwave)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MenuShockwave*), "SpawnShockwave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MenuShockwave::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
