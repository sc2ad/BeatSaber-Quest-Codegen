#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Pool::PooledObject_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Pool::PooledObject_1::*)(T, ::UnityEngine::Pool::IObjectPool_1<T>)>(&::UnityEngine::Pool::PooledObject_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PooledObject_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pool::IObjectPool_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Pool::PooledObject_1.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Pool::PooledObject_1::*)()>(&::UnityEngine::Pool::PooledObject_1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PooledObject_1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::Pool::PooledObject_1::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Pool", ty: "::UnityEngine::Pool::IObjectPool_1<T>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::Pool::PooledObject_1::PooledObject_1(T m_ToReturn, ::UnityEngine::Pool::IObjectPool_1<T> m_Pool) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_ToReturn = m_ToReturn;
this->m_Pool = m_Pool;
}
constexpr void ::UnityEngine::Pool::PooledObject_1::__set_m_ToReturn(T value)  {
::cordl_internals::setInstanceField<T, 0x0>(this->__instance, std::forward<T>(value));
}
constexpr T ::UnityEngine::Pool::PooledObject_1::__get_m_ToReturn() const {
return ::cordl_internals::getInstanceField<T, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Pool::PooledObject_1::__set_m_Pool(::UnityEngine::Pool::IObjectPool_1<T> value)  {
::cordl_internals::setInstanceField<::UnityEngine::Pool::IObjectPool_1<T>, 0x8>(this->__instance, std::forward<::UnityEngine::Pool::IObjectPool_1<T>>(value));
}
constexpr ::UnityEngine::Pool::IObjectPool_1<T> ::UnityEngine::Pool::PooledObject_1::__get_m_Pool() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Pool::IObjectPool_1<T>, 0x8>(this->__instance);
}
 void ::UnityEngine::Pool::PooledObject_1::_ctor(T value, ::UnityEngine::Pool::IObjectPool_1<T> pool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PooledObject_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pool::IObjectPool_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value, pool);
}
 void ::UnityEngine::Pool::PooledObject_1::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PooledObject_1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
