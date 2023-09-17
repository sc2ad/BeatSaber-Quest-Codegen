#pragma once
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__IBcpgKey_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::IBcpgKey.get_Format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::IBcpgKey::*)()>(&::Org::BouncyCastle::Bcpg::IBcpgKey::get_Format)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Bcpg::IBcpgKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::IBcpgKey>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::StringW ::Org::BouncyCastle::Bcpg::IBcpgKey::get_Format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::IBcpgKey>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
