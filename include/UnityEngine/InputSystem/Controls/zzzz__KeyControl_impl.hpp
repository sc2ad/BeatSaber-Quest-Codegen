#pragma once
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Controls/zzzz__KeyControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.get_keyCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Key (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::get_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2978738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl>::get(),
                            "get_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.set_keyCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)(::UnityEngine::InputSystem::Key)>(&::UnityEngine::InputSystem::Controls::KeyControl::set_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2978740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl>::get(),
                            "set_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.get_scanCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::get_scanCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2978748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl>::get(),
                            "get_scanCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.RefreshConfiguration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::RefreshConfiguration)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2978764;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::Controls::KeyControl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29788d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::InputSystem::Controls::KeyControl::__set__keyCode_k__BackingField(::UnityEngine::InputSystem::Key value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Key, 0x11c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Key>(value));
}
constexpr ::UnityEngine::InputSystem::Key ::UnityEngine::InputSystem::Controls::KeyControl::__get__keyCode_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Key, 0x11c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Controls::KeyControl::__set_m_ScanCode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Controls::KeyControl::__get_m_ScanCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::InputSystem::Key ::UnityEngine::InputSystem::Controls::KeyControl::get_keyCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl>::get(),
                            "get_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Key, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::Controls::KeyControl::set_keyCode(::UnityEngine::InputSystem::Key value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl>::get(),
                            "set_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t ::UnityEngine::InputSystem::Controls::KeyControl::get_scanCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl>::get(),
                            "get_scanCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::Controls::KeyControl::RefreshConfiguration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl>::get(),
                            "RefreshConfiguration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::Controls::KeyControl::KeyControl()  : ::UnityEngine::InputSystem::Controls::ButtonControl(THROW_UNLESS(::il2cpp_utils::New<KeyControl>())) {}
 void ::UnityEngine::InputSystem::Controls::KeyControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
