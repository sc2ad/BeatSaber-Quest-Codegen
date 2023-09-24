#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::InputStreamPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::InputStreamPacket::*)(Org::BouncyCastle::Bcpg::BcpgInputStream)>(&Org::BouncyCastle::Bcpg::InputStreamPacket::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x114310c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::InputStreamPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::InputStreamPacket.GetInputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::BcpgInputStream (Org::BouncyCastle::Bcpg::InputStreamPacket::*)()>(&Org::BouncyCastle::Bcpg::InputStreamPacket::GetInputStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1146258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::InputStreamPacket>::get(),
                            "GetInputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::InputStreamPacket::__set_bcpgIn(Org::BouncyCastle::Bcpg::BcpgInputStream value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::BcpgInputStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::BcpgInputStream>(value));
}
constexpr Org::BouncyCastle::Bcpg::BcpgInputStream Org::BouncyCastle::Bcpg::InputStreamPacket::__get_bcpgIn() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::BcpgInputStream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Bcpg::InputStreamPacket Org::BouncyCastle::Bcpg::InputStreamPacket::New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
Org::BouncyCastle::Bcpg::InputStreamPacket o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::InputStreamPacket>(bcpgIn))};
return o;
}
 void Org::BouncyCastle::Bcpg::InputStreamPacket::_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::InputStreamPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgIn);
}
 Org::BouncyCastle::Bcpg::BcpgInputStream Org::BouncyCastle::Bcpg::InputStreamPacket::GetInputStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::InputStreamPacket>::get(),
                            "GetInputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::BcpgInputStream, false>(const_cast<void*>(instance), ___internal_method);
}
