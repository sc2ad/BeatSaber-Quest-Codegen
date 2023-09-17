#pragma once
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__RuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelSettings_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel.get_panelSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PanelSettings (::UnityEngine::UIElements::RuntimePanel::*)()>(&::UnityEngine::UIElements::RuntimePanel::get_panelSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c9f718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel>::get(),
                            "get_panelSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::RuntimePanel (*)(::UnityEngine::ScriptableObject)>(&::UnityEngine::UIElements::RuntimePanel::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c9f720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RuntimePanel::*)(::UnityEngine::ScriptableObject)>(&::UnityEngine::UIElements::RuntimePanel::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2c9f780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RuntimePanel.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RuntimePanel::*)()>(&::UnityEngine::UIElements::RuntimePanel::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c9f9fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::RuntimePanel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
 void ::UnityEngine::UIElements::RuntimePanel::__set_s_EventDispatcher(::UnityEngine::UIElements::EventDispatcher value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::EventDispatcher, "s_EventDispatcher", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel>::get>(std::forward<::UnityEngine::UIElements::EventDispatcher>(value));
}
 ::UnityEngine::UIElements::EventDispatcher ::UnityEngine::UIElements::RuntimePanel::__get_s_EventDispatcher()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventDispatcher, "s_EventDispatcher", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel>::get>();
}
constexpr void ::UnityEngine::UIElements::RuntimePanel::__set_m_PanelSettings(::UnityEngine::UIElements::PanelSettings value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::PanelSettings, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::PanelSettings>(value));
}
constexpr ::UnityEngine::UIElements::PanelSettings ::UnityEngine::UIElements::RuntimePanel::__get_m_PanelSettings() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::PanelSettings, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UIElements::PanelSettings ::UnityEngine::UIElements::RuntimePanel::get_panelSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel>::get(),
                            "get_panelSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PanelSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::UIElements::RuntimePanel ::UnityEngine::UIElements::RuntimePanel::Create(::UnityEngine::ScriptableObject ownerObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::RuntimePanel, false>(nullptr, ___internal_method, ownerObject);
}
// Ctor Parameters [CppParam { name: "ownerObject", ty: "::UnityEngine::ScriptableObject", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::RuntimePanel::RuntimePanel(::UnityEngine::ScriptableObject ownerObject)  : ::UnityEngine::UIElements::BaseRuntimePanel(THROW_UNLESS(::il2cpp_utils::New<RuntimePanel>(ownerObject))) {}
 void ::UnityEngine::UIElements::RuntimePanel::_ctor(::UnityEngine::ScriptableObject ownerObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ownerObject);
}
 void ::UnityEngine::UIElements::RuntimePanel::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RuntimePanel>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
