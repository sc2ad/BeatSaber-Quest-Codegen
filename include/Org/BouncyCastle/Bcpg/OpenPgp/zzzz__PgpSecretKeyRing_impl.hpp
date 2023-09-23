#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSecretKeyRing_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSecretKey_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKeyRing_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(System::Collections::IList)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1037674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(System::Collections::IList, System::Collections::IList)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10376ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1037718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(System::IO::Stream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x103778c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetPublicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetPublicKey)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1037cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetSecretKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKey)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1037db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetSecretKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetSecretKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKeys)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1037ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetSecretKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetSecretKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(int64_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKey)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x1037f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetSecretKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetExtraPublicKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetExtraPublicKeys)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1038284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetExtraPublicKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.GetEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetEncoded)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10382ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::*)(System::IO::Stream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::Encode)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x1038364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.ReplacePublicKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::ReplacePublicKeys)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x10389bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "ReplacePublicKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.CopyWithNewPassword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, ::ArrayW<char16_t>, ::ArrayW<char16_t>, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::CopyWithNewPassword)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x1038ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "CopyWithNewPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.InsertSecretKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::InsertSecretKey)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x103944c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "InsertSecretKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing.RemoveSecretKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing (*)(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::RemoveSecretKey)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x1039838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "RemoveSecretKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::__set_keys(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::__get_keys() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::__set_extraPubKeys(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::__get_extraPubKeys() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "keys", ty: "System::Collections::IList", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::PgpSecretKeyRing(System::Collections::IList keys)  : Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing(THROW_UNLESS(::il2cpp_utils::New<PgpSecretKeyRing>(keys))) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor(System::Collections::IList keys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keys);
}
// Ctor Parameters [CppParam { name: "keys", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "extraPubKeys", ty: "System::Collections::IList", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::PgpSecretKeyRing(System::Collections::IList keys, System::Collections::IList extraPubKeys)  : Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing(THROW_UNLESS(::il2cpp_utils::New<PgpSecretKeyRing>(keys, extraPubKeys))) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor(System::Collections::IList keys, System::Collections::IList extraPubKeys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IList>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keys, extraPubKeys);
}
// Ctor Parameters [CppParam { name: "encoding", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::PgpSecretKeyRing(::ArrayW<uint8_t> encoding)  : Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing(THROW_UNLESS(::il2cpp_utils::New<PgpSecretKeyRing>(encoding))) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor(::ArrayW<uint8_t> encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encoding);
}
// Ctor Parameters [CppParam { name: "inputStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::PgpSecretKeyRing(System::IO::Stream inputStream)  : Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing(THROW_UNLESS(::il2cpp_utils::New<PgpSecretKeyRing>(inputStream))) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::_ctor(System::IO::Stream inputStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inputStream);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetPublicKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetPublicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetSecretKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetSecretKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetSecretKey(int64_t keyId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetSecretKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, false>(const_cast<void*>(instance), ___internal_method, keyId);
}
 System::Collections::IEnumerable Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetExtraPublicKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetExtraPublicKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerable, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::GetEncoded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "GetEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::Encode(System::IO::Stream outStr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outStr);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::ReplacePublicKeys(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing secretRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing publicRing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "ReplacePublicKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, false>(nullptr, ___internal_method, secretRing, publicRing);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::CopyWithNewPassword(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing ring, ::ArrayW<char16_t> oldPassPhrase, ::ArrayW<char16_t> newPassPhrase, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "CopyWithNewPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, false>(nullptr, ___internal_method, ring, oldPassPhrase, newPassPhrase, newEncAlgorithm, rand);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::InsertSecretKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing secRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey secKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "InsertSecretKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, false>(nullptr, ___internal_method, secRing, secKey);
}
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing::RemoveSecretKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing secRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey secKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(),
                            "RemoveSecretKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, false>(nullptr, ___internal_method, secRing, secKey);
}
