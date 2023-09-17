#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Mono/zzzz__RuntimeGPtrArrayHandle_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::RuntimeGPtrArrayHandle::*)(::cordl_internals::intptr_t)>(&::Mono::RuntimeGPtrArrayHandle::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22a5444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::RuntimeGPtrArrayHandle::*)()>(&::Mono::RuntimeGPtrArrayHandle::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22a5464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::Mono::RuntimeGPtrArrayHandle::*)(int32_t)>(&::Mono::RuntimeGPtrArrayHandle::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a5480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.Lookup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::Mono::RuntimeGPtrArrayHandle::*)(int32_t)>(&::Mono::RuntimeGPtrArrayHandle::Lookup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22a5484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "Lookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.GPtrArrayFree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::Mono::RuntimeGPtrArrayHandle::GPtrArrayFree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a54f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "GPtrArrayFree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.DestroyAndFree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Mono::RuntimeGPtrArrayHandle>)>(&::Mono::RuntimeGPtrArrayHandle::DestroyAndFree)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22a54f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "DestroyAndFree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::RuntimeGPtrArrayHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "value", ty: "void*", modifiers: "", def_value: Some("csnull") }]
constexpr ::Mono::RuntimeGPtrArrayHandle::RuntimeGPtrArrayHandle(void* value) noexcept : ::bs_hook::ValueTypeWrapper() {this->value = value;
}
constexpr void ::Mono::RuntimeGPtrArrayHandle::__set_value(void* value)  {
::cordl_internals::setInstanceField<void*, 0x0>(this->__instance, std::forward<void*>(value));
}
constexpr void* ::Mono::RuntimeGPtrArrayHandle::__get_value() const {
return ::cordl_internals::getInstanceField<void*, 0x0>(this->__instance);
}
 void ::Mono::RuntimeGPtrArrayHandle::_ctor(::cordl_internals::intptr_t ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ptr);
}
 int32_t ::Mono::RuntimeGPtrArrayHandle::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::cordl_internals::intptr_t ::Mono::RuntimeGPtrArrayHandle::get_Item(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, i);
}
 ::cordl_internals::intptr_t ::Mono::RuntimeGPtrArrayHandle::Lookup(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "Lookup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, i);
}
 void ::Mono::RuntimeGPtrArrayHandle::GPtrArrayFree(void* value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "GPtrArrayFree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 void ::Mono::RuntimeGPtrArrayHandle::DestroyAndFree(ByRef<::Mono::RuntimeGPtrArrayHandle> h)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(),
                            "DestroyAndFree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::RuntimeGPtrArrayHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, h);
}
} // end anonymous namespace
