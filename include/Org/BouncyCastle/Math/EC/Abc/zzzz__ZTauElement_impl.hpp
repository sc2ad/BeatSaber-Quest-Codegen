#pragma once
#include "Org/BouncyCastle/Math/EC/Abc/zzzz__ZTauElement_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Abc::ZTauElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Abc::ZTauElement::*)(Org::BouncyCastle::Math::BigInteger, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::Abc::ZTauElement::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xf3a7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Abc::ZTauElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::Abc::ZTauElement::__set_u(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::EC::Abc::ZTauElement::__get_u() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Abc::ZTauElement::__set_v(Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::BigInteger>(value));
}
constexpr Org::BouncyCastle::Math::BigInteger Org::BouncyCastle::Math::EC::Abc::ZTauElement::__get_v() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::BigInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "u", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "v", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
 Org::BouncyCastle::Math::EC::Abc::ZTauElement::ZTauElement(Org::BouncyCastle::Math::BigInteger u, Org::BouncyCastle::Math::BigInteger v)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ZTauElement>(u, v))) {}
 void Org::BouncyCastle::Math::EC::Abc::ZTauElement::_ctor(Org::BouncyCastle::Math::BigInteger u, Org::BouncyCastle::Math::BigInteger v)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Abc::ZTauElement>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, u, v);
}
