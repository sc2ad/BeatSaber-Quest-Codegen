#pragma once
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_impl.hpp"
#include "UnityEngine/XR/WindowsMR/Input/zzzz__WMRHMD_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
//  Writing Method size for method: UnityEngine::XR::WindowsMR::Input::WMRHMD.get_userPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Controls::ButtonControl (UnityEngine::XR::WindowsMR::Input::WMRHMD::*)()>(&UnityEngine::XR::WindowsMR::Input::WMRHMD::get_userPresence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a34d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::WindowsMR::Input::WMRHMD>::get(),
                            "get_userPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::WindowsMR::Input::WMRHMD.set_userPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::WindowsMR::Input::WMRHMD::*)(UnityEngine::InputSystem::Controls::ButtonControl)>(&UnityEngine::XR::WindowsMR::Input::WMRHMD::set_userPresence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a34dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::WindowsMR::Input::WMRHMD>::get(),
                            "set_userPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::WindowsMR::Input::WMRHMD.FinishSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::WindowsMR::Input::WMRHMD::*)()>(&UnityEngine::XR::WindowsMR::Input::WMRHMD::FinishSetup)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x28a34e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::WindowsMR::Input::WMRHMD),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::WindowsMR::Input::WMRHMD>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::WindowsMR::Input::WMRHMD._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::WindowsMR::Input::WMRHMD::*)()>(&UnityEngine::XR::WindowsMR::Input::WMRHMD::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a3560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::WindowsMR::Input::WMRHMD>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::XR::WindowsMR::Input::WMRHMD::__set__userPresence_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Controls::ButtonControl, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Controls::ButtonControl>(value));
}
constexpr UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::XR::WindowsMR::Input::WMRHMD::__get__userPresence_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Controls::ButtonControl, 0x1a8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::InputSystem::Controls::ButtonControl UnityEngine::XR::WindowsMR::Input::WMRHMD::get_userPresence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::WindowsMR::Input::WMRHMD>::get(),
                            "get_userPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Controls::ButtonControl, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::XR::WindowsMR::Input::WMRHMD::set_userPresence(UnityEngine::InputSystem::Controls::ButtonControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::WindowsMR::Input::WMRHMD>::get(),
                            "set_userPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::XR::WindowsMR::Input::WMRHMD::FinishSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::WindowsMR::Input::WMRHMD>::get(),
                            "FinishSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::XR::WindowsMR::Input::WMRHMD::WMRHMD()  : UnityEngine::InputSystem::XR::XRHMD(THROW_UNLESS(::il2cpp_utils::New<WMRHMD>())) {}
 void UnityEngine::XR::WindowsMR::Input::WMRHMD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::WindowsMR::Input::WMRHMD>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
