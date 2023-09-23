#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__KeyExpirationTime_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime.TimeToBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::TimeToBytes)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x113d9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime>::get(),
                            "TimeToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::*)(bool, bool, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x113da88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::*)(bool, int64_t)>(&Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x113dad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime.get_Time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::*)()>(&Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::get_Time)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x113db1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime>::get(),
                            "get_Time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::TimeToBytes(int64_t t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime>::get(),
                            "TimeToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, t);
}
// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::KeyExpirationTime(bool critical, bool isLongLength, ::ArrayW<uint8_t> data)  : Org::BouncyCastle::Bcpg::SignatureSubpacket(THROW_UNLESS(::il2cpp_utils::New<KeyExpirationTime>(critical, isLongLength, data))) {}
 void Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, critical, isLongLength, data);
}
// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "seconds", ty: "int64_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::KeyExpirationTime(bool critical, int64_t seconds)  : Org::BouncyCastle::Bcpg::SignatureSubpacket(THROW_UNLESS(::il2cpp_utils::New<KeyExpirationTime>(critical, seconds))) {}
 void Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::_ctor(bool critical, int64_t seconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, critical, seconds);
}
 int64_t Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime::get_Time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Sig::KeyExpirationTime>::get(),
                            "get_Time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
