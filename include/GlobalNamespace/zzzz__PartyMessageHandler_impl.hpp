#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PartyMessageHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__MessageType::____GlobalNamespace__PartyMessageHandler__MessageType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__MessageType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__MessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__MessageType  ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__MessageType::ConnectToMasterServer{0};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xdc4178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xdc423c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xdc428c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::*)(::System::IAsyncResult)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc434c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate>(object, method))) {}
 void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::Invoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectionMask, configuration);
}
 ::System::IAsyncResult ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::BeginInvoke(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, selectionMask, configuration, callback, object);
}
 void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ServerStatusUpdatedDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xdc4358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::*)(::StringW)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xdc442c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::*)(::StringW, ::System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xdc4440;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::*)(::System::IAsyncResult)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xdc4460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>(object, method))) {}
 void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::Invoke(::StringW secret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secret);
}
 ::System::IAsyncResult ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::BeginInvoke(::StringW secret, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, secret, callback, object);
}
 void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate::EndInvoke(::System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage.get_pool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage> (*)()>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdc3eb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::*)(::StringW)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc40dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::*)(::LiteNetLib::Utils::NetDataWriter)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::Serialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdc446c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::*)(::LiteNetLib::Utils::NetDataReader)>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdc4490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::*)()>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xdc4124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::*)()>(&::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdc44b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::LiteNetLib::Utils::INetSerializable
constexpr  ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::operator ::LiteNetLib::Utils::INetSerializable() const noexcept {
return ::LiteNetLib::Utils::INetSerializable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::IPoolablePacket
constexpr  ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::operator ::GlobalNamespace::IPoolablePacket() const noexcept {
return ::GlobalNamespace::IPoolablePacket(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::__set_secret(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::__get_secret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage> ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::get_pool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            "get_pool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>, false>(nullptr, ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::Init(::StringW secret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage, false>(const_cast<void*>(instance), ___internal_method, secret);
}
 void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::Serialize(::LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::Deserialize(::LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>())) {}
 void ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::ConnectedPlayerManager)>(&::GlobalNamespace::PartyMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xdc3d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)()>(&::GlobalNamespace::PartyMessageHandler::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdc3ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.add_connectToMasterServerEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate)>(&::GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdc3f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            "add_connectToMasterServerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.remove_connectToMasterServerEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate)>(&::GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xdc3fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            "remove_connectToMasterServerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.ConnectToMasterServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::StringW)>(&::GlobalNamespace::PartyMessageHandler::ConnectToMasterServer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xdc4054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            "ConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyMessageHandler.HandleConnectToMasterServer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyMessageHandler::*)(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage)>(&::GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdc40e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            "HandleConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::PartyMessageHandler::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PartyMessageHandler::__set__serializer(::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer>>(value));
}
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer> ::GlobalNamespace::PartyMessageHandler::__get__serializer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__MessageType,::GlobalNamespace::IConnectedPlayer>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PartyMessageHandler::__set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ConnectedPlayerManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ConnectedPlayerManager>(value));
}
constexpr ::GlobalNamespace::ConnectedPlayerManager ::GlobalNamespace::PartyMessageHandler::__get__connectedPlayerManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ConnectedPlayerManager, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PartyMessageHandler::__set_connectToMasterServerEvent(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate ::GlobalNamespace::PartyMessageHandler::__get_connectToMasterServerEvent() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "connectedPlayerManager", ty: "::GlobalNamespace::ConnectedPlayerManager", modifiers: "", def_value: None }]
 ::GlobalNamespace::PartyMessageHandler::PartyMessageHandler(::GlobalNamespace::ConnectedPlayerManager connectedPlayerManager)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PartyMessageHandler>(connectedPlayerManager))) {}
 void ::GlobalNamespace::PartyMessageHandler::_ctor(::GlobalNamespace::ConnectedPlayerManager connectedPlayerManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectedPlayerManager);
}
 void ::GlobalNamespace::PartyMessageHandler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            "add_connectToMasterServerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            "remove_connectToMasterServerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerDelegate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::PartyMessageHandler::ConnectToMasterServer(::StringW secret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            "ConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, secret);
}
 void ::GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer(::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyMessageHandler>::get(),
                            "HandleConnectToMasterServer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__PartyMessageHandler__ConnectToMasterServerMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
} // end anonymous namespace
