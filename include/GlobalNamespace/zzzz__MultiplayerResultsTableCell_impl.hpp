#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MultiplayerResultsTableCell_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsAvatarController_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableCell.set_alpha
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableCell::*)(float_t)>(&::GlobalNamespace::MultiplayerResultsTableCell::set_alpha)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x218c904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableCell>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableCell.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableCell::*)(::GlobalNamespace::IConnectedPlayer, int32_t, ::StringW, ::GlobalNamespace::LevelCompletionResults, bool, int32_t)>(&::GlobalNamespace::MultiplayerResultsTableCell::SetData)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x218c9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableCell>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsTableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsTableCell::*)()>(&::GlobalNamespace::MultiplayerResultsTableCell::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x218cd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__positionText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::MultiplayerResultsTableCell::__get__positionText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__nameText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::MultiplayerResultsTableCell::__get__nameText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__scoreText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::MultiplayerResultsTableCell::__get__scoreText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__rankText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::MultiplayerResultsTableCell::__get__rankText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> ::GlobalNamespace::MultiplayerResultsTableCell::__get__lights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__backgroundImage(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::MultiplayerResultsTableCell::__get__backgroundImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__canvasGroup(::UnityEngine::CanvasGroup value)  {
::cordl_internals::setInstanceField<::UnityEngine::CanvasGroup, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::CanvasGroup>(value));
}
constexpr ::UnityEngine::CanvasGroup ::GlobalNamespace::MultiplayerResultsTableCell::__get__canvasGroup() const {
return ::cordl_internals::getInstanceField<::UnityEngine::CanvasGroup, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__multiplayerResultsAvatarController(::GlobalNamespace::MultiplayerResultsAvatarController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsAvatarController, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MultiplayerResultsAvatarController>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsAvatarController ::GlobalNamespace::MultiplayerResultsTableCell::__get__multiplayerResultsAvatarController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsAvatarController, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__avatarScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MultiplayerResultsTableCell::__get__avatarScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__normalSecondPlayerColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::MultiplayerResultsTableCell::__get__normalSecondPlayerColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__normalLastPlayerColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xac>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::MultiplayerResultsTableCell::__get__normalLastPlayerColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xac>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__localPlayerColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::MultiplayerResultsTableCell::__get__localPlayerColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__winnerColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::MultiplayerResultsTableCell::__get__winnerColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xcc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MultiplayerResultsTableCell::__set__lightColor(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::MultiplayerResultsTableCell::__get__lightColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0xdc>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MultiplayerResultsTableCell::set_alpha(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableCell>::get(),
                            "set_alpha",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::MultiplayerResultsTableCell::SetData(::GlobalNamespace::IConnectedPlayer connectedPlayer, int32_t position, ::StringW playerName, ::GlobalNamespace::LevelCompletionResults levelCompletionResults, bool isLocalPlayer, int32_t numberOfPlayers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableCell>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectedPlayer, position, playerName, levelCompletionResults, isLocalPlayer, numberOfPlayers);
}
// Ctor Parameters []
 ::GlobalNamespace::MultiplayerResultsTableCell::MultiplayerResultsTableCell()  : ::HMUI::TableCell(THROW_UNLESS(::il2cpp_utils::New<MultiplayerResultsTableCell>())) {}
 void ::GlobalNamespace::MultiplayerResultsTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
