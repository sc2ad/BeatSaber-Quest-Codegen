#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__OutputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OutputStreamPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OutputStreamPacket::*)(Org::BouncyCastle::Bcpg::BcpgOutputStream)>(&Org::BouncyCastle::Bcpg::OutputStreamPacket::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1147ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OutputStreamPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgOutputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OutputStreamPacket.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::BcpgOutputStream (Org::BouncyCastle::Bcpg::OutputStreamPacket::*)()>(&Org::BouncyCastle::Bcpg::OutputStreamPacket::Open)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Bcpg::OutputStreamPacket),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OutputStreamPacket>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OutputStreamPacket.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OutputStreamPacket::*)()>(&Org::BouncyCastle::Bcpg::OutputStreamPacket::Close)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Bcpg::OutputStreamPacket),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OutputStreamPacket>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OutputStreamPacket::__set_bcpgOut(Org::BouncyCastle::Bcpg::BcpgOutputStream value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::BcpgOutputStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::BcpgOutputStream>(value));
}
constexpr Org::BouncyCastle::Bcpg::BcpgOutputStream Org::BouncyCastle::Bcpg::OutputStreamPacket::__get_bcpgOut() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::BcpgOutputStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bcpgOut", ty: "Org::BouncyCastle::Bcpg::BcpgOutputStream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OutputStreamPacket::OutputStreamPacket(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OutputStreamPacket>(bcpgOut))) {}
 void Org::BouncyCastle::Bcpg::OutputStreamPacket::_ctor(Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OutputStreamPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgOutputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgOut);
}
 Org::BouncyCastle::Bcpg::BcpgOutputStream Org::BouncyCastle::Bcpg::OutputStreamPacket::Open()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OutputStreamPacket>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::BcpgOutputStream, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Bcpg::OutputStreamPacket::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OutputStreamPacket>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
