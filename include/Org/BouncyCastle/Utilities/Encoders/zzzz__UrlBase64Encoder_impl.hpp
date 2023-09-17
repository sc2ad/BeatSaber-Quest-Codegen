#pragma once
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__Base64Encoder_impl.hpp"
namespace {
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__UrlBase64Encoder_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::*)()>(&::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x10d35a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::UrlBase64Encoder()  : ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder(THROW_UNLESS(::il2cpp_utils::New<UrlBase64Encoder>())) {}
 void ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
