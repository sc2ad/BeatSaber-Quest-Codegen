#pragma once
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "BGNet/Core/Messages/zzzz__BaseServerUnconnectedMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateEncryptionProvider_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__IAsyncComputeManager_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__ClientHelloWithCookieRequest_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "BGNet/Core/Messages/zzzz__ClientHelloRequest_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/zzzz__IAnalyticsManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "BGNet/Core/Messages/zzzz__ClientKeyExchangeRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, GlobalNamespace::ICertificateEncryptionProvider, LiteNetLib::Utils::NetDataWriter)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xde0a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ICertificateEncryptionProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation.Compute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::Compute)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xde0b04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation.Finally
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::Finally)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xde0bfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__set__clientRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__clientRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__set__serverRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__serverRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__set__serverKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__serverKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__set__certificateEncryptionProvider(GlobalNamespace::ICertificateEncryptionProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ICertificateEncryptionProvider, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ICertificateEncryptionProvider>(value));
}
constexpr GlobalNamespace::ICertificateEncryptionProvider BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__certificateEncryptionProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ICertificateEncryptionProvider, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__set__writer(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::__get__writer() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "certificateEncryptionProvider", ty: "GlobalNamespace::ICertificateEncryptionProvider", modifiers: "", def_value: None }, CppParam { name: "writer", ty: "LiteNetLib::Utils::NetDataWriter", modifiers: "", def_value: None }]
 BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, GlobalNamespace::ICertificateEncryptionProvider certificateEncryptionProvider, LiteNetLib::Utils::NetDataWriter writer)  : GlobalNamespace::AsyncComputeOperation_1<::ArrayW<uint8_t>>(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation>(clientRandom, serverRandom, serverKey, certificateEncryptionProvider, writer))) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::_ctor(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, GlobalNamespace::ICertificateEncryptionProvider certificateEncryptionProvider, LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ICertificateEncryptionProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clientRandom, serverRandom, serverKey, certificateEncryptionProvider, writer);
}
 ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::Compute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation>::get(),
                            "Compute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation::Finally()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation>::get(),
                            "Finally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::*)(GlobalNamespace::IDiffieHellmanKeyPair, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xde0c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDiffieHellmanKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation.Compute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::Compute)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xde0c7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__set__serverKey(GlobalNamespace::IDiffieHellmanKeyPair value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IDiffieHellmanKeyPair>(value));
}
constexpr GlobalNamespace::IDiffieHellmanKeyPair BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__get__serverKey() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__set__clientKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::__get__clientKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "serverKey", ty: "GlobalNamespace::IDiffieHellmanKeyPair", modifiers: "", def_value: None }, CppParam { name: "clientKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation(GlobalNamespace::IDiffieHellmanKeyPair serverKey, ::ArrayW<uint8_t> clientKey)  : GlobalNamespace::AsyncComputeOperation_1<::ArrayW<uint8_t>>(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation>(serverKey, clientKey))) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::_ctor(GlobalNamespace::IDiffieHellmanKeyPair serverKey, ::ArrayW<uint8_t> clientKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDiffieHellmanKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, serverKey, clientKey);
}
 ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation::Compute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation>::get(),
                            "Compute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xde0d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c.__ctor_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::*)(System::Security::Cryptography::X509Certificates::X509Certificate2)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::__ctor_b__12_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xde0d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c>::get(),
                            "<.ctor>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
    return ___internal_method;
  }
};
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::__set___9(BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c value)  {
::cordl_internals::setStaticField<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c>::get>(std::forward<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c>(value));
}
 BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::__get___9()  {
return ::cordl_internals::getStaticField<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c>::get>();
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::__set___9__12_0(System::Func_2<System::Security::Cryptography::X509Certificates::X509Certificate2,::ArrayW<uint8_t>> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Security::Cryptography::X509Certificates::X509Certificate2,::ArrayW<uint8_t>>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c>::get>(std::forward<System::Func_2<System::Security::Cryptography::X509Certificates::X509Certificate2,::ArrayW<uint8_t>>>(value));
}
 System::Func_2<System::Security::Cryptography::X509Certificates::X509Certificate2,::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::__get___9__12_0()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Security::Cryptography::X509Certificates::X509Certificate2,::ArrayW<uint8_t>>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c>::get>();
}
// Ctor Parameters []
 BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c>())) {}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c::__ctor_b__12_0(System::Security::Cryptography::X509Certificates::X509Certificate2 cert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler____c>::get(),
                            "<.ctor>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, cert);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xde0db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde1060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseServerUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "certificateResponseId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __4__this, uint32_t protocolVersion, System::Net::IPEndPoint endPoint, uint32_t requestId, uint32_t certificateResponseId, ::ArrayW<uint8_t> clientRandom, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->protocolVersion = protocolVersion;
this->endPoint = endPoint;
this->requestId = requestId;
this->certificateResponseId = certificateResponseId;
this->clientRandom = clientRandom;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__set___4__this(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0x28>(this->__instance, std::forward<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseServerUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__set_endPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x38>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__get_endPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__set_requestId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x40>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__get_requestId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x40>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__set_certificateResponseId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x44>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__get_certificateResponseId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x44>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__set_clientRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x48>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__get_clientRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x48>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x50>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x50>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlow_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0xac8;
  constexpr static std::size_t addrs = 0xde106c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde2080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseServerUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "protocolVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: Some("csnull") }, CppParam { name: "certificateResponseId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_serverRandom_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_serverKeys_5__3", ty: "GlobalNamespace::IDiffieHellmanKeyPair", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_responseId_5__4", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_encryptionState_5__5", ty: "GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__4", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__5", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __4__this, ::ArrayW<uint8_t> clientRandom, uint32_t protocolVersion, System::Net::IPEndPoint endPoint, uint32_t certificateResponseId, uint32_t requestId, ::ArrayW<uint8_t> _serverRandom_5__2, GlobalNamespace::IDiffieHellmanKeyPair _serverKeys_5__3, uint32_t _responseId_5__4, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState _encryptionState_5__5, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest> __u__2, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __u__3, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> __u__4, System::Runtime::CompilerServices::TaskAwaiter __u__5) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->clientRandom = clientRandom;
this->protocolVersion = protocolVersion;
this->endPoint = endPoint;
this->certificateResponseId = certificateResponseId;
this->requestId = requestId;
this->_serverRandom_5__2 = _serverRandom_5__2;
this->_serverKeys_5__3 = _serverKeys_5__3;
this->_responseId_5__4 = _responseId_5__4;
this->_encryptionState_5__5 = _encryptionState_5__5;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
this->__u__5 = __u__5;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set___4__this(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseServerUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set_clientRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get_clientRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set_protocolVersion(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x30>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get_protocolVersion() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set_endPoint(System::Net::IPEndPoint value)  {
::cordl_internals::setInstanceField<System::Net::IPEndPoint, 0x38>(this->__instance, std::forward<System::Net::IPEndPoint>(value));
}
constexpr System::Net::IPEndPoint BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get_endPoint() const {
return ::cordl_internals::getInstanceField<System::Net::IPEndPoint, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set_certificateResponseId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x40>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get_certificateResponseId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x40>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set_requestId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x44>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get_requestId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x44>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set__serverRandom_5__2(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x48>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get__serverRandom_5__2() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x48>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set__serverKeys_5__3(GlobalNamespace::IDiffieHellmanKeyPair value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0x50>(this->__instance, std::forward<GlobalNamespace::IDiffieHellmanKeyPair>(value));
}
constexpr GlobalNamespace::IDiffieHellmanKeyPair BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get__serverKeys_5__3() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0x50>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set__responseId_5__4(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x58>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get__responseId_5__4() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x58>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set__encryptionState_5__5(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, 0x60>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get__encryptionState_5__5() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState, 0x60>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0x68>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0x68>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest>, 0x70>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::ClientKeyExchangeRequest>, 0x70>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set___u__3(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x78>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get___u__3() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>, 0x78>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set___u__4(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>, 0x80>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get___u__4() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>, 0x80>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__set___u__5(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x88>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::__get___u__5() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x88>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___StartServerAuthenticationFlowAsync_d__21>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0xde208c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xde2488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "serverKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseServerUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_signingRequest_5__2", ty: "BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, ::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __4__this, BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation _signingRequest_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->clientRandom = clientRandom;
this->serverRandom = serverRandom;
this->serverKey = serverKey;
this->__4__this = __4__this;
this->_signingRequest_5__2 = _signingRequest_5__2;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__set_clientRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__get_clientRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__set_serverRandom(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__get_serverRandom() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__set_serverKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__get_serverKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__set___4__this(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0x38>(this->__instance, std::forward<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseServerUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__set__signingRequest_5__2(BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation, 0x40>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__get__signingRequest_5__2() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__SigningComputeOperation, 0x40>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0x48>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0x48>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetSignatureAsync_d__23>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xde24e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xde28a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "serverKeys", ty: "GlobalNamespace::IDiffieHellmanKeyPair", modifiers: "", def_value: Some("csnull") }, CppParam { name: "clientKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseServerUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_preMasterSecretRequest_5__2", ty: "BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> __t__builder, GlobalNamespace::IDiffieHellmanKeyPair serverKeys, ::ArrayW<uint8_t> clientKey, BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __4__this, BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation _preMasterSecretRequest_5__2, System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->serverKeys = serverKeys;
this->clientKey = clientKey;
this->__4__this = __4__this;
this->_preMasterSecretRequest_5__2 = _preMasterSecretRequest_5__2;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__set_serverKeys(GlobalNamespace::IDiffieHellmanKeyPair value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0x20>(this->__instance, std::forward<GlobalNamespace::IDiffieHellmanKeyPair>(value));
}
constexpr GlobalNamespace::IDiffieHellmanKeyPair BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__get_serverKeys() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__set_clientKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__get_clientKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__set___4__this(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0x30>(this->__instance, std::forward<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseServerUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0x30>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__set__preMasterSecretRequest_5__2(BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation, 0x38>(this->__instance, std::forward<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation>(value));
}
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__get__preMasterSecretRequest_5__2() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler__GetPreMasterSecretComputeOperation, 0x38>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0x40>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>, 0x40>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___GetPreMasterSecretAsync_d__24>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::*)()>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xde28fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::*)(System::Runtime::CompilerServices::IAsyncStateMachine)>(&BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xde2bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "BGNet::Core::Messages::BaseServerUnconnectedMessageHandler", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair>", modifiers: "", def_value: Some("{}") }]
constexpr BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, BGNet::Core::Messages::BaseServerUnconnectedMessageHandler __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder, 0x8>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::__set___4__this(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler value)  {
::cordl_internals::setInstanceField<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0x20>(this->__instance, std::forward<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>(value));
}
constexpr BGNet::Core::Messages::BaseServerUnconnectedMessageHandler BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::__get___4__this() const {
return ::cordl_internals::getInstanceField<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler, 0x20>(this->__instance);
}
constexpr void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair> BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair>, 0x28>(this->__instance);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BGNet__Core__Messages__BaseServerUnconnectedMessageHandler___RotateServerKeysAsync_d__26>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(GlobalNamespace::IUnconnectedMessageSender, BGNet::Core::ITimeProvider, BGNet::Core::ITaskUtility, GlobalNamespace::IAsyncComputeManager, BGNet::Core::IAnalyticsManager, GlobalNamespace::ICertificateEncryptionProvider, System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xdde8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IUnconnectedMessageSender>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAsyncComputeManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::IAnalyticsManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ICertificateEncryptionProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::PollUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xddf948;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.GetMessageType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedMessage)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetMessageType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xddfb30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.ShouldHandleMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(BGNet::Core::Messages::IUnconnectedMessage, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::ShouldHandleMessage)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xddfbf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.RegisterHandshakeMessageHandlers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RegisterHandshakeMessageHandlers)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0xddef5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "RegisterHandshakeMessageHandlers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.HandleClientHelloRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(BGNet::Core::Messages::ClientHelloRequest, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloRequest)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xde01ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "HandleClientHelloRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::ClientHelloRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.HandleClientHelloWithCookieRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(BGNet::Core::Messages::ClientHelloWithCookieRequest, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloWithCookieRequest)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xde04b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "HandleClientHelloWithCookieRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.StartServerAuthenticationFlow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, uint32_t, uint32_t, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlow)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xde052c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "StartServerAuthenticationFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.VerifyAuthenticationRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, BGNet::Core::Messages::IUnconnectedAuthenticateRequest)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::VerifyAuthenticationRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.StartServerAuthenticationFlowAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(uint32_t, System::Net::IPEndPoint, uint32_t, uint32_t, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlowAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xde0600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "StartServerAuthenticationFlowAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.GetCookie
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(System::Net::IPEndPoint, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetCookie)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xddfd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "GetCookie",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.GetSignatureAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetSignatureAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xde0710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "GetSignatureAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.GetPreMasterSecretAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(GlobalNamespace::IDiffieHellmanKeyPair, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xde0820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "GetPreMasterSecretAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDiffieHellmanKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.RotateServerKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeys)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xddfa0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "RotateServerKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.RotateServerKeysAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeysAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xde0928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "RotateServerKeysAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler.HandshakeLog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::*)(::StringW)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandshakeLog)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xde09f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "HandshakeLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__certificateEncryptionProvider(GlobalNamespace::ICertificateEncryptionProvider value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ICertificateEncryptionProvider, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ICertificateEncryptionProvider>(value));
}
constexpr GlobalNamespace::ICertificateEncryptionProvider BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__certificateEncryptionProvider() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ICertificateEncryptionProvider, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__certificateChain(::ArrayW<::ArrayW<uint8_t>> value)  {
::cordl_internals::setInstanceField<::ArrayW<::ArrayW<uint8_t>>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::ArrayW<uint8_t>>>(value));
}
constexpr ::ArrayW<::ArrayW<uint8_t>> BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__certificateChain() const {
return ::cordl_internals::getInstanceField<::ArrayW<::ArrayW<uint8_t>>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__cookieWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__cookieWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__signatureWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__signatureWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__asyncCompute(GlobalNamespace::IAsyncComputeManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IAsyncComputeManager, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IAsyncComputeManager>(value));
}
constexpr GlobalNamespace::IAsyncComputeManager BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__asyncCompute() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IAsyncComputeManager, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__lastServerKeyPairRequestTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__lastServerKeyPairRequestTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__serverKeys(GlobalNamespace::IDiffieHellmanKeyPair value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IDiffieHellmanKeyPair>(value));
}
constexpr GlobalNamespace::IDiffieHellmanKeyPair BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__serverKeys() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IDiffieHellmanKeyPair, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__serverKeyRotationTask(System::Threading::Tasks::Task value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task>(value));
}
constexpr System::Threading::Tasks::Task BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__serverKeyRotationTask() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__set__hmacKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::__get__hmacKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "sender", ty: "GlobalNamespace::IUnconnectedMessageSender", modifiers: "", def_value: None }, CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "asyncCompute", ty: "GlobalNamespace::IAsyncComputeManager", modifiers: "", def_value: None }, CppParam { name: "analytics", ty: "BGNet::Core::IAnalyticsManager", modifiers: "", def_value: None }, CppParam { name: "certificateEncryptionProvider", ty: "GlobalNamespace::ICertificateEncryptionProvider", modifiers: "", def_value: None }, CppParam { name: "certificateList", ty: "System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>", modifiers: "", def_value: None }]
 BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::BaseServerUnconnectedMessageHandler(GlobalNamespace::IUnconnectedMessageSender sender, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IAsyncComputeManager asyncCompute, BGNet::Core::IAnalyticsManager analytics, GlobalNamespace::ICertificateEncryptionProvider certificateEncryptionProvider, System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2> certificateList)  : BGNet::Core::Messages::UnconnectedMessageHandler(THROW_UNLESS(::il2cpp_utils::New<BaseServerUnconnectedMessageHandler>(sender, timeProvider, taskUtility, asyncCompute, analytics, certificateEncryptionProvider, certificateList))) {}
 void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::_ctor(GlobalNamespace::IUnconnectedMessageSender sender, BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IAsyncComputeManager asyncCompute, BGNet::Core::IAnalyticsManager analytics, GlobalNamespace::ICertificateEncryptionProvider certificateEncryptionProvider, System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2> certificateList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IUnconnectedMessageSender>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITimeProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::ITaskUtility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IAsyncComputeManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::IAnalyticsManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ICertificateEncryptionProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sender, timeProvider, taskUtility, asyncCompute, analytics, certificateEncryptionProvider, certificateList);
}
 void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 uint32_t BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetMessageType(BGNet::Core::Messages::IUnconnectedMessage message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "GetMessageType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, message);
}
 bool BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::ShouldHandleMessage(BGNet::Core::Messages::IUnconnectedMessage packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "ShouldHandleMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedMessage>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
 void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RegisterHandshakeMessageHandlers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "RegisterHandshakeMessageHandlers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloRequest(BGNet::Core::Messages::ClientHelloRequest packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "HandleClientHelloRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::ClientHelloRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
 void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandleClientHelloWithCookieRequest(BGNet::Core::Messages::ClientHelloWithCookieRequest packet, BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin origin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "HandleClientHelloWithCookieRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::ClientHelloWithCookieRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::BGNet__Core__Messages__UnconnectedMessageHandler__MessageOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet, origin);
}
 void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlow(uint32_t protocolVersion, System::Net::IPEndPoint endPoint, uint32_t requestId, uint32_t certificateResponseId, ::ArrayW<uint8_t> clientRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "StartServerAuthenticationFlow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, endPoint, requestId, certificateResponseId, clientRandom);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::VerifyAuthenticationRequest(uint32_t protocolVersion, System::Net::IPEndPoint endPoint, BGNet::Core::Messages::IUnconnectedAuthenticateRequest authenticateRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "VerifyAuthenticationRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::Messages::IUnconnectedAuthenticateRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, endPoint, authenticateRequest);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::StartServerAuthenticationFlowAsync(uint32_t protocolVersion, System::Net::IPEndPoint endPoint, uint32_t requestId, uint32_t certificateResponseId, ::ArrayW<uint8_t> clientRandom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "StartServerAuthenticationFlowAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method, protocolVersion, endPoint, requestId, certificateResponseId, clientRandom);
}
 ::ArrayW<uint8_t> BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetCookie(System::Net::IPEndPoint endPoint, ::ArrayW<uint8_t> random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "GetCookie",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::IPEndPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, endPoint, random);
}
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetSignatureAsync(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "GetSignatureAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method, clientRandom, serverRandom, serverKey);
}
 System::Threading::Tasks::Task_1<::ArrayW<uint8_t>> BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::GetPreMasterSecretAsync(GlobalNamespace::IDiffieHellmanKeyPair serverKeys, ::ArrayW<uint8_t> clientKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "GetPreMasterSecretAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IDiffieHellmanKeyPair>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>, false>(const_cast<void*>(instance), ___internal_method, serverKeys, clientKey);
}
 void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "RotateServerKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::RotateServerKeysAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "RotateServerKeysAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task, false>(const_cast<void*>(instance), ___internal_method);
}
 void BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::HandshakeLog(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::Messages::BaseServerUnconnectedMessageHandler>::get(),
                            "HandshakeLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
} // end anonymous namespace
