#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__DefaultScenesTransitionsFromInit_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MenuScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__ShaderWarmupScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultScenesTransitionsFromInit.get_mainMenuScenesTransitionSetupData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuScenesTransitionSetupDataSO (::GlobalNamespace::DefaultScenesTransitionsFromInit::*)()>(&::GlobalNamespace::DefaultScenesTransitionsFromInit::get_mainMenuScenesTransitionSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20b4744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit>::get(),
                            "get_mainMenuScenesTransitionSetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultScenesTransitionsFromInit.TransitionToNextScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultScenesTransitionsFromInit::*)(bool, bool, bool)>(&::GlobalNamespace::DefaultScenesTransitionsFromInit::TransitionToNextScene)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x20b474c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit>::get(),
                            "TransitionToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DefaultScenesTransitionsFromInit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DefaultScenesTransitionsFromInit::*)()>(&::GlobalNamespace::DefaultScenesTransitionsFromInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20b491c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::DefaultScenesTransitionsFromInit::__set__healthWarningScenesTransitionSetupData(::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO ::GlobalNamespace::DefaultScenesTransitionsFromInit::__get__healthWarningScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DefaultScenesTransitionsFromInit::__set__recordingToolScenesTransitionSetupData(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO ::GlobalNamespace::DefaultScenesTransitionsFromInit::__get__recordingToolScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DefaultScenesTransitionsFromInit::__set__mainMenuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuScenesTransitionSetupDataSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MenuScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupDataSO ::GlobalNamespace::DefaultScenesTransitionsFromInit::__get__mainMenuScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuScenesTransitionSetupDataSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DefaultScenesTransitionsFromInit::__set__beatmapEditorScenesTransitionSetupData(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO ::GlobalNamespace::DefaultScenesTransitionsFromInit::__get__beatmapEditorScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DefaultScenesTransitionsFromInit::__set__shaderWarmupScenesTransitionSetupData(::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO>(value));
}
constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO ::GlobalNamespace::DefaultScenesTransitionsFromInit::__get__shaderWarmupScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DefaultScenesTransitionsFromInit::__set__gameScenesManager(::GlobalNamespace::GameScenesManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameScenesManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameScenesManager>(value));
}
constexpr ::GlobalNamespace::GameScenesManager ::GlobalNamespace::DefaultScenesTransitionsFromInit::__get__gameScenesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameScenesManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::MenuScenesTransitionSetupDataSO ::GlobalNamespace::DefaultScenesTransitionsFromInit::get_mainMenuScenesTransitionSetupData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit>::get(),
                            "get_mainMenuScenesTransitionSetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuScenesTransitionSetupDataSO, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::DefaultScenesTransitionsFromInit::TransitionToNextScene(bool goStraightToMenu, bool goStraightToEditor, bool goToRecordingToolScene)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit>::get(),
                            "TransitionToNextScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, goStraightToMenu, goStraightToEditor, goToRecordingToolScene);
}
// Ctor Parameters []
 ::GlobalNamespace::DefaultScenesTransitionsFromInit::DefaultScenesTransitionsFromInit()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<DefaultScenesTransitionsFromInit>())) {}
 void ::GlobalNamespace::DefaultScenesTransitionsFromInit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultScenesTransitionsFromInit>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
