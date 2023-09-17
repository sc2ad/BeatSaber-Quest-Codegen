#pragma once
namespace {
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::IInputActionCollection2.get_bindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::IInputActionCollection2::*)()>(&::UnityEngine::InputSystem::IInputActionCollection2::get_bindings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::IInputActionCollection2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::IInputActionCollection2>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::IInputActionCollection2.FindAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction (::UnityEngine::InputSystem::IInputActionCollection2::*)(::StringW, bool)>(&::UnityEngine::InputSystem::IInputActionCollection2::FindAction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::IInputActionCollection2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::IInputActionCollection2>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::IInputActionCollection2.FindBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::IInputActionCollection2::*)(::UnityEngine::InputSystem::InputBinding, ByRef<::UnityEngine::InputSystem::InputAction>)>(&::UnityEngine::InputSystem::IInputActionCollection2::FindBinding)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::IInputActionCollection2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::IInputActionCollection2>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputActionCollection
constexpr  ::UnityEngine::InputSystem::IInputActionCollection2::operator ::UnityEngine::InputSystem::IInputActionCollection() const noexcept {
return ::UnityEngine::InputSystem::IInputActionCollection(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>
constexpr  ::UnityEngine::InputSystem::IInputActionCollection2::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::InputSystem::IInputActionCollection2::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding> ::UnityEngine::InputSystem::IInputActionCollection2::get_bindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::IInputActionCollection2>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param throwIfNotFound: bool (default: false)
 ::UnityEngine::InputSystem::InputAction ::UnityEngine::InputSystem::IInputActionCollection2::FindAction(::StringW actionNameOrId, bool throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::IInputActionCollection2>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction, false>(const_cast<void*>(instance), ___internal_method, actionNameOrId, throwIfNotFound);
}
 int32_t ::UnityEngine::InputSystem::IInputActionCollection2::FindBinding(::UnityEngine::InputSystem::InputBinding mask, ByRef<::UnityEngine::InputSystem::InputAction> action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::IInputActionCollection2>::get(),
                            "FindBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, mask, action);
}
} // end anonymous namespace
