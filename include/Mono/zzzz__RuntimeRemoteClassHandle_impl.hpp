#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Mono/zzzz__RuntimeRemoteClassHandle_def.hpp"
#include "Mono/zzzz__RuntimeClassHandle_def.hpp"
//  Writing Method size for method: Mono::RuntimeRemoteClassHandle.get_ProxyClass
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::RuntimeClassHandle (Mono::RuntimeRemoteClassHandle::*)()>(&Mono::RuntimeRemoteClassHandle::get_ProxyClass)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22a5034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeRemoteClassHandle>::get(),
                            "get_ProxyClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: Some("csnull") }]
constexpr Mono::RuntimeRemoteClassHandle::RuntimeRemoteClassHandle(void* value) noexcept : ::bs_hook::ValueTypeWrapper() {this->value = value;
}
constexpr void Mono::RuntimeRemoteClassHandle::__set_value(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* Mono::RuntimeRemoteClassHandle::__get_value() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
 Mono::RuntimeClassHandle Mono::RuntimeRemoteClassHandle::get_ProxyClass()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeRemoteClassHandle>::get(),
                            "get_ProxyClass",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::RuntimeClassHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
