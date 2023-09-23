#pragma once
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::Store::IX509Selector.Match
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::X509::Store::IX509Selector::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::X509::Store::IX509Selector::Match)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::Store::IX509Selector),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::IX509Selector>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::ICloneable
constexpr  Org::BouncyCastle::X509::Store::IX509Selector::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
 bool Org::BouncyCastle::X509::Store::IX509Selector::Match(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::IX509Selector>::get(),
                            "Match",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
