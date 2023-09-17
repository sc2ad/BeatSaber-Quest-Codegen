#pragma once
#include "HMUI/zzzz__ButtonSpriteSwap_impl.hpp"
namespace {
#include "HMUI/zzzz__ButtonSpriteSwapToggle_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.get_isToggled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::ButtonSpriteSwapToggle::*)()>(&::HMUI::ButtonSpriteSwapToggle::get_isToggled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fbcdf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle>::get(),
                            "get_isToggled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.set_isToggled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)(bool)>(&::HMUI::ButtonSpriteSwapToggle::set_isToggled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1fbcdf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle>::get(),
                            "set_isToggled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)()>(&::HMUI::ButtonSpriteSwapToggle::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1fbce38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::ButtonSpriteSwapToggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle.HandleButtonSelectionStateDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)(::HMUI::____HMUI__NoTransitionsButton__SelectionState)>(&::HMUI::ButtonSpriteSwapToggle::HandleButtonSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1fbce68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::ButtonSpriteSwapToggle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapToggle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonSpriteSwapToggle::*)()>(&::HMUI::ButtonSpriteSwapToggle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fbcfb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HMUI::ButtonSpriteSwapToggle::__set__resetToggleOnEnable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HMUI::ButtonSpriteSwapToggle::__get__resetToggleOnEnable() const {
return ::cordl_internals::getInstanceField<bool, 0x49>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::ButtonSpriteSwapToggle::__set__ignoreHighlight(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HMUI::ButtonSpriteSwapToggle::__get__ignoreHighlight() const {
return ::cordl_internals::getInstanceField<bool, 0x4a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HMUI::ButtonSpriteSwapToggle::__set__isToggled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::HMUI::ButtonSpriteSwapToggle::__get__isToggled() const {
return ::cordl_internals::getInstanceField<bool, 0x4b>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::HMUI::ButtonSpriteSwapToggle::get_isToggled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle>::get(),
                            "get_isToggled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::ButtonSpriteSwapToggle::set_isToggled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle>::get(),
                            "set_isToggled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::HMUI::ButtonSpriteSwapToggle::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::HMUI::ButtonSpriteSwapToggle::HandleButtonSelectionStateDidChange(::HMUI::____HMUI__NoTransitionsButton__SelectionState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle>::get(),
                            "HandleButtonSelectionStateDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::____HMUI__NoTransitionsButton__SelectionState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
// Ctor Parameters []
 ::HMUI::ButtonSpriteSwapToggle::ButtonSpriteSwapToggle()  : ::HMUI::ButtonSpriteSwap(THROW_UNLESS(::il2cpp_utils::New<ButtonSpriteSwapToggle>())) {}
 void ::HMUI::ButtonSpriteSwapToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonSpriteSwapToggle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
