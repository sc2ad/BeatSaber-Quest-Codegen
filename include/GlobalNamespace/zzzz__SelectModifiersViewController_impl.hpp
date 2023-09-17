#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SelectModifiersViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersPanelController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController.get_gameplayModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers (::GlobalNamespace::SelectModifiersViewController::*)()>(&::GlobalNamespace::SelectModifiersViewController::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2179124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectModifiersViewController::*)(::GlobalNamespace::GameplayModifiers)>(&::GlobalNamespace::SelectModifiersViewController::Setup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2179140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectModifiersViewController::*)(bool, bool, bool)>(&::GlobalNamespace::SelectModifiersViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x217915c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::SelectModifiersViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectModifiersViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectModifiersViewController::*)()>(&::GlobalNamespace::SelectModifiersViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21791fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SelectModifiersViewController::__set__gameplayModifiersPanelController(::GlobalNamespace::GameplayModifiersPanelController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiersPanelController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayModifiersPanelController>(value));
}
constexpr ::GlobalNamespace::GameplayModifiersPanelController ::GlobalNamespace::SelectModifiersViewController::__get__gameplayModifiersPanelController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersPanelController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::GameplayModifiers ::GlobalNamespace::SelectModifiersViewController::get_gameplayModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController>::get(),
                            "get_gameplayModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SelectModifiersViewController::Setup(::GlobalNamespace::GameplayModifiers gameplayModifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gameplayModifiers);
}
 void ::GlobalNamespace::SelectModifiersViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
// Ctor Parameters []
 ::GlobalNamespace::SelectModifiersViewController::SelectModifiersViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<SelectModifiersViewController>())) {}
 void ::GlobalNamespace::SelectModifiersViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectModifiersViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
