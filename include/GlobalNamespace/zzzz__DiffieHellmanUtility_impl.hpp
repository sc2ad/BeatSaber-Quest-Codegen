#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__DiffieHellmanUtility_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECDHBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__DHBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__DiffieHellmanUtility_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType::GlobalNamespace__DiffieHellmanUtility__KeyType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType  GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType::DiffieHellman{0};
constexpr GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType  GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType::ElipticalCurve{1};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::*)()>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda6708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0._GetPreMasterSecretAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::*)()>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xda6778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0>::get(),
                            "<GetPreMasterSecretAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__set___4__this(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair>(value));
}
constexpr GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__set_clientPublicKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::__get_clientPublicKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair____c__DisplayClass5_0>::get(),
                            "<GetPreMasterSecretAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair.get_publicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::*)()>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::get_publicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda65b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair>::get(),
                            "get_publicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::*)(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters, ::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xda5fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair.GetPreMasterSecretAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::*)(BGNet::Core::ITaskUtility, ::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::GetPreMasterSecretAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xda65b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair>::get(),
                            "GetPreMasterSecretAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair.GetPreMasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xda6710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair>::get(),
                            "GetPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IDiffieHellmanKeyPair
constexpr  GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::operator GlobalNamespace::IDiffieHellmanKeyPair() const noexcept {
return GlobalNamespace::IDiffieHellmanKeyPair(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::__set__dhBasicAgreement(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement>(value));
}
constexpr Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::__get__dhBasicAgreement() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::__set__publicKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::__get__publicKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::get_publicKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair>::get(),
                            "get_publicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::New_ctor(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters privateKeyParameters, ::ArrayW<uint8_t> publicKey)  {
GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair>(privateKeyParameters, publicKey))};
return o;
}
 void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::_ctor(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters privateKeyParameters, ::ArrayW<uint8_t> publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKeyParameters, publicKey);
}
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::GetPreMasterSecretAsync(BGNet::Core::ITaskUtility taskUtility, ::ArrayW<uint8_t> clientPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair>::get(),
                            "GetPreMasterSecretAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method, taskUtility, clientPublicKey);
}
 ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair::GetPreMasterSecret(::ArrayW<uint8_t> clientPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair>::get(),
                            "GetPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, clientPublicKey);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::*)()>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda693c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0._GetPreMasterSecretAsync_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::*)()>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xda69ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0>::get(),
                            "<GetPreMasterSecretAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__set___4__this(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair>(value));
}
constexpr GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__set_clientPublicKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::__get_clientPublicKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0::_GetPreMasterSecretAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair____c__DisplayClass5_0>::get(),
                            "<GetPreMasterSecretAsync>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair.get_publicKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::*)()>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::get_publicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda67e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair>::get(),
                            "get_publicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::*)(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters, ::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xda6070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair.GetPreMasterSecretAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::*)(BGNet::Core::ITaskUtility, ::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::GetPreMasterSecretAsync)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xda67ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair>::get(),
                            "GetPreMasterSecretAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair.GetPreMasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xda6944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair>::get(),
                            "GetPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IDiffieHellmanKeyPair
constexpr  GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::operator GlobalNamespace::IDiffieHellmanKeyPair() const noexcept {
return GlobalNamespace::IDiffieHellmanKeyPair(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::__set__ecdhBasicAgreement(Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>(value));
}
constexpr Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::__get__ecdhBasicAgreement() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::__set__publicKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::__get__publicKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::get_publicKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair>::get(),
                            "get_publicKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::New_ctor(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters privateKeyParameters, ::ArrayW<uint8_t> publicKey)  {
GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair>(privateKeyParameters, publicKey))};
return o;
}
 void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::_ctor(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters privateKeyParameters, ::ArrayW<uint8_t> publicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKeyParameters, publicKey);
}
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::GetPreMasterSecretAsync(BGNet::Core::ITaskUtility taskUtility, ::ArrayW<uint8_t> clientPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair>::get(),
                            "GetPreMasterSecretAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method, taskUtility, clientPublicKey);
}
 ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair::GetPreMasterSecret(::ArrayW<uint8_t> clientPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair>::get(),
                            "GetPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, clientPublicKey);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xda6a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::*)()>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::Dispose)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xda6a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer.Time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer (*)(::StringW)>(&GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::Time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xda5fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer>::get(),
                            "Time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::__set__stopwatch(System::Diagnostics::Stopwatch value)  {
::cordl_internals::setInstanceField<System::Diagnostics::Stopwatch, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Diagnostics::Stopwatch>(value));
}
constexpr System::Diagnostics::Stopwatch GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::__get__stopwatch() const {
return ::cordl_internals::getInstanceField<System::Diagnostics::Stopwatch, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::__set__operationName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::__get__operationName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::New_ctor(::StringW operationName)  {
GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer>(operationName))};
return o;
}
 void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::_ctor(::StringW operationName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operationName);
}
 void GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer::Time(::StringW operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer>::get(),
                            "Time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__OperationTimer, false>(nullptr, ___internal_method, operation);
}
//  Writing Method size for method: GlobalNamespace::DiffieHellmanUtility.GenerateKeysAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> (*)(BGNet::Core::ITaskUtility, System::Threading::CancellationToken, GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType)>(&GlobalNamespace::DiffieHellmanUtility::GenerateKeysAsync)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xda5b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GenerateKeysAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DiffieHellmanUtility.GenerateKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IDiffieHellmanKeyPair (*)(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType)>(&GlobalNamespace::DiffieHellmanUtility::GenerateKeys)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xda20b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GenerateKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DiffieHellmanUtility.GenerateDiffieHellmanKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair (*)()>(&GlobalNamespace::DiffieHellmanUtility::GenerateDiffieHellmanKeys)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xda5e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GenerateDiffieHellmanKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DiffieHellmanUtility.GenerateElipticalCurveKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair (*)()>(&GlobalNamespace::DiffieHellmanUtility::GenerateElipticalCurveKeys)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xda5cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GenerateElipticalCurveKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DiffieHellmanUtility.GetPreMasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement, ::ArrayW<uint8_t>)>(&GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xda6108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GetPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DiffieHellmanUtility.GetPreMasterSecret
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement, ::ArrayW<uint8_t>)>(&GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xda62a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GetPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::DiffieHellmanUtility::__set__secureRandom(Org::BouncyCastle::Security::SecureRandom value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Security::SecureRandom, "_secureRandom", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get>(std::forward<Org::BouncyCastle::Security::SecureRandom>(value));
}
 Org::BouncyCastle::Security::SecureRandom GlobalNamespace::DiffieHellmanUtility::__get__secureRandom()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Security::SecureRandom, "_secureRandom", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get>();
}
 void GlobalNamespace::DiffieHellmanUtility::__set__dhParameters(Org::BouncyCastle::Crypto::Parameters::DHParameters value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Crypto::Parameters::DHParameters, "_dhParameters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get>(std::forward<Org::BouncyCastle::Crypto::Parameters::DHParameters>(value));
}
 Org::BouncyCastle::Crypto::Parameters::DHParameters GlobalNamespace::DiffieHellmanUtility::__get__dhParameters()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Crypto::Parameters::DHParameters, "_dhParameters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get>();
}
 void GlobalNamespace::DiffieHellmanUtility::__set__ecParameters(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters value)  {
::cordl_internals::setStaticField<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, "_ecParameters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get>(std::forward<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters>(value));
}
 Org::BouncyCastle::Crypto::Parameters::ECDomainParameters GlobalNamespace::DiffieHellmanUtility::__get__ecParameters()  {
return ::cordl_internals::getStaticField<Org::BouncyCastle::Crypto::Parameters::ECDomainParameters, "_ecParameters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get>();
}
 void GlobalNamespace::DiffieHellmanUtility::__set__ecPointFormats(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "_ecPointFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanUtility::__get__ecPointFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "_ecPointFormats", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get>();
}
/// @param cancellationToken: System::Threading::CancellationToken (default: {})
/// @param keyType: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType (default: 1)
 System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair> GlobalNamespace::DiffieHellmanUtility::GenerateKeysAsync(BGNet::Core::ITaskUtility taskUtility, System::Threading::CancellationToken cancellationToken, GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType keyType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GenerateKeysAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair>, false>(nullptr, ___internal_method, taskUtility, cancellationToken, keyType);
}
/// @param keyType: GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType (default: 1)
 GlobalNamespace::IDiffieHellmanKeyPair GlobalNamespace::DiffieHellmanUtility::GenerateKeys(GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType keyType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GenerateKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__KeyType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IDiffieHellmanKeyPair, false>(nullptr, ___internal_method, keyType);
}
 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair GlobalNamespace::DiffieHellmanUtility::GenerateDiffieHellmanKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GenerateDiffieHellmanKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__DiffieHellmanKeyPair, false>(nullptr, ___internal_method);
}
 GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair GlobalNamespace::DiffieHellmanUtility::GenerateElipticalCurveKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GenerateElipticalCurveKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__DiffieHellmanUtility__ElipticalCurveKeyPair, false>(nullptr, ___internal_method);
}
 ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement dhBasicAgreement, ::ArrayW<uint8_t> clientPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GetPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, dhBasicAgreement, clientPublicKey);
}
 ::ArrayW<uint8_t> GlobalNamespace::DiffieHellmanUtility::GetPreMasterSecret(Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement ecdhBasicAgreement, ::ArrayW<uint8_t> clientPublicKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DiffieHellmanUtility>::get(),
                            "GetPreMasterSecret",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Agreement::ECDHBasicAgreement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, ecdhBasicAgreement, clientPublicKey);
}
