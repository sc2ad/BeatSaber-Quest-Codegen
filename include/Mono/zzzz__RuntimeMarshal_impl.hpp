#pragma once
#include "Mono/zzzz__RuntimeMarshal_def.hpp"
#include "Mono/zzzz__MonoAssemblyName_def.hpp"
#include "Mono/zzzz__SafeStringMarshal_def.hpp"
//  Writing Method size for method: Mono::RuntimeMarshal.PtrToUtf8String
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::cordl_internals::intptr_t)>(&Mono::RuntimeMarshal::PtrToUtf8String)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x22a5510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "PtrToUtf8String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::RuntimeMarshal.MarshalString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::SafeStringMarshal (*)(::StringW)>(&Mono::RuntimeMarshal::MarshalString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22a55f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "MarshalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::RuntimeMarshal.DecodeBlobSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::intptr_t, ByRef<::cordl_internals::intptr_t>)>(&Mono::RuntimeMarshal::DecodeBlobSize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22a56a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "DecodeBlobSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::RuntimeMarshal.DecodeBlobArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::cordl_internals::intptr_t)>(&Mono::RuntimeMarshal::DecodeBlobArray)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22a5724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "DecodeBlobArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::RuntimeMarshal.AsciHexDigitValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&Mono::RuntimeMarshal::AsciHexDigitValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22a57dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "AsciHexDigitValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::RuntimeMarshal.FreeAssemblyName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<Mono::MonoAssemblyName>, bool)>(&Mono::RuntimeMarshal::FreeAssemblyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a5808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "FreeAssemblyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::MonoAssemblyName>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW Mono::RuntimeMarshal::PtrToUtf8String(::cordl_internals::intptr_t ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "PtrToUtf8String",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, ptr);
}
 Mono::SafeStringMarshal Mono::RuntimeMarshal::MarshalString(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "MarshalString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::SafeStringMarshal, false>(nullptr, ___internal_method, str);
}
 int32_t Mono::RuntimeMarshal::DecodeBlobSize(::cordl_internals::intptr_t in_ptr, ByRef<::cordl_internals::intptr_t> out_ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "DecodeBlobSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, in_ptr, out_ptr);
}
 ::ArrayW<uint8_t> Mono::RuntimeMarshal::DecodeBlobArray(::cordl_internals::intptr_t ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "DecodeBlobArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, ptr);
}
 int32_t Mono::RuntimeMarshal::AsciHexDigitValue(int32_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "AsciHexDigitValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, c);
}
 void Mono::RuntimeMarshal::FreeAssemblyName(ByRef<Mono::MonoAssemblyName> name, bool freeStruct)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::RuntimeMarshal>::get(),
                            "FreeAssemblyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Mono::MonoAssemblyName>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, freeStruct);
}
