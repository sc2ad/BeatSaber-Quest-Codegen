#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationReason_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationReasonTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationReason._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::RevocationReason::*)(bool, bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::RevocationReason::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x113e854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::RevocationReason>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationReason._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::RevocationReason::*)(bool, ::Org::BouncyCastle::Bcpg::RevocationReasonTag, ::StringW)>(&::Org::BouncyCastle::Bcpg::RevocationReason::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x113e89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::RevocationReason>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::RevocationReasonTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationReason.CreateData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Bcpg::RevocationReasonTag, ::StringW)>(&::Org::BouncyCastle::Bcpg::RevocationReason::CreateData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x113e8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::RevocationReason>::get(),
                            "CreateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::RevocationReasonTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationReason.GetRevocationReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::RevocationReasonTag (::Org::BouncyCastle::Bcpg::RevocationReason::*)()>(&::Org::BouncyCastle::Bcpg::RevocationReason::GetRevocationReason)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x113e990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Bcpg::RevocationReason),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::RevocationReason>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationReason.GetRevocationDescription
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::RevocationReason::*)()>(&::Org::BouncyCastle::Bcpg::RevocationReason::GetRevocationDescription)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x113e9b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Bcpg::RevocationReason),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::RevocationReason>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "isCritical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::RevocationReason::RevocationReason(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data)  : ::Org::BouncyCastle::Bcpg::SignatureSubpacket(THROW_UNLESS(::il2cpp_utils::New<RevocationReason>(isCritical, isLongLength, data))) {}
 void ::Org::BouncyCastle::Bcpg::RevocationReason::_ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::RevocationReason>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isCritical, isLongLength, data);
}
// Ctor Parameters [CppParam { name: "isCritical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "reason", ty: "::Org::BouncyCastle::Bcpg::RevocationReasonTag", modifiers: "", def_value: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::RevocationReason::RevocationReason(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description)  : ::Org::BouncyCastle::Bcpg::SignatureSubpacket(THROW_UNLESS(::il2cpp_utils::New<RevocationReason>(isCritical, reason, description))) {}
 void ::Org::BouncyCastle::Bcpg::RevocationReason::_ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::RevocationReason>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::RevocationReasonTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isCritical, reason, description);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Bcpg::RevocationReason::CreateData(::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::RevocationReason>::get(),
                            "CreateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::RevocationReasonTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, reason, description);
}
 ::Org::BouncyCastle::Bcpg::RevocationReasonTag ::Org::BouncyCastle::Bcpg::RevocationReason::GetRevocationReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::RevocationReason>::get(),
                            "GetRevocationReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::RevocationReasonTag, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Org::BouncyCastle::Bcpg::RevocationReason::GetRevocationDescription()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::RevocationReason>::get(),
                            "GetRevocationDescription",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
