#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::Pool::PooledObject_1<T>::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Pool", ty: "UnityEngine::Pool::IObjectPool_1<T>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::Pool::PooledObject_1<T>::PooledObject_1(T m_ToReturn, UnityEngine::Pool::IObjectPool_1<T> m_Pool) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_ToReturn = m_ToReturn;
this->m_Pool = m_Pool;
}
constexpr void UnityEngine::Pool::PooledObject_1<T>::__set_m_ToReturn(T value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->__instance, std::forward<T>(value));
}
constexpr T UnityEngine::Pool::PooledObject_1<T>::__get_m_ToReturn() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->__instance);
}
constexpr void UnityEngine::Pool::PooledObject_1<T>::__set_m_Pool(UnityEngine::Pool::IObjectPool_1<T> value)  {
::cordl_internals::setInstanceField<UnityEngine::Pool::IObjectPool_1<T>, 0x8>(this->__instance, std::forward<UnityEngine::Pool::IObjectPool_1<T>>(value));
}
constexpr UnityEngine::Pool::IObjectPool_1<T> UnityEngine::Pool::PooledObject_1<T>::__get_m_Pool() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pool::IObjectPool_1<T>, 0x8>(this->__instance);
}
 void UnityEngine::Pool::PooledObject_1<T>::_ctor(T value, UnityEngine::Pool::IObjectPool_1<T> pool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Pool::PooledObject_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Pool::IObjectPool_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value, pool);
}
 void UnityEngine::Pool::PooledObject_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Pool::PooledObject_1<T>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
