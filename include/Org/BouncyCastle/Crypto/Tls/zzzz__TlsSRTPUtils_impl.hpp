#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSRTPUtils_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__UseSrtpData_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils.AddUseSrtpExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::IDictionary, Org::BouncyCastle::Crypto::Tls::UseSrtpData)>(&Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::AddUseSrtpExtension)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xf2bc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>::get(),
                            "AddUseSrtpExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::UseSrtpData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils.GetUseSrtpExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::UseSrtpData (*)(System::Collections::IDictionary)>(&Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::GetUseSrtpExtension)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf2be74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>::get(),
                            "GetUseSrtpExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils.CreateUseSrtpExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Crypto::Tls::UseSrtpData)>(&Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::CreateUseSrtpExtension)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xf2bd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>::get(),
                            "CreateUseSrtpExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::UseSrtpData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils.ReadUseSrtpExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::UseSrtpData (*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::ReadUseSrtpExtension)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xf2bee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>::get(),
                            "ReadUseSrtpExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf2c224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::AddUseSrtpExtension(System::Collections::IDictionary extensions, Org::BouncyCastle::Crypto::Tls::UseSrtpData useSRTPData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>::get(),
                            "AddUseSrtpExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::UseSrtpData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, extensions, useSRTPData);
}
 Org::BouncyCastle::Crypto::Tls::UseSrtpData Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::GetUseSrtpExtension(System::Collections::IDictionary extensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>::get(),
                            "GetUseSrtpExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IDictionary>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::UseSrtpData, false>(nullptr, ___internal_method, extensions);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::CreateUseSrtpExtension(Org::BouncyCastle::Crypto::Tls::UseSrtpData useSrtpData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>::get(),
                            "CreateUseSrtpExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::UseSrtpData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, useSrtpData);
}
 Org::BouncyCastle::Crypto::Tls::UseSrtpData Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::ReadUseSrtpExtension(::ArrayW<uint8_t> extensionData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>::get(),
                            "ReadUseSrtpExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::UseSrtpData, false>(nullptr, ___internal_method, extensionData);
}
 Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::New_ctor()  {
Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>())};
return o;
}
 void Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsSRTPUtils>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
