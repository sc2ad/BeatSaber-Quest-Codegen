#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPositionHUDController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerPositionHUDController.set_alpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionHUDController::*)(float_t)>(&GlobalNamespace::MultiplayerPositionHUDController::set_alpha)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22769d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPositionHUDController>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerPositionHUDController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionHUDController::*)()>(&GlobalNamespace::MultiplayerPositionHUDController::Start)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x22769ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPositionHUDController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerPositionHUDController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionHUDController::*)()>(&GlobalNamespace::MultiplayerPositionHUDController::Update)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2276b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPositionHUDController>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerPositionHUDController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerPositionHUDController::*)()>(&GlobalNamespace::MultiplayerPositionHUDController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2276cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPositionHUDController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__playerCountText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::MultiplayerPositionHUDController::__get__playerCountText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__positionText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::MultiplayerPositionHUDController::__get__positionText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__canvasGroup(UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<UnityEngine::CanvasGroup, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::CanvasGroup>(value));
}
constexpr UnityEngine::CanvasGroup GlobalNamespace::MultiplayerPositionHUDController::__get__canvasGroup() const {
return ::cordl_internals::getInstanceField<UnityEngine::CanvasGroup, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__firstPlayerAnimationGo(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::MultiplayerPositionHUDController::__get__firstPlayerAnimationGo() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerScoreProvider, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerScoreProvider>(value));
}
constexpr GlobalNamespace::MultiplayerScoreProvider GlobalNamespace::MultiplayerPositionHUDController::__get__scoreProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerScoreProvider, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__playersManager(GlobalNamespace::MultiplayerPlayersManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MultiplayerPlayersManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MultiplayerPlayersManager>(value));
}
constexpr GlobalNamespace::MultiplayerPlayersManager GlobalNamespace::MultiplayerPositionHUDController::__get__playersManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MultiplayerPlayersManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__initData(GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData>(value));
}
constexpr GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData GlobalNamespace::MultiplayerPositionHUDController::__get__initData() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__CoreGameHUDController__InitData, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerPositionHUDController::__set__prevPosition(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MultiplayerPositionHUDController::__get__prevPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerPositionHUDController::set_alpha(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPositionHUDController>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::MultiplayerPositionHUDController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPositionHUDController>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MultiplayerPositionHUDController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPositionHUDController>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerPositionHUDController::MultiplayerPositionHUDController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerPositionHUDController>())) {}
 void GlobalNamespace::MultiplayerPositionHUDController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerPositionHUDController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
