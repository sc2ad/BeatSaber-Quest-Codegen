#pragma once
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Rfc3394WrapEngine_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Engines/zzzz__CamelliaWrapEngine_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xe36b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine::CamelliaWrapEngine()  : ::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine(THROW_UNLESS(::il2cpp_utils::New<CamelliaWrapEngine>())) {}
 void ::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::CamelliaWrapEngine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
