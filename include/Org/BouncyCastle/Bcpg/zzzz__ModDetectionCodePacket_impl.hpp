#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__ModDetectionCodePacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream)>(&::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x114502c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1147b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket.GetDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)()>(&::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::GetDigest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1147c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket>::get(),
                            "GetDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream)>(&::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::Encode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1147cf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Bcpg::ModDetectionCodePacket),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::__set_digest(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::__get_digest() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::ModDetectionCodePacket(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  : ::Org::BouncyCastle::Bcpg::ContainedPacket(THROW_UNLESS(::il2cpp_utils::New<ModDetectionCodePacket>(bcpgIn))) {}
 void ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgIn);
}
// Ctor Parameters [CppParam { name: "digest", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::ModDetectionCodePacket(::ArrayW<uint8_t> digest)  : ::Org::BouncyCastle::Bcpg::ContainedPacket(THROW_UNLESS(::il2cpp_utils::New<ModDetectionCodePacket>(digest))) {}
 void ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::_ctor(::ArrayW<uint8_t> digest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digest);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::GetDigest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket>::get(),
                            "GetDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Bcpg::ModDetectionCodePacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ModDetectionCodePacket>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgOut);
}
} // end anonymous namespace
