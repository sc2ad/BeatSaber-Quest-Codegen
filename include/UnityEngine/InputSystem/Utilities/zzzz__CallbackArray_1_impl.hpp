#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
// Ctor Parameters [CppParam { name: "m_CannotMutateCallbacksArray", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Callbacks", ty: "UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CallbacksToAdd", ty: "UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CallbacksToRemove", ty: "UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::CallbackArray_1(bool m_CannotMutateCallbacksArray, UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_Callbacks, UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToAdd, UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> m_CallbacksToRemove) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_CannotMutateCallbacksArray = m_CannotMutateCallbacksArray;
this->m_Callbacks = m_Callbacks;
this->m_CallbacksToAdd = m_CallbacksToAdd;
this->m_CallbacksToRemove = m_CallbacksToRemove;
}
constexpr void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::__set_m_CannotMutateCallbacksArray(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::__get_m_CannotMutateCallbacksArray() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::__set_m_Callbacks(UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::__get_m_Callbacks() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::__set_m_CallbacksToAdd(UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>, 0x10>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::__get_m_CallbacksToAdd() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::__set_m_CallbacksToRemove(UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>, 0x18>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate> UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::__get_m_CallbacksToRemove() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>, 0x18>(this->__instance);
}
 int32_t UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::get_length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                            "get_length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 TDelegate UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TDelegate, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, index);
}
 void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::AddCallback(TDelegate dlg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                            "AddCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dlg);
}
 void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::RemoveCallback(TDelegate dlg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                            "RemoveCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, dlg);
}
 void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::LockForChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                            "LockForChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::UnlockForChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                            "UnlockForChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
