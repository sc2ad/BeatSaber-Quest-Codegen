#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_impl.hpp"
namespace {
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x114f5e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::*)(::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x114f634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::CmsAuthenticatedGenerator()  : ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator(THROW_UNLESS(::il2cpp_utils::New<CmsAuthenticatedGenerator>())) {}
 void ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "rand", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::CmsAuthenticatedGenerator(::Org::BouncyCastle::Security::SecureRandom rand)  : ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator(THROW_UNLESS(::il2cpp_utils::New<CmsAuthenticatedGenerator>(rand))) {}
 void ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rand);
}
} // end anonymous namespace
