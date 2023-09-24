#pragma once
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakeRound2Payload_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)(::StringW, Org::BouncyCastle::Math::BigInteger, ::ArrayW<Org::BouncyCastle::Math::BigInteger>)>(&Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x11892e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::BigInteger>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload.get_ParticipantId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)()>(&Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_ParticipantId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x118a9d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload.get_A
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger (Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)()>(&Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_A)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x118a9e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload.get_KnowledgeProofForX2s
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::BigInteger> (Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::*)()>(&Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_KnowledgeProofForX2s)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x118a9e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__set_participantId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__get_participantId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__set_a(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__get_a() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__set_knowledgeProofForX2s(::ArrayW<Org::BouncyCastle::Math::BigInteger> value)  {
::cordl_internals::setInstanceField<::ArrayW<Org::BouncyCastle::Math::BigInteger>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<Org::BouncyCastle::Math::BigInteger>>(value));
}
constexpr ::ArrayW<Org::BouncyCastle::Math::BigInteger> Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::__get_knowledgeProofForX2s() const {
return ::cordl_internals::getInstanceField<::ArrayW<Org::BouncyCastle::Math::BigInteger>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::New_ctor(::StringW participantId, Org::BouncyCastle::Math::BigInteger a, ::ArrayW<Org::BouncyCastle::Math::BigInteger> knowledgeProofForX2s)  {
Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload>(participantId, a, knowledgeProofForX2s))};
return o;
}
 void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::_ctor(::StringW participantId, Org::BouncyCastle::Math::BigInteger a, ::ArrayW<Org::BouncyCastle::Math::BigInteger> knowledgeProofForX2s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Org::BouncyCastle::Math::BigInteger>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, participantId, a, knowledgeProofForX2s);
}
 ::StringW Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_ParticipantId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload>::get(),
                            "get_ParticipantId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_A()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload>::get(),
                            "get_A",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload::get_KnowledgeProofForX2s()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload>::get(),
                            "get_KnowledgeProofForX2s",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Math::BigInteger>, false>(const_cast<void*>(instance), ___internal_method);
}
