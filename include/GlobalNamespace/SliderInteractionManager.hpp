// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: SliderController
  class SliderController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SliderInteractionManager
  class SliderInteractionManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderInteractionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderInteractionManager*, "", "SliderInteractionManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: SliderInteractionManager
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderInteractionManager : public ::UnityEngine::MonoBehaviour {
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
    // private ColorType _colorType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::ColorType colorType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ColorType) == 0x4);
    // Padding between fields: colorType and: beatmapObjectManager
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0x124FC68
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // private System.Single <saberInteractionParam>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float saberInteractionParam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: saberInteractionParam and: sliderWasAddedToActiveSlidersEvent
    char __padding2[0x4] = {};
    // private System.Action`1<System.Single> sliderWasAddedToActiveSlidersEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<float>* sliderWasAddedToActiveSlidersEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<float>*) == 0x8);
    // private System.Action allSliderWereRemovedFromActiveSlidersEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* allSliderWereRemovedFromActiveSlidersEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private readonly System.Collections.Generic.List`1<SliderController> _activeSliders
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::GlobalNamespace::SliderController*>* activeSliders;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::SliderController*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ColorType _colorType
    ::GlobalNamespace::ColorType& dyn__colorType();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private System.Single <saberInteractionParam>k__BackingField
    float& dyn_$saberInteractionParam$k__BackingField();
    // Get instance field reference: private System.Action`1<System.Single> sliderWasAddedToActiveSlidersEvent
    ::System::Action_1<float>*& dyn_sliderWasAddedToActiveSlidersEvent();
    // Get instance field reference: private System.Action allSliderWereRemovedFromActiveSlidersEvent
    ::System::Action*& dyn_allSliderWereRemovedFromActiveSlidersEvent();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<SliderController> _activeSliders
    ::System::Collections::Generic::List_1<::GlobalNamespace::SliderController*>*& dyn__activeSliders();
    // public ColorType get_colorType()
    // Offset: 0x2AA189C
    ::GlobalNamespace::ColorType get_colorType();
    // public System.Single get_saberInteractionParam()
    // Offset: 0x2AA18A4
    float get_saberInteractionParam();
    // private System.Void set_saberInteractionParam(System.Single value)
    // Offset: 0x2AA18AC
    void set_saberInteractionParam(float value);
    // public System.Void add_sliderWasAddedToActiveSlidersEvent(System.Action`1<System.Single> value)
    // Offset: 0x2AA1524
    void add_sliderWasAddedToActiveSlidersEvent(::System::Action_1<float>* value);
    // public System.Void remove_sliderWasAddedToActiveSlidersEvent(System.Action`1<System.Single> value)
    // Offset: 0x2AA173C
    void remove_sliderWasAddedToActiveSlidersEvent(::System::Action_1<float>* value);
    // public System.Void add_allSliderWereRemovedFromActiveSlidersEvent(System.Action value)
    // Offset: 0x2AA15C8
    void add_allSliderWereRemovedFromActiveSlidersEvent(::System::Action* value);
    // public System.Void remove_allSliderWereRemovedFromActiveSlidersEvent(System.Action value)
    // Offset: 0x2AA17E0
    void remove_allSliderWereRemovedFromActiveSlidersEvent(::System::Action* value);
    // protected System.Void Start()
    // Offset: 0x2AA18B4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x2AA198C
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x2AA1A78
    void Update();
    // private System.Void AddActiveSlider(SliderController newSliderController)
    // Offset: 0x2AA1BE0
    void AddActiveSlider(::GlobalNamespace::SliderController* newSliderController);
    // private System.Void RemoveActiveSlider(SliderController sliderController)
    // Offset: 0x2AA1DA4
    void RemoveActiveSlider(::GlobalNamespace::SliderController* sliderController);
    // private System.Void HandleSliderWasSpawned(SliderController sliderController)
    // Offset: 0x2AA1E3C
    void HandleSliderWasSpawned(::GlobalNamespace::SliderController* sliderController);
    // private System.Void HandleSliderWasDespawned(SliderController sliderController)
    // Offset: 0x2AA1E74
    void HandleSliderWasDespawned(::GlobalNamespace::SliderController* sliderController);
    // public System.Void .ctor()
    // Offset: 0x2AA1EAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderInteractionManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderInteractionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderInteractionManager*, creationType>()));
    }
  }; // SliderInteractionManager
  #pragma pack(pop)
  static check_size<sizeof(SliderInteractionManager), 64 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::SliderController*>*)> __GlobalNamespace_SliderInteractionManagerSizeCheck;
  static_assert(sizeof(SliderInteractionManager) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::get_colorType
// Il2CppName: get_colorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorType (GlobalNamespace::SliderInteractionManager::*)()>(&GlobalNamespace::SliderInteractionManager::get_colorType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "get_colorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::get_saberInteractionParam
// Il2CppName: get_saberInteractionParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SliderInteractionManager::*)()>(&GlobalNamespace::SliderInteractionManager::get_saberInteractionParam)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "get_saberInteractionParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::set_saberInteractionParam
// Il2CppName: set_saberInteractionParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)(float)>(&GlobalNamespace::SliderInteractionManager::set_saberInteractionParam)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "set_saberInteractionParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::add_sliderWasAddedToActiveSlidersEvent
// Il2CppName: add_sliderWasAddedToActiveSlidersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)(::System::Action_1<float>*)>(&GlobalNamespace::SliderInteractionManager::add_sliderWasAddedToActiveSlidersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "add_sliderWasAddedToActiveSlidersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::remove_sliderWasAddedToActiveSlidersEvent
// Il2CppName: remove_sliderWasAddedToActiveSlidersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)(::System::Action_1<float>*)>(&GlobalNamespace::SliderInteractionManager::remove_sliderWasAddedToActiveSlidersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "remove_sliderWasAddedToActiveSlidersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::add_allSliderWereRemovedFromActiveSlidersEvent
// Il2CppName: add_allSliderWereRemovedFromActiveSlidersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)(::System::Action*)>(&GlobalNamespace::SliderInteractionManager::add_allSliderWereRemovedFromActiveSlidersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "add_allSliderWereRemovedFromActiveSlidersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::remove_allSliderWereRemovedFromActiveSlidersEvent
// Il2CppName: remove_allSliderWereRemovedFromActiveSlidersEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)(::System::Action*)>(&GlobalNamespace::SliderInteractionManager::remove_allSliderWereRemovedFromActiveSlidersEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "remove_allSliderWereRemovedFromActiveSlidersEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)()>(&GlobalNamespace::SliderInteractionManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)()>(&GlobalNamespace::SliderInteractionManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)()>(&GlobalNamespace::SliderInteractionManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::AddActiveSlider
// Il2CppName: AddActiveSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)(::GlobalNamespace::SliderController*)>(&GlobalNamespace::SliderInteractionManager::AddActiveSlider)> {
  static const MethodInfo* get() {
    static auto* newSliderController = &::il2cpp_utils::GetClassFromName("", "SliderController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "AddActiveSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newSliderController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::RemoveActiveSlider
// Il2CppName: RemoveActiveSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)(::GlobalNamespace::SliderController*)>(&GlobalNamespace::SliderInteractionManager::RemoveActiveSlider)> {
  static const MethodInfo* get() {
    static auto* sliderController = &::il2cpp_utils::GetClassFromName("", "SliderController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "RemoveActiveSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::HandleSliderWasSpawned
// Il2CppName: HandleSliderWasSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)(::GlobalNamespace::SliderController*)>(&GlobalNamespace::SliderInteractionManager::HandleSliderWasSpawned)> {
  static const MethodInfo* get() {
    static auto* sliderController = &::il2cpp_utils::GetClassFromName("", "SliderController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "HandleSliderWasSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::HandleSliderWasDespawned
// Il2CppName: HandleSliderWasDespawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderInteractionManager::*)(::GlobalNamespace::SliderController*)>(&GlobalNamespace::SliderInteractionManager::HandleSliderWasDespawned)> {
  static const MethodInfo* get() {
    static auto* sliderController = &::il2cpp_utils::GetClassFromName("", "SliderController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SliderInteractionManager*), "HandleSliderWasDespawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SliderInteractionManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
