#pragma once
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
namespace {
#include "UnityEngine/zzzz__AndroidJavaRunnableProxy_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaRunnable_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaRunnableProxy::*)(::UnityEngine::AndroidJavaRunnable)>(&::UnityEngine::AndroidJavaRunnableProxy::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b0e2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaRunnable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaRunnableProxy.run
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaRunnableProxy::*)()>(&::UnityEngine::AndroidJavaRunnableProxy::run)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2b0e3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy>::get(),
                            "run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::AndroidJavaRunnableProxy::__set_mRunnable(::UnityEngine::AndroidJavaRunnable value)  {
::cordl_internals::setInstanceField<::UnityEngine::AndroidJavaRunnable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AndroidJavaRunnable>(value));
}
constexpr ::UnityEngine::AndroidJavaRunnable ::UnityEngine::AndroidJavaRunnableProxy::__get_mRunnable() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AndroidJavaRunnable, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "runnable", ty: "::UnityEngine::AndroidJavaRunnable", modifiers: "", def_value: None }]
 ::UnityEngine::AndroidJavaRunnableProxy::AndroidJavaRunnableProxy(::UnityEngine::AndroidJavaRunnable runnable)  : ::UnityEngine::AndroidJavaProxy(THROW_UNLESS(::il2cpp_utils::New<AndroidJavaRunnableProxy>(runnable))) {}
 void ::UnityEngine::AndroidJavaRunnableProxy::_ctor(::UnityEngine::AndroidJavaRunnable runnable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AndroidJavaRunnable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, runnable);
}
 void ::UnityEngine::AndroidJavaRunnableProxy::run()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaRunnableProxy>::get(),
                            "run",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
