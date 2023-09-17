#pragma once
namespace {
#include "Org/BouncyCastle/Cms/zzzz__BaseDigestCalculator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__IDigestCalculator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::BaseDigestCalculator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::BaseDigestCalculator::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cms::BaseDigestCalculator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x114dff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::BaseDigestCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::BaseDigestCalculator.GetDigest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::BaseDigestCalculator::*)()>(&::Org::BouncyCastle::Cms::BaseDigestCalculator::GetDigest)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x114e020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::BaseDigestCalculator>::get(),
                            "GetDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Cms::IDigestCalculator
constexpr  ::Org::BouncyCastle::Cms::BaseDigestCalculator::operator ::Org::BouncyCastle::Cms::IDigestCalculator() const noexcept {
return ::Org::BouncyCastle::Cms::IDigestCalculator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::BaseDigestCalculator::__set_digest(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Cms::BaseDigestCalculator::__get_digest() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "digest", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::BaseDigestCalculator::BaseDigestCalculator(::ArrayW<uint8_t> digest)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BaseDigestCalculator>(digest))) {}
 void ::Org::BouncyCastle::Cms::BaseDigestCalculator::_ctor(::ArrayW<uint8_t> digest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::BaseDigestCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, digest);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Cms::BaseDigestCalculator::GetDigest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::BaseDigestCalculator>::get(),
                            "GetDigest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
