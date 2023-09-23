#pragma once
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__SelectSubMenuDestination_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination::GlobalNamespace__SelectSubMenuDestination__Destination(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination  GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination::MainMenu{0};
constexpr GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination  GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination::Campaign{1};
constexpr GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination  GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination::SoloFreePlay{2};
constexpr GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination  GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination::PartyFreePlay{3};
constexpr GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination  GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination::Settings{4};
constexpr GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination  GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination::Tutorial{5};
constexpr GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination  GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination::Multiplayer{6};
//  Writing Method size for method: GlobalNamespace::SelectSubMenuDestination._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SelectSubMenuDestination::*)(GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination)>(&GlobalNamespace::SelectSubMenuDestination::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21bc718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectSubMenuDestination>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectSubMenuDestination::__set_menuDestination(GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination GlobalNamespace::SelectSubMenuDestination::__get_menuDestination() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "menuDestination", ty: "GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination", modifiers: "", def_value: None }]
 GlobalNamespace::SelectSubMenuDestination::SelectSubMenuDestination(GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination menuDestination)  : GlobalNamespace::MenuDestination(THROW_UNLESS(::il2cpp_utils::New<SelectSubMenuDestination>(menuDestination))) {}
 void GlobalNamespace::SelectSubMenuDestination::_ctor(GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination menuDestination)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SelectSubMenuDestination>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SelectSubMenuDestination__Destination>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, menuDestination);
}
