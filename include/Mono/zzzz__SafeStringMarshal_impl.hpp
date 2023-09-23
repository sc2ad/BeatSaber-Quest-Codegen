#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Mono/zzzz__SafeStringMarshal_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: Mono::SafeStringMarshal.StringToUtf8_icall
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(ByRef<::StringW>)>(&Mono::SafeStringMarshal::StringToUtf8_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a586c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            "StringToUtf8_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SafeStringMarshal.StringToUtf8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::StringW)>(&Mono::SafeStringMarshal::StringToUtf8)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22a5870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            "StringToUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SafeStringMarshal.GFree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&Mono::SafeStringMarshal::GFree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a5888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            "GFree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SafeStringMarshal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::SafeStringMarshal::*)(::StringW)>(&Mono::SafeStringMarshal::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22a5644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SafeStringMarshal.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (Mono::SafeStringMarshal::*)()>(&Mono::SafeStringMarshal::get_Value)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22a588c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::SafeStringMarshal.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::SafeStringMarshal::*)()>(&Mono::SafeStringMarshal::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22a590c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  Mono::SafeStringMarshal::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "marshaled_string", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::SafeStringMarshal::SafeStringMarshal(::StringW str, ::cordl_internals::intptr_t marshaled_string) noexcept : ::bs_hook::ValueTypeWrapper() {this->str = str;
this->marshaled_string = marshaled_string;
}
constexpr void Mono::SafeStringMarshal::__set_str(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW Mono::SafeStringMarshal::__get_str() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void Mono::SafeStringMarshal::__set_marshaled_string(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t Mono::SafeStringMarshal::__get_marshaled_string() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
 ::cordl_internals::intptr_t Mono::SafeStringMarshal::StringToUtf8_icall(ByRef<::StringW> str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            "StringToUtf8_icall",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, str);
}
 ::cordl_internals::intptr_t Mono::SafeStringMarshal::StringToUtf8(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            "StringToUtf8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, str);
}
 void Mono::SafeStringMarshal::GFree(::cordl_internals::intptr_t ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            "GFree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr);
}
 void Mono::SafeStringMarshal::_ctor(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, str);
}
 ::cordl_internals::intptr_t Mono::SafeStringMarshal::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void Mono::SafeStringMarshal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::SafeStringMarshal>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
