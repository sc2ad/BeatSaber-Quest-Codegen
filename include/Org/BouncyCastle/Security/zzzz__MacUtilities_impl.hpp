#pragma once
#include "Org/BouncyCastle/Security/zzzz__MacUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Security::MacUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Security::MacUtilities::*)()>(&Org::BouncyCastle::Security::MacUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10a2d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::MacUtilities.GetMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IMac (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Security::MacUtilities::GetMac)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x10a4920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::MacUtilities.GetMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IMac (*)(::StringW)>(&Org::BouncyCastle::Security::MacUtilities::GetMac)> {
  constexpr static std::size_t size = 0xb88;
  constexpr static std::size_t addrs = 0x10a4980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::MacUtilities.GetAlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Security::MacUtilities::GetAlgorithmName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x10a5508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "GetAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::MacUtilities.CalculateMac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW, Org::BouncyCastle::Crypto::ICipherParameters, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Security::MacUtilities::CalculateMac)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x10a5610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "CalculateMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::MacUtilities.DoFinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Crypto::IMac)>(&Org::BouncyCastle::Security::MacUtilities::DoFinal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x10a5768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "DoFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Security::MacUtilities.DoFinal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Crypto::IMac, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Security::MacUtilities::DoFinal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x10a589c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "DoFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Security::MacUtilities::__set_algorithms(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Security::MacUtilities::__get_algorithms()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "algorithms", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get>();
}
// Ctor Parameters []
 Org::BouncyCastle::Security::MacUtilities::MacUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MacUtilities>())) {}
 void Org::BouncyCastle::Security::MacUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::IMac Org::BouncyCastle::Security::MacUtilities::GetMac(Org::BouncyCastle::Asn1::DerObjectIdentifier id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IMac, false>(nullptr, ___internal_method, id);
}
 Org::BouncyCastle::Crypto::IMac Org::BouncyCastle::Security::MacUtilities::GetMac(::StringW algorithm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "GetMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IMac, false>(nullptr, ___internal_method, algorithm);
}
 ::StringW Org::BouncyCastle::Security::MacUtilities::GetAlgorithmName(Org::BouncyCastle::Asn1::DerObjectIdentifier oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "GetAlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oid);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Security::MacUtilities::CalculateMac(::StringW algorithm, Org::BouncyCastle::Crypto::ICipherParameters cp, ::ArrayW<uint8_t> input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "CalculateMac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, algorithm, cp, input);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Security::MacUtilities::DoFinal(Org::BouncyCastle::Crypto::IMac mac)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "DoFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, mac);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Security::MacUtilities::DoFinal(Org::BouncyCastle::Crypto::IMac mac, ::ArrayW<uint8_t> input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Security::MacUtilities>::get(),
                            "DoFinal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, mac, input);
}
