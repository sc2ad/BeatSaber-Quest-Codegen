#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__X448PublicKeyParameters_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::*)(::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xeae3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xeae674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::*)(::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::Encode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xeae5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::GetEncoded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xeae77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::__set_KeySize(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "KeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters>::get>(std::forward<int32_t>(value));
}
 int32_t Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::__get_KeySize()  {
return ::cordl_internals::getStaticField<int32_t, "KeySize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters>::get>();
}
constexpr void Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::__set_data(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::__get_data() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "buf", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::X448PublicKeyParameters(::ArrayW<uint8_t> buf, int32_t off)  : Org::BouncyCastle::Crypto::AsymmetricKeyParameter(THROW_UNLESS(::il2cpp_utils::New<X448PublicKeyParameters>(buf, off))) {}
 void Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::_ctor(::ArrayW<uint8_t> buf, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf, off);
}
// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::X448PublicKeyParameters(System::IO::Stream input)  : Org::BouncyCastle::Crypto::AsymmetricKeyParameter(THROW_UNLESS(::il2cpp_utils::New<X448PublicKeyParameters>(input))) {}
 void Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::_ctor(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 void Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::Encode(::ArrayW<uint8_t> buf, int32_t off)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf, off);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters::GetEncoded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::X448PublicKeyParameters>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
