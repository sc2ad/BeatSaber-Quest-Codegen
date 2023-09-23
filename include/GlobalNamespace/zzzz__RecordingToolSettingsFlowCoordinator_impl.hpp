#pragma once
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettingsFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolConfigViewController_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolLoggingViewController_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSettingsViewController_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData::*)(GlobalNamespace::ScenesTransitionSetupDataSO)>(&GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21449bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData::__set_nextScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ScenesTransitionSetupDataSO>(value));
}
constexpr GlobalNamespace::ScenesTransitionSetupDataSO GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData::__get_nextScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ScenesTransitionSetupDataSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "nextScenesTransitionSetupData", ty: "GlobalNamespace::ScenesTransitionSetupDataSO", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData(GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData>(nextScenesTransitionSetupData))) {}
 void GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData::_ctor(GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ScenesTransitionSetupDataSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nextScenesTransitionSetupData);
}
//  Writing Method size for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)(bool, bool, bool)>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x21447b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::RecordingToolSettingsFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)(bool, bool)>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21448a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::RecordingToolSettingsFlowCoordinator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::Update)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2144948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator.HandleRecordingToolSettingsViewControllerDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::HandleRecordingToolSettingsViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2144974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                            "HandleRecordingToolSettingsViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator.GoToNextScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::GoToNextScene)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2144978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                            "GoToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RecordingToolSettingsFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsFlowCoordinator::*)()>(&GlobalNamespace::RecordingToolSettingsFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21449b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator::__set__recordingToolConfigViewController(GlobalNamespace::RecordingToolConfigViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RecordingToolConfigViewController, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RecordingToolConfigViewController>(value));
}
constexpr GlobalNamespace::RecordingToolConfigViewController GlobalNamespace::RecordingToolSettingsFlowCoordinator::__get__recordingToolConfigViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RecordingToolConfigViewController, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator::__set__recordingToolSettingsViewController(GlobalNamespace::RecordingToolSettingsViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RecordingToolSettingsViewController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RecordingToolSettingsViewController>(value));
}
constexpr GlobalNamespace::RecordingToolSettingsViewController GlobalNamespace::RecordingToolSettingsFlowCoordinator::__get__recordingToolSettingsViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RecordingToolSettingsViewController, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator::__set__recordingToolLoggingViewController(GlobalNamespace::RecordingToolLoggingViewController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RecordingToolLoggingViewController, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RecordingToolLoggingViewController>(value));
}
constexpr GlobalNamespace::RecordingToolLoggingViewController GlobalNamespace::RecordingToolSettingsFlowCoordinator::__get__recordingToolLoggingViewController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RecordingToolLoggingViewController, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator::__set__gameScenesManager(GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameScenesManager, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameScenesManager>(value));
}
constexpr GlobalNamespace::GameScenesManager GlobalNamespace::RecordingToolSettingsFlowCoordinator::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameScenesManager, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RecordingToolSettingsFlowCoordinator::__set__initData(GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData GlobalNamespace::RecordingToolSettingsFlowCoordinator::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void GlobalNamespace::RecordingToolSettingsFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void GlobalNamespace::RecordingToolSettingsFlowCoordinator::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::RecordingToolSettingsFlowCoordinator::HandleRecordingToolSettingsViewControllerDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                            "HandleRecordingToolSettingsViewControllerDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::RecordingToolSettingsFlowCoordinator::GoToNextScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                            "GoToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::RecordingToolSettingsFlowCoordinator::RecordingToolSettingsFlowCoordinator()  : HMUI::FlowCoordinator(THROW_UNLESS(::il2cpp_utils::New<RecordingToolSettingsFlowCoordinator>())) {}
 void GlobalNamespace::RecordingToolSettingsFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RecordingToolSettingsFlowCoordinator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
