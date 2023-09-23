#pragma once
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__MgfParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::MgfParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::MgfParameters::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Parameters::MgfParameters::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xeaa6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::MgfParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::MgfParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Parameters::MgfParameters::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::Parameters::MgfParameters::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xeaa70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::MgfParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Parameters::MgfParameters.GetSeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Parameters::MgfParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::MgfParameters::GetSeed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xeaa79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::MgfParameters>::get(),
                            "GetSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationParameters
constexpr  Org::BouncyCastle::Crypto::Parameters::MgfParameters::operator Org::BouncyCastle::Crypto::IDerivationParameters() const noexcept {
return Org::BouncyCastle::Crypto::IDerivationParameters(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Parameters::MgfParameters::__set_seed(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::MgfParameters::__get_seed() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::MgfParameters::MgfParameters(::ArrayW<uint8_t> seed)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MgfParameters>(seed))) {}
 void Org::BouncyCastle::Crypto::Parameters::MgfParameters::_ctor(::ArrayW<uint8_t> seed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::MgfParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seed);
}
// Ctor Parameters [CppParam { name: "seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Parameters::MgfParameters::MgfParameters(::ArrayW<uint8_t> seed, int32_t off, int32_t len)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MgfParameters>(seed, off, len))) {}
 void Org::BouncyCastle::Crypto::Parameters::MgfParameters::_ctor(::ArrayW<uint8_t> seed, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::MgfParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seed, off, len);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::MgfParameters::GetSeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Parameters::MgfParameters>::get(),
                            "GetSeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
