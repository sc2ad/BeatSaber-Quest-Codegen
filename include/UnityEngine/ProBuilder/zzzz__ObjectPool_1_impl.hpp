#pragma once
#include "UnityEngine/ProBuilder/zzzz__ObjectPool_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::ProBuilder::ObjectPool_1<T>::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_m_IsDisposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ProBuilder::ObjectPool_1<T>::__get_m_IsDisposed() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_m_Pool(System::Collections::Generic::Queue_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Queue_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Queue_1<T>>(value));
}
constexpr System::Collections::Generic::Queue_1<T> UnityEngine::ProBuilder::ObjectPool_1<T>::__get_m_Pool() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Queue_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_desiredSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ProBuilder::ObjectPool_1<T>::__get_desiredSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_constructor(System::Func_1<T> value)  {
::cordl_internals::setInstanceField<System::Func_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<T>>(value));
}
constexpr System::Func_1<T> UnityEngine::ProBuilder::ObjectPool_1<T>::__get_constructor() const {
return ::cordl_internals::getInstanceField<System::Func_1<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_destructor(System::Action_1<T> value)  {
::cordl_internals::setInstanceField<System::Action_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<T>>(value));
}
constexpr System::Action_1<T> UnityEngine::ProBuilder::ObjectPool_1<T>::__get_destructor() const {
return ::cordl_internals::getInstanceField<System::Action_1<T>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
/// @param lazyInitialization: bool (default: false)
 UnityEngine::ProBuilder::ObjectPool_1<T> UnityEngine::ProBuilder::ObjectPool_1<T>::New_ctor(int32_t initialSize, int32_t desiredSize, System::Func_1<T> constructor, System::Action_1<T> destructor, bool lazyInitialization)  {
UnityEngine::ProBuilder::ObjectPool_1<T> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ProBuilder::ObjectPool_1<T>>(initialSize, desiredSize, constructor, destructor, lazyInitialization))};
return o;
}
/// @param lazyInitialization: bool (default: false)
 void UnityEngine::ProBuilder::ObjectPool_1<T>::_ctor(int32_t initialSize, int32_t desiredSize, System::Func_1<T> constructor, System::Action_1<T> destructor, bool lazyInitialization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ObjectPool_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initialSize, desiredSize, constructor, destructor, lazyInitialization);
}
 T UnityEngine::ProBuilder::ObjectPool_1<T>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ObjectPool_1<T>>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ProBuilder::ObjectPool_1<T>::Enqueue(T obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ObjectPool_1<T>>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void UnityEngine::ProBuilder::ObjectPool_1<T>::Empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ObjectPool_1<T>>::get(),
                            "Empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ProBuilder::ObjectPool_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ObjectPool_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ProBuilder::ObjectPool_1<T>::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ProBuilder::ObjectPool_1<T>>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
