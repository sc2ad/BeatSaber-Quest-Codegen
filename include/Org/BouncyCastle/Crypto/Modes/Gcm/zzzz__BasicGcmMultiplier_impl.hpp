#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__BasicGcmMultiplier_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmMultiplier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::Init)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe86288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier.MultiplyH
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::MultiplyH)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe862f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier>::get(),
                            "MultiplyH",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::*)()>(&::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe86370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier
constexpr  ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier() const noexcept {
return ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::__set_H(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::__get_H() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::Init(::ArrayW<uint8_t> H)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, H);
}
 void ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::MultiplyH(::ArrayW<uint8_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier>::get(),
                            "MultiplyH",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::BasicGcmMultiplier()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BasicGcmMultiplier>())) {}
 void ::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
