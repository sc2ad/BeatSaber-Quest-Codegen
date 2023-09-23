#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Mono/zzzz__SafeGPtrArrayHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Mono/zzzz__RuntimeGPtrArrayHandle_def.hpp"
//  Writing Method size for method: Mono::SafeGPtrArrayHandle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::SafeGPtrArrayHandle::*)(::cordl_internals::intptr_t)>(&Mono::SafeGPtrArrayHandle::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22a5810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeGPtrArrayHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SafeGPtrArrayHandle.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::SafeGPtrArrayHandle::*)()>(&Mono::SafeGPtrArrayHandle::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22a5830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeGPtrArrayHandle>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SafeGPtrArrayHandle.get_Length
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::SafeGPtrArrayHandle::*)()>(&Mono::SafeGPtrArrayHandle::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22a584c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeGPtrArrayHandle>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SafeGPtrArrayHandle.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (Mono::SafeGPtrArrayHandle::*)(int32_t)>(&Mono::SafeGPtrArrayHandle::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a5868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeGPtrArrayHandle>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  Mono::SafeGPtrArrayHandle::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "handle", ty: "Mono::RuntimeGPtrArrayHandle", modifiers: "", def_value: Some("{}") }]
constexpr Mono::SafeGPtrArrayHandle::SafeGPtrArrayHandle(Mono::RuntimeGPtrArrayHandle handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->handle = handle;
}
constexpr void Mono::SafeGPtrArrayHandle::__set_handle(Mono::RuntimeGPtrArrayHandle value)  {
::cordl_internals::setInstanceField<Mono::RuntimeGPtrArrayHandle, 0x0>(this->__instance, std::forward<Mono::RuntimeGPtrArrayHandle>(value));
}
constexpr Mono::RuntimeGPtrArrayHandle Mono::SafeGPtrArrayHandle::__get_handle() const {
return ::cordl_internals::getInstanceField<Mono::RuntimeGPtrArrayHandle, 0x0>(this->__instance);
}
 void Mono::SafeGPtrArrayHandle::_ctor(::cordl_internals::intptr_t ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeGPtrArrayHandle>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ptr);
}
 void Mono::SafeGPtrArrayHandle::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeGPtrArrayHandle>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t Mono::SafeGPtrArrayHandle::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeGPtrArrayHandle>::get(),
                            "get_Length",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::cordl_internals::intptr_t Mono::SafeGPtrArrayHandle::get_Item(int32_t i)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeGPtrArrayHandle>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, i);
}
