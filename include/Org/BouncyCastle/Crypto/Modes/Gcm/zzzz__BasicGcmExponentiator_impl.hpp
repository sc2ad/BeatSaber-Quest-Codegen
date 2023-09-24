#pragma once
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__BasicGcmExponentiator_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmExponentiator_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::Init)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe85f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator.ExponentiateX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::*)(int64_t, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::ExponentiateX)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xe86034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator>::get(),
                            "ExponentiateX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::*)()>(&Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe86280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator
constexpr  Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::operator Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator() const noexcept {
return Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::__set_x(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::__get_x() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::Init(::ArrayW<uint8_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::ExponentiateX(int64_t pow, ::ArrayW<uint8_t> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator>::get(),
                            "ExponentiateX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pow, output);
}
 Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::New_ctor()  {
Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator>())};
return o;
}
 void Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::Gcm::BasicGcmExponentiator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
