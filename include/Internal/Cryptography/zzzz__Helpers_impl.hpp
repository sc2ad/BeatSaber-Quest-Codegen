#pragma once
#include "Internal/Cryptography/zzzz__Helpers_def.hpp"
//  Writing Method size for method: Internal::Cryptography::Helpers.CloneByteArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Internal::Cryptography::Helpers::CloneByteArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22bf284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Cryptography::Helpers>::get(),
                            "CloneByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Cryptography::Helpers.ToHexArrayUpper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (*)(::ArrayW<uint8_t>)>(&Internal::Cryptography::Helpers::ToHexArrayUpper)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22bf2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Cryptography::Helpers>::get(),
                            "ToHexArrayUpper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Cryptography::Helpers.ToHexStringUpper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&Internal::Cryptography::Helpers::ToHexStringUpper)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22bf404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Cryptography::Helpers>::get(),
                            "ToHexStringUpper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Cryptography::Helpers.NibbleToHex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(uint8_t)>(&Internal::Cryptography::Helpers::NibbleToHex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bf3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Cryptography::Helpers>::get(),
                            "NibbleToHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<uint8_t> Internal::Cryptography::Helpers::CloneByteArray(::ArrayW<uint8_t> src)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Cryptography::Helpers>::get(),
                            "CloneByteArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, src);
}
 ::ArrayW<char16_t> Internal::Cryptography::Helpers::ToHexArrayUpper(::ArrayW<uint8_t> bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Cryptography::Helpers>::get(),
                            "ToHexArrayUpper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(nullptr, ___internal_method, bytes);
}
 ::StringW Internal::Cryptography::Helpers::ToHexStringUpper(::ArrayW<uint8_t> bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Cryptography::Helpers>::get(),
                            "ToHexStringUpper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, bytes);
}
 char16_t Internal::Cryptography::Helpers::NibbleToHex(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Cryptography::Helpers>::get(),
                            "NibbleToHex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, b);
}
