#pragma once
#include "UnityEngine/InputSystem/Utilities/zzzz__TakeNObservable_1_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TakeNObservable_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
/// @brief Convert operator to System::IObserver_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>::operator System::IObserver_1<TValue>() const noexcept {
return System::IObserver_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>::__set_m_Observer(System::IObserver_1<TValue> value)  {
::cordl_internals::setInstanceField<System::IObserver_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObserver_1<TValue>>(value));
}
constexpr System::IObserver_1<TValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>::__get_m_Observer() const {
return ::cordl_internals::getInstanceField<System::IObserver_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>::__set_m_Remaining(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>::__get_m_Remaining() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>::New_ctor(UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue> observable, System::IObserver_1<TValue> observer)  {
UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>>(observable, observer))};
return o;
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>::_ctor(UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue> observable, System::IObserver_1<TValue> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, observable, observer);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>::OnError(System::Exception error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>>::get(),
                            "OnError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, error);
}
 void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>::OnNext(TValue evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__TakeNObservable_1__Take<TValue>>::get(),
                            "OnNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
/// @brief Convert operator to System::IObservable_1<TValue>
constexpr  UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::operator System::IObservable_1<TValue>() const noexcept {
return System::IObservable_1<TValue>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__set_m_Source(System::IObservable_1<TValue> value)  {
::cordl_internals::setInstanceField<System::IObservable_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IObservable_1<TValue>>(value));
}
constexpr System::IObservable_1<TValue> UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__get_m_Source() const {
return ::cordl_internals::getInstanceField<System::IObservable_1<TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__set_m_Count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__get_m_Count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue> UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::New_ctor(System::IObservable_1<TValue> source, int32_t count)  {
UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>>(source, count))};
return o;
}
 void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::_ctor(System::IObservable_1<TValue> source, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObservable_1<TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, count);
}
 System::IDisposable UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::Subscribe(System::IObserver_1<TValue> observer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>>::get(),
                            "Subscribe",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IObserver_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IDisposable, false>(const_cast<void*>(instance), ___internal_method, observer);
}
