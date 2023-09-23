#pragma once
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::Store::IX509Store.GetMatches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (Org::BouncyCastle::X509::Store::IX509Store::*)(Org::BouncyCastle::X509::Store::IX509Selector)>(&Org::BouncyCastle::X509::Store::IX509Store::GetMatches)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::Store::IX509Store),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::IX509Store>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 System::Collections::ICollection Org::BouncyCastle::X509::Store::IX509Store::GetMatches(Org::BouncyCastle::X509::Store::IX509Selector selector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::IX509Store>::get(),
                            "GetMatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509Selector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method, selector);
}
