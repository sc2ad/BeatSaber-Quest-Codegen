#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData::*)(bool, bool, bool)>(&GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2274b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData::__set_hide(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData::__get_hide() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData::__set_showEnergyPanel(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData::__get_showEnergyPanel() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData::__set_advancedHUD(bool value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData::__get_advancedHUD() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "hide", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "showEnergyPanel", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "advancedHUD", ty: "bool", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData::GlobalNamespace__CoreGameHUDController__InitData(bool hide, bool showEnergyPanel, bool advancedHUD)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__CoreGameHUDController__InitData>(hide, showEnergyPanel, advancedHUD))) {}
 void GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData::_ctor(bool hide, bool showEnergyPanel, bool advancedHUD)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hide, showEnergyPanel, advancedHUD);
}
//  Writing Method size for method: GlobalNamespace::CoreGameHUDController.get_songProgressPanelGO
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (GlobalNamespace::CoreGameHUDController::*)()>(&GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2274a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "get_songProgressPanelGO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CoreGameHUDController.get_relativeScoreGo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (GlobalNamespace::CoreGameHUDController::*)()>(&GlobalNamespace::CoreGameHUDController::get_relativeScoreGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2274a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "get_relativeScoreGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CoreGameHUDController.get_immediateRankGo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (GlobalNamespace::CoreGameHUDController::*)()>(&GlobalNamespace::CoreGameHUDController::get_immediateRankGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2274a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "get_immediateRankGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CoreGameHUDController.get_energyPanelGo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (GlobalNamespace::CoreGameHUDController::*)()>(&GlobalNamespace::CoreGameHUDController::get_energyPanelGo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2274a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "get_energyPanelGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CoreGameHUDController.set_alpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CoreGameHUDController::*)(float_t)>(&GlobalNamespace::CoreGameHUDController::set_alpha)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2274a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CoreGameHUDController.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CoreGameHUDController::*)(GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData)>(&GlobalNamespace::CoreGameHUDController::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2274aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CoreGameHUDController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CoreGameHUDController::*)()>(&GlobalNamespace::CoreGameHUDController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2274b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CoreGameHUDController::__set__songProgressPanelGO(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::CoreGameHUDController::__get__songProgressPanelGO() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__relativeScoreGO(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::CoreGameHUDController::__get__relativeScoreGO() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__immediateRankGO(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::CoreGameHUDController::__get__immediateRankGO() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__energyPanelGO(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::CoreGameHUDController::__get__energyPanelGO() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CoreGameHUDController::__set__canvasGroup(UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<UnityEngine::CanvasGroup, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::CanvasGroup>(value));
}
constexpr UnityEngine::CanvasGroup GlobalNamespace::CoreGameHUDController::__get__canvasGroup() const {
return ::cordl_internals::getInstanceField<UnityEngine::CanvasGroup, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::GameObject GlobalNamespace::CoreGameHUDController::get_songProgressPanelGO()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "get_songProgressPanelGO",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::GameObject GlobalNamespace::CoreGameHUDController::get_relativeScoreGo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "get_relativeScoreGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::GameObject GlobalNamespace::CoreGameHUDController::get_immediateRankGo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "get_immediateRankGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::GameObject GlobalNamespace::CoreGameHUDController::get_energyPanelGo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "get_energyPanelGo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::CoreGameHUDController::set_alpha(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::CoreGameHUDController::Initialize(GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData initData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initData);
}
// Ctor Parameters []
 GlobalNamespace::CoreGameHUDController::CoreGameHUDController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<CoreGameHUDController>())) {}
 void GlobalNamespace::CoreGameHUDController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CoreGameHUDController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
