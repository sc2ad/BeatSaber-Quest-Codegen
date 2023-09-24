#pragma once
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__set__relatedTarget_k__BackingField(UnityEngine::UIElements::Focusable value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::Focusable, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::Focusable>(value));
}
constexpr UnityEngine::UIElements::Focusable UnityEngine::UIElements::FocusEventBase_1<T>::__get__relatedTarget_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::Focusable, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__set__direction_k__BackingField(UnityEngine::UIElements::FocusChangeDirection value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::FocusChangeDirection, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::FocusChangeDirection>(value));
}
constexpr UnityEngine::UIElements::FocusChangeDirection UnityEngine::UIElements::FocusEventBase_1<T>::__get__direction_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::FocusChangeDirection, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__set__focusController_k__BackingField(UnityEngine::UIElements::FocusController value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::FocusController, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UIElements::FocusController>(value));
}
constexpr UnityEngine::UIElements::FocusController UnityEngine::UIElements::FocusEventBase_1<T>::__get__focusController_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::FocusController, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__set__IsFocusDelegated_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::FocusEventBase_1<T>::__get__IsFocusDelegated_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::Focusable UnityEngine::UIElements::FocusEventBase_1<T>::get_relatedTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "get_relatedTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::Focusable, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::FocusEventBase_1<T>::set_relatedTarget(UnityEngine::UIElements::Focusable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "set_relatedTarget",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::Focusable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::FocusChangeDirection UnityEngine::UIElements::FocusEventBase_1<T>::get_direction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "get_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::FocusChangeDirection, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::FocusEventBase_1<T>::set_direction(UnityEngine::UIElements::FocusChangeDirection value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "set_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::FocusChangeDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UIElements::FocusController UnityEngine::UIElements::FocusEventBase_1<T>::get_focusController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "get_focusController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::FocusController, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::FocusEventBase_1<T>::set_focusController(UnityEngine::UIElements::FocusController value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "set_focusController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::FocusController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UIElements::FocusEventBase_1<T>::get_IsFocusDelegated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "get_IsFocusDelegated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::FocusEventBase_1<T>::set_IsFocusDelegated(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "set_IsFocusDelegated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::UIElements::FocusEventBase_1<T>::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UIElements::FocusEventBase_1<T>::LocalInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "LocalInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param bIsFocusDelegated: bool (default: false)
 T UnityEngine::UIElements::FocusEventBase_1<T>::GetPooled(UnityEngine::UIElements::IEventHandler target, UnityEngine::UIElements::Focusable relatedTarget, UnityEngine::UIElements::FocusChangeDirection direction, UnityEngine::UIElements::FocusController focusController, bool bIsFocusDelegated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            "GetPooled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IEventHandler>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::Focusable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::FocusChangeDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::FocusController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, target, relatedTarget, direction, focusController, bIsFocusDelegated);
}
 UnityEngine::UIElements::FocusEventBase_1<T> UnityEngine::UIElements::FocusEventBase_1<T>::New_ctor()  {
UnityEngine::UIElements::FocusEventBase_1<T> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::FocusEventBase_1<T>>())};
return o;
}
 void UnityEngine::UIElements::FocusEventBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::FocusEventBase_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
