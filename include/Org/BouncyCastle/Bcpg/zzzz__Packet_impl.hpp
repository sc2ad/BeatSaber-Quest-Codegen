#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::Packet._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::Packet::*)()>(&Org::BouncyCastle::Bcpg::Packet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1146250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Packet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Bcpg::Packet Org::BouncyCastle::Bcpg::Packet::New_ctor()  {
Org::BouncyCastle::Bcpg::Packet o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::Packet>())};
return o;
}
 void Org::BouncyCastle::Bcpg::Packet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::Packet>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
