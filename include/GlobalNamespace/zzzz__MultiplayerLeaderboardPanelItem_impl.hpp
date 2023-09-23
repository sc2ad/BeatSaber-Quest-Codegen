#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelItem_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: GlobalNamespace::MultiplayerLeaderboardPanelItem.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeaderboardPanelItem::*)(int32_t, ::StringW, int32_t, bool, int32_t)>(&GlobalNamespace::MultiplayerLeaderboardPanelItem::SetData)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x22766e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLeaderboardPanelItem>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLeaderboardPanelItem.set_hide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeaderboardPanelItem::*)(bool)>(&GlobalNamespace::MultiplayerLeaderboardPanelItem::set_hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2276470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLeaderboardPanelItem>::get(),
                            "set_hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MultiplayerLeaderboardPanelItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeaderboardPanelItem::*)()>(&GlobalNamespace::MultiplayerLeaderboardPanelItem::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22769bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLeaderboardPanelItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__playerNameText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__playerNameText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__scoreText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__scoreText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__positionText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__positionText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__backgroundImage(UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Image, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Image>(value));
}
constexpr UnityEngine::UI::Image GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__backgroundImage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Image, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__normalPlayerTextColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__normalPlayerTextColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__failedPlayerTextColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__failedPlayerTextColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__firstPlayerBackgroundColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__firstPlayerBackgroundColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__lastPlayerBackgroundColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__lastPlayerBackgroundColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__prevPosition(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__prevPlayerName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevPlayerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__prevScore(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__prevFailed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevFailed() const {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__set__prevNumberOfPlayers(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MultiplayerLeaderboardPanelItem::__get__prevNumberOfPlayers() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MultiplayerLeaderboardPanelItem::SetData(int32_t position, ::StringW playerName, int32_t score, bool failed, int32_t numberOfPlayers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLeaderboardPanelItem>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position, playerName, score, failed, numberOfPlayers);
}
 void GlobalNamespace::MultiplayerLeaderboardPanelItem::set_hide(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLeaderboardPanelItem>::get(),
                            "set_hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 GlobalNamespace::MultiplayerLeaderboardPanelItem::MultiplayerLeaderboardPanelItem()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MultiplayerLeaderboardPanelItem>())) {}
 void GlobalNamespace::MultiplayerLeaderboardPanelItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MultiplayerLeaderboardPanelItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
