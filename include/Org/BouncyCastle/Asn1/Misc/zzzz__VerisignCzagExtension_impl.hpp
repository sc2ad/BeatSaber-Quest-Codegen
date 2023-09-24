#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_impl.hpp"
#include "Org/BouncyCastle/Asn1/Misc/zzzz__VerisignCzagExtension_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::*)(Org::BouncyCastle::Asn1::DerIA5String)>(&Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xeef31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerIA5String>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::*)()>(&Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xeef354;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::New_ctor(Org::BouncyCastle::Asn1::DerIA5String str)  {
Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension>(str))};
return o;
}
 void Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::_ctor(Org::BouncyCastle::Asn1::DerIA5String str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerIA5String>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, str);
}
 ::StringW Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
