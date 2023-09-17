#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__GameServerBrowserViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameServersFilterText_def.hpp"
#include "GlobalNamespace/zzzz__LoadingControl_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__GameServersListTableView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerBrowserViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerBrowserViewController::*)()>(&::GlobalNamespace::GameServerBrowserViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21765c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerBrowserViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::GameServerBrowserViewController::__set__filterServersButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::GameServerBrowserViewController::__get__filterServersButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerBrowserViewController::__set__filterText(::GlobalNamespace::GameServersFilterText value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameServersFilterText, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameServersFilterText>(value));
}
constexpr ::GlobalNamespace::GameServersFilterText ::GlobalNamespace::GameServerBrowserViewController::__get__filterText() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameServersFilterText, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerBrowserViewController::__set__canBeInvitedOnLocalNetworkToggle(::UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Toggle, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Toggle>(value));
}
constexpr ::UnityEngine::UI::Toggle ::GlobalNamespace::GameServerBrowserViewController::__get__canBeInvitedOnLocalNetworkToggle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Toggle, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerBrowserViewController::__set__createServerButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::GameServerBrowserViewController::__get__createServerButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerBrowserViewController::__set__gameServersListTableView(::GlobalNamespace::GameServersListTableView value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameServersListTableView, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameServersListTableView>(value));
}
constexpr ::GlobalNamespace::GameServersListTableView ::GlobalNamespace::GameServerBrowserViewController::__get__gameServersListTableView() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameServersListTableView, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerBrowserViewController::__set__mainLoadingControl(::GlobalNamespace::LoadingControl value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LoadingControl, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LoadingControl>(value));
}
constexpr ::GlobalNamespace::LoadingControl ::GlobalNamespace::GameServerBrowserViewController::__get__mainLoadingControl() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LoadingControl, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerBrowserViewController::__set__smallLoadingControl(::GlobalNamespace::LoadingControl value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LoadingControl, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LoadingControl>(value));
}
constexpr ::GlobalNamespace::LoadingControl ::GlobalNamespace::GameServerBrowserViewController::__get__smallLoadingControl() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LoadingControl, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::GameServerBrowserViewController::GameServerBrowserViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<GameServerBrowserViewController>())) {}
 void ::GlobalNamespace::GameServerBrowserViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerBrowserViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
