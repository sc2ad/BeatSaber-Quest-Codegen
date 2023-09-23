#pragma once
#include "UnityEngine/InputSystem/zzzz__InputValue_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::InputValue.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::InputSystem::InputValue::*)()>(&UnityEngine::InputSystem::InputValue::Get)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29296c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputValue>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputValue.get_isPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputValue::*)()>(&UnityEngine::InputSystem::InputValue::get_isPressed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2929724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputValue>::get(),
                            "get_isPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::InputValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputValue::*)()>(&UnityEngine::InputSystem::InputValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29297a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::InputValue::__set_m_Context(System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>>(value));
}
constexpr System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> UnityEngine::InputSystem::InputValue::__get_m_Context() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::InputValue::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputValue>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TValue>
 TValue UnityEngine::InputSystem::InputValue::Get()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputValue>::get(),
                        "Get",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::InputValue::get_isPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputValue>::get(),
                            "get_isPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::InputSystem::InputValue::InputValue()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InputValue>())) {}
 void UnityEngine::InputSystem::InputValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::InputValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
