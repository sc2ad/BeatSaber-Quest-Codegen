#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierToggle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "HMUI/zzzz__HoverTextSetter_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: GlobalNamespace::GameplayModifierToggle.get_toggle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Toggle (GlobalNamespace::GameplayModifierToggle::*)()>(&GlobalNamespace::GameplayModifierToggle::get_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2146a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierToggle>::get(),
                            "get_toggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifierToggle.get_gameplayModifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifierParamsSO (GlobalNamespace::GameplayModifierToggle::*)()>(&GlobalNamespace::GameplayModifierToggle::get_gameplayModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2146a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierToggle>::get(),
                            "get_gameplayModifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifierToggle.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifierToggle::*)()>(&GlobalNamespace::GameplayModifierToggle::Start)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x2146a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierToggle>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifierToggle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifierToggle::*)()>(&GlobalNamespace::GameplayModifierToggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2146dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierToggle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameplayModifierToggle::__set__gameplayModifier(GlobalNamespace::GameplayModifierParamsSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GameplayModifierParamsSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GameplayModifierParamsSO>(value));
}
constexpr GlobalNamespace::GameplayModifierParamsSO GlobalNamespace::GameplayModifierToggle::__get__gameplayModifier() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GameplayModifierParamsSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__nameText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::GameplayModifierToggle::__get__nameText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__multiplierText(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::GameplayModifierToggle::__get__multiplierText() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__hoverTextSetter(HMUI::HoverTextSetter value)  {
::cordl_internals::setInstanceField<HMUI::HoverTextSetter, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::HoverTextSetter>(value));
}
constexpr HMUI::HoverTextSetter GlobalNamespace::GameplayModifierToggle::__get__hoverTextSetter() const {
return ::cordl_internals::getInstanceField<HMUI::HoverTextSetter, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__icon(UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Image, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Image>(value));
}
constexpr UnityEngine::UI::Image GlobalNamespace::GameplayModifierToggle::__get__icon() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Image, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__toggle(UnityEngine::UI::Toggle value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Toggle, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Toggle>(value));
}
constexpr UnityEngine::UI::Toggle GlobalNamespace::GameplayModifierToggle::__get__toggle() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Toggle, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifierToggle::__set__positiveColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::GameplayModifierToggle::__get__positiveColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UI::Toggle GlobalNamespace::GameplayModifierToggle::get_toggle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierToggle>::get(),
                            "get_toggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Toggle, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplayModifierParamsSO GlobalNamespace::GameplayModifierToggle::get_gameplayModifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierToggle>::get(),
                            "get_gameplayModifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayModifierParamsSO, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayModifierToggle::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierToggle>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GameplayModifierToggle GlobalNamespace::GameplayModifierToggle::New_ctor()  {
GlobalNamespace::GameplayModifierToggle o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GameplayModifierToggle>())};
return o;
}
 void GlobalNamespace::GameplayModifierToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifierToggle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
