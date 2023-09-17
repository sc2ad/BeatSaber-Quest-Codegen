#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__EmbeddedSignature_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature::*)(bool, bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x113d264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isLongLength", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature::EmbeddedSignature(bool critical, bool isLongLength, ::ArrayW<uint8_t> data)  : ::Org::BouncyCastle::Bcpg::SignatureSubpacket(THROW_UNLESS(::il2cpp_utils::New<EmbeddedSignature>(critical, isLongLength, data))) {}
 void ::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, critical, isLongLength, data);
}
} // end anonymous namespace
