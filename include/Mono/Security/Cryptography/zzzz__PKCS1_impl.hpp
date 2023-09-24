#pragma once
#include "Mono/Security/Cryptography/zzzz__PKCS1_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: Mono::Security::Cryptography::PKCS1.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS1::Compare)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22b4668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::PKCS1.I2OSP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t)>(&Mono::Security::Cryptography::PKCS1::I2OSP)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22b46dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "I2OSP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::PKCS1.OS2IP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS1::OS2IP)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22b4768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "OS2IP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::PKCS1.RSAVP1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(System::Security::Cryptography::RSA, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS1::RSAVP1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22b4824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "RSAVP1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RSA>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::PKCS1.Verify_v15
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Security::Cryptography::RSA, System::Security::Cryptography::HashAlgorithm, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS1::Verify_v15)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22b4840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "Verify_v15",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RSA>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::HashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::PKCS1.Verify_v15
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Security::Cryptography::RSA, ::StringW, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::PKCS1::Verify_v15)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x22b4aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "Verify_v15",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RSA>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::PKCS1.Verify_v15
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Security::Cryptography::RSA, System::Security::Cryptography::HashAlgorithm, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(&Mono::Security::Cryptography::PKCS1::Verify_v15)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x22b48c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "Verify_v15",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RSA>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::HashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::PKCS1.Encode_v15
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(System::Security::Cryptography::HashAlgorithm, ::ArrayW<uint8_t>, int32_t)>(&Mono::Security::Cryptography::PKCS1::Encode_v15)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x22b508c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "Encode_v15",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::HashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::PKCS1.CreateFromName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::HashAlgorithm (*)(::StringW)>(&Mono::Security::Cryptography::PKCS1::CreateFromName)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x22b4c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "CreateFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void Mono::Security::Cryptography::PKCS1::__set_emptySHA1(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "emptySHA1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::__get_emptySHA1()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "emptySHA1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get>();
}
 void Mono::Security::Cryptography::PKCS1::__set_emptySHA256(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "emptySHA256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::__get_emptySHA256()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "emptySHA256", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get>();
}
 void Mono::Security::Cryptography::PKCS1::__set_emptySHA384(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "emptySHA384", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::__get_emptySHA384()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "emptySHA384", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get>();
}
 void Mono::Security::Cryptography::PKCS1::__set_emptySHA512(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "emptySHA512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::__get_emptySHA512()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "emptySHA512", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get>();
}
 bool Mono::Security::Cryptography::PKCS1::Compare(::ArrayW<uint8_t> array1, ::ArrayW<uint8_t> array2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array1, array2);
}
 ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::I2OSP(::ArrayW<uint8_t> x, int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "I2OSP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, x, size);
}
 ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::OS2IP(::ArrayW<uint8_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "OS2IP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, x);
}
 ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::RSAVP1(System::Security::Cryptography::RSA rsa, ::ArrayW<uint8_t> s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "RSAVP1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RSA>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, rsa, s);
}
 bool Mono::Security::Cryptography::PKCS1::Verify_v15(System::Security::Cryptography::RSA rsa, System::Security::Cryptography::HashAlgorithm hash, ::ArrayW<uint8_t> hashValue, ::ArrayW<uint8_t> signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "Verify_v15",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RSA>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::HashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rsa, hash, hashValue, signature);
}
 bool Mono::Security::Cryptography::PKCS1::Verify_v15(System::Security::Cryptography::RSA rsa, ::StringW hashName, ::ArrayW<uint8_t> hashValue, ::ArrayW<uint8_t> signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "Verify_v15",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RSA>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rsa, hashName, hashValue, signature);
}
 bool Mono::Security::Cryptography::PKCS1::Verify_v15(System::Security::Cryptography::RSA rsa, System::Security::Cryptography::HashAlgorithm hash, ::ArrayW<uint8_t> hashValue, ::ArrayW<uint8_t> signature, bool tryNonStandardEncoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "Verify_v15",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RSA>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::HashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rsa, hash, hashValue, signature, tryNonStandardEncoding);
}
 ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::Encode_v15(System::Security::Cryptography::HashAlgorithm hash, ::ArrayW<uint8_t> hashValue, int32_t emLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "Encode_v15",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::HashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, hash, hashValue, emLength);
}
 System::Security::Cryptography::HashAlgorithm Mono::Security::Cryptography::PKCS1::CreateFromName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::PKCS1>::get(),
                            "CreateFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::HashAlgorithm, false>(nullptr, ___internal_method, name);
}
