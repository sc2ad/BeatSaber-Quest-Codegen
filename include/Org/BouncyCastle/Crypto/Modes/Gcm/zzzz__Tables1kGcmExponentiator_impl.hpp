#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__Tables1kGcmExponentiator_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmExponentiator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::Init)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xe873f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator.ExponentiateX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::*)(int64_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::ExponentiateX)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xe87600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator>::get(),
                            "ExponentiateX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator.EnsureAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::EnsureAvailable)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xe877b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator>::get(),
                            "EnsureAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::*)()>(&::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe87a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator
constexpr  ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator() const noexcept {
return ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::__set_lookupPowX2(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::__get_lookupPowX2() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::Init(::ArrayW<uint8_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 void ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::ExponentiateX(int64_t pow, ::ArrayW<uint8_t> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator>::get(),
                            "ExponentiateX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pow, output);
}
 void ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::EnsureAvailable(int32_t bit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator>::get(),
                            "EnsureAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bit);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::Tables1kGcmExponentiator()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Tables1kGcmExponentiator>())) {}
 void ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables1kGcmExponentiator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
