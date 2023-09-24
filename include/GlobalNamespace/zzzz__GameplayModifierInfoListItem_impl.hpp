#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: GlobalNamespace::GameplayModifierInfoListItem.SetModifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifierInfoListItem::*)(GlobalNamespace::GameplayModifierParamsSO, bool)>(&GlobalNamespace::GameplayModifierInfoListItem::SetModifier)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2122f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierInfoListItem>::get(),
                            "SetModifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierParamsSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifierInfoListItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifierInfoListItem::*)()>(&GlobalNamespace::GameplayModifierInfoListItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2123150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierInfoListItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameplayModifierInfoListItem::__set__hoverHint(HMUI::HoverHint value)  {
::cordl_internals::setInstanceField<HMUI::HoverHint, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::HoverHint>(value));
}
constexpr HMUI::HoverHint GlobalNamespace::GameplayModifierInfoListItem::__get__hoverHint() const {
return ::cordl_internals::getInstanceField<HMUI::HoverHint, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifierInfoListItem::__set__iconImage(UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Image, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Image>(value));
}
constexpr UnityEngine::UI::Image GlobalNamespace::GameplayModifierInfoListItem::__get__iconImage() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Image, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
/// @param showName: bool (default: false)
 void GlobalNamespace::GameplayModifierInfoListItem::SetModifier(GlobalNamespace::GameplayModifierParamsSO modifierParam, bool showName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierInfoListItem>::get(),
                            "SetModifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GameplayModifierParamsSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, modifierParam, showName);
}
 GlobalNamespace::GameplayModifierInfoListItem GlobalNamespace::GameplayModifierInfoListItem::New_ctor()  {
GlobalNamespace::GameplayModifierInfoListItem o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GameplayModifierInfoListItem>())};
return o;
}
 void GlobalNamespace::GameplayModifierInfoListItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierInfoListItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
