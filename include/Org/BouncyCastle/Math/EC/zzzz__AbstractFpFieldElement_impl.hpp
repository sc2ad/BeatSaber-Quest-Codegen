#pragma once
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_impl.hpp"
namespace {
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::AbstractFpFieldElement::*)()>(&::Org::BouncyCastle::Math::EC::AbstractFpFieldElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf416d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement::AbstractFpFieldElement()  : ::Org::BouncyCastle::Math::EC::ECFieldElement(THROW_UNLESS(::il2cpp_utils::New<AbstractFpFieldElement>())) {}
 void ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::AbstractFpFieldElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
