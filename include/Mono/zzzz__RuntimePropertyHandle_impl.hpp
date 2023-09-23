#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Mono/zzzz__RuntimePropertyHandle_def.hpp"
//  Writing Method size for method: Mono::RuntimePropertyHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::RuntimePropertyHandle::*)(::cordl_internals::intptr_t)>(&Mono::RuntimePropertyHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a5320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimePropertyHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::RuntimePropertyHandle.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (Mono::RuntimePropertyHandle::*)()>(&Mono::RuntimePropertyHandle::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a5328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimePropertyHandle>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::RuntimePropertyHandle.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::RuntimePropertyHandle::*)(::bs_hook::Il2CppWrapperType)>(&Mono::RuntimePropertyHandle::Equals)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x22a5330;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::RuntimePropertyHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimePropertyHandle>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::RuntimePropertyHandle.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::RuntimePropertyHandle::*)()>(&Mono::RuntimePropertyHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a543c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::RuntimePropertyHandle),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimePropertyHandle>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::RuntimePropertyHandle::RuntimePropertyHandle(::cordl_internals::intptr_t value) noexcept : ::bs_hook::ValueTypeWrapper() {this->value = value;
}
constexpr void Mono::RuntimePropertyHandle::__set_value(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t Mono::RuntimePropertyHandle::__get_value() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
 void Mono::RuntimePropertyHandle::_ctor(::cordl_internals::intptr_t v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimePropertyHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, v);
}
 ::cordl_internals::intptr_t Mono::RuntimePropertyHandle::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimePropertyHandle>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool Mono::RuntimePropertyHandle::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimePropertyHandle>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t Mono::RuntimePropertyHandle::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimePropertyHandle>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
