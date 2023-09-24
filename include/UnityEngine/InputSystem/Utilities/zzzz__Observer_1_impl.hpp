#pragma once
#include "UnityEngine/InputSystem/Utilities/zzzz__Observer_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
/// @brief Convert operator to System::IObserver_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::Observer_1<TValue>::operator System::IObserver_1<TValue>() const noexcept {
return System::IObserver_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__set_m_OnNext(System::Action_1<TValue> value)  {
::cordl_internals::setInstanceField<System::Action_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<TValue>>(value));
}
constexpr System::Action_1<TValue> UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__get_m_OnNext() const {
return ::cordl_internals::getInstanceField<System::Action_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__set_m_OnCompleted(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__get_m_OnCompleted() const {
return ::cordl_internals::getInstanceField<System::Action, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
/// @param onCompleted: System::Action (default: csnull)
 UnityEngine::InputSystem::Utilities::Observer_1<TValue> UnityEngine::InputSystem::Utilities::Observer_1<TValue>::New_ctor(System::Action_1<TValue> onNext, System::Action onCompleted)  {
UnityEngine::InputSystem::Utilities::Observer_1<TValue> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Utilities::Observer_1<TValue>>(onNext, onCompleted))};
return o;
}
/// @param onCompleted: System::Action (default: csnull)
 void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::_ctor(System::Action_1<TValue> onNext, System::Action onCompleted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onNext, onCompleted);
}
 void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1<TValue>>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::OnError(System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1<TValue>>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::OnNext(TValue evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::Observer_1<TValue>>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
