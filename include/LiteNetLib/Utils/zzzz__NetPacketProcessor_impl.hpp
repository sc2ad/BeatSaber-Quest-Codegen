#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NetPacketProcessor_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetSerializer_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__HashCache_1::__set_Initialized(bool value)  {
::cordl_internals::setStaticField<bool, "Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__HashCache_1>::get>(std::forward<bool>(value));
}
 bool LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__HashCache_1::__get_Initialized()  {
return ::cordl_internals::getStaticField<bool, "Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__HashCache_1>::get>();
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__HashCache_1::__set_Id(uint64_t value)  {
::cordl_internals::setStaticField<uint64_t, "Id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__HashCache_1>::get>(std::forward<uint64_t>(value));
}
 uint64_t LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__HashCache_1::__get_Id()  {
return ::cordl_internals::getStaticField<uint64_t, "Id", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__HashCache_1>::get>();
}
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x20992cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x20993fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2099410;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::*)(System::IAsyncResult)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2099438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>(object, method))) {}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::Invoke(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
 System::IAsyncResult LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::BeginInvoke(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, reader, userData, callback, object);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
//  Writing Method size for method: LiteNetLib::Utils::NetPacketProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::*)()>(&LiteNetLib::Utils::NetPacketProcessor::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2098e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::NetPacketProcessor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::*)(int32_t)>(&LiteNetLib::Utils::NetPacketProcessor::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2098f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::NetPacketProcessor.GetCallbackFromData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate (LiteNetLib::Utils::NetPacketProcessor::*)(LiteNetLib::Utils::NetDataReader)>(&LiteNetLib::Utils::NetPacketProcessor::GetCallbackFromData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x20990a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LiteNetLib::Utils::NetPacketProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::NetPacketProcessor.ReadAllPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::*)(LiteNetLib::Utils::NetDataReader)>(&LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x20991e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            "ReadAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::NetPacketProcessor.ReadAllPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2099234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            "ReadAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::NetPacketProcessor.ReadPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::*)(LiteNetLib::Utils::NetDataReader)>(&LiteNetLib::Utils::NetPacketProcessor::ReadPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x209922c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::NetPacketProcessor.ReadPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NetPacketProcessor::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::NetPacketProcessor::ReadPacket)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2099284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::NetPacketProcessor::__set__netSerializer(LiteNetLib::Utils::NetSerializer value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetSerializer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetSerializer>(value));
}
constexpr LiteNetLib::Utils::NetSerializer LiteNetLib::Utils::NetPacketProcessor::__get__netSerializer() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetSerializer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::NetPacketProcessor::__set__callbacks(System::Collections::Generic::Dictionary_2<uint64_t,LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<uint64_t,LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<uint64_t,LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<uint64_t,LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate> LiteNetLib::Utils::NetPacketProcessor::__get__callbacks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<uint64_t,LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::NetPacketProcessor::__set__netDataWriter(LiteNetLib::Utils::NetDataWriter value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetDataWriter, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetDataWriter>(value));
}
constexpr LiteNetLib::Utils::NetDataWriter LiteNetLib::Utils::NetPacketProcessor::__get__netDataWriter() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetDataWriter, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 LiteNetLib::Utils::NetPacketProcessor::NetPacketProcessor()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NetPacketProcessor>())) {}
 void LiteNetLib::Utils::NetPacketProcessor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "maxStringLength", ty: "int32_t", modifiers: "", def_value: None }]
 LiteNetLib::Utils::NetPacketProcessor::NetPacketProcessor(int32_t maxStringLength)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<NetPacketProcessor>(maxStringLength))) {}
 void LiteNetLib::Utils::NetPacketProcessor::_ctor(int32_t maxStringLength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxStringLength);
}
template<typename T>
 uint64_t LiteNetLib::Utils::NetPacketProcessor::GetHash()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "GetHash",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate LiteNetLib::Utils::NetPacketProcessor::GetCallbackFromData(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            "GetCallbackFromData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor__SubscribeDelegate, false>(const_cast<void*>(instance), ___internal_method, reader);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::WriteHash(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "WriteHash",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType(System::Action_2<LiteNetLib::Utils::NetDataWriter,T> writeDelegate, System::Func_2<LiteNetLib::Utils::NetDataReader,T> readDelegate)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<LiteNetLib::Utils::NetDataWriter,T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<LiteNetLib::Utils::NetDataReader,T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writeDelegate, readDelegate);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::RegisterNestedType(System::Func_1<T> constructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "RegisterNestedType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, constructor);
}
 void LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            "ReadAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 void LiteNetLib::Utils::NetPacketProcessor::ReadAllPackets(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            "ReadAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
 void LiteNetLib::Utils::NetPacketProcessor::ReadPacket(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::Send(LiteNetLib::NetPeer peer, T packet, LiteNetLib::DeliveryMethod options)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "Send",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, packet, options);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::SendNetSerializable(LiteNetLib::NetPeer peer, T packet, LiteNetLib::DeliveryMethod options)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "SendNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetPeer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, peer, packet, options);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::Send(LiteNetLib::NetManager manager, T packet, LiteNetLib::DeliveryMethod options)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "Send",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, manager, packet, options);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::SendNetSerializable(LiteNetLib::NetManager manager, T packet, LiteNetLib::DeliveryMethod options)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "SendNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::NetManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::DeliveryMethod>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, manager, packet, options);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::Write(LiteNetLib::Utils::NetDataWriter writer, T packet)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "Write",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, packet);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::WriteNetSerializable(LiteNetLib::Utils::NetDataWriter writer, T packet)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "WriteNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer, packet);
}
template<typename T>
 ::ArrayW<uint8_t> LiteNetLib::Utils::NetPacketProcessor::Write(T packet)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "Write",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, packet);
}
template<typename T>
 ::ArrayW<uint8_t> LiteNetLib::Utils::NetPacketProcessor::WriteNetSerializable(T packet)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "WriteNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 void LiteNetLib::Utils::NetPacketProcessor::ReadPacket(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::Subscribe(System::Action_1<T> onReceive, System::Func_1<T> packetConstructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "Subscribe",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onReceive, packetConstructor);
}
template<typename T,typename TUserData>
 void LiteNetLib::Utils::NetPacketProcessor::Subscribe(System::Action_2<T,TUserData> onReceive, System::Func_1<T> packetConstructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "Subscribe",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<T,TUserData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onReceive, packetConstructor);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::SubscribeReusable(System::Action_1<T> onReceive)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "SubscribeReusable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onReceive);
}
template<typename T,typename TUserData>
 void LiteNetLib::Utils::NetPacketProcessor::SubscribeReusable(System::Action_2<T,TUserData> onReceive)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "SubscribeReusable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<T,TUserData>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onReceive);
}
template<typename T,typename TUserData>
 void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(System::Action_2<T,TUserData> onReceive, System::Func_1<T> packetConstructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "SubscribeNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<T,TUserData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onReceive, packetConstructor);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(System::Action_1<T> onReceive, System::Func_1<T> packetConstructor)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "SubscribeNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onReceive, packetConstructor);
}
template<typename T,typename TUserData>
 void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(System::Action_2<T,TUserData> onReceive)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "SubscribeNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<T,TUserData>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TUserData>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onReceive);
}
template<typename T>
 void LiteNetLib::Utils::NetPacketProcessor::SubscribeNetSerializable(System::Action_1<T> onReceive)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "SubscribeNetSerializable",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onReceive);
}
template<typename T>
 bool LiteNetLib::Utils::NetPacketProcessor::RemoveSubscription()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::NetPacketProcessor>::get(),
                        "RemoveSubscription",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::*)()>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1._Subscribe_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::_Subscribe_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1>::get(),
                            "<Subscribe>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::__set_packetConstructor(System::Func_1<T> value)  {
::cordl_internals::setInstanceField<System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<T>>(value));
}
constexpr System::Func_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::__get_packetConstructor() const {
return ::cordl_internals::getInstanceField<System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::__set___4__this(LiteNetLib::Utils::NetPacketProcessor value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetPacketProcessor, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetPacketProcessor>(value));
}
constexpr LiteNetLib::Utils::NetPacketProcessor LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetPacketProcessor, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::__set_onReceive(System::Action_1<T> value)  {
::cordl_internals::setInstanceField<System::Action_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<T>>(value));
}
constexpr System::Action_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::__get_onReceive() const {
return ::cordl_internals::getInstanceField<System::Action_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1>())) {}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1::_Subscribe_b__0(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass25_0_1>::get(),
                            "<Subscribe>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::*)()>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2._Subscribe_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::_Subscribe_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2>::get(),
                            "<Subscribe>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::__set_packetConstructor(System::Func_1<T> value)  {
::cordl_internals::setInstanceField<System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<T>>(value));
}
constexpr System::Func_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::__get_packetConstructor() const {
return ::cordl_internals::getInstanceField<System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::__set___4__this(LiteNetLib::Utils::NetPacketProcessor value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetPacketProcessor, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetPacketProcessor>(value));
}
constexpr LiteNetLib::Utils::NetPacketProcessor LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::__get___4__this() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetPacketProcessor, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::__set_onReceive(System::Action_2<T,TUserData> value)  {
::cordl_internals::setInstanceField<System::Action_2<T,TUserData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<T,TUserData>>(value));
}
constexpr System::Action_2<T,TUserData> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::__get_onReceive() const {
return ::cordl_internals::getInstanceField<System::Action_2<T,TUserData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2>())) {}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2::_Subscribe_b__0(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass26_0_2>::get(),
                            "<Subscribe>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::*)()>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1._SubscribeReusable_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::_SubscribeReusable_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1>::get(),
                            "<SubscribeReusable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::__set___4__this(LiteNetLib::Utils::NetPacketProcessor value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetPacketProcessor, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetPacketProcessor>(value));
}
constexpr LiteNetLib::Utils::NetPacketProcessor LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::__get___4__this() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetPacketProcessor, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::__set_reference(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::__get_reference() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::__set_onReceive(System::Action_1<T> value)  {
::cordl_internals::setInstanceField<System::Action_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<T>>(value));
}
constexpr System::Action_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::__get_onReceive() const {
return ::cordl_internals::getInstanceField<System::Action_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1>())) {}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1::_SubscribeReusable_b__0(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass27_0_1>::get(),
                            "<SubscribeReusable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::*)()>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2._SubscribeReusable_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::_SubscribeReusable_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2>::get(),
                            "<SubscribeReusable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::__set___4__this(LiteNetLib::Utils::NetPacketProcessor value)  {
::cordl_internals::setInstanceField<LiteNetLib::Utils::NetPacketProcessor, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<LiteNetLib::Utils::NetPacketProcessor>(value));
}
constexpr LiteNetLib::Utils::NetPacketProcessor LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::__get___4__this() const {
return ::cordl_internals::getInstanceField<LiteNetLib::Utils::NetPacketProcessor, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::__set_reference(T value)  {
::cordl_internals::setInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::__get_reference() const {
return ::cordl_internals::getInstanceField<T, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::__set_onReceive(System::Action_2<T,TUserData> value)  {
::cordl_internals::setInstanceField<System::Action_2<T,TUserData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<T,TUserData>>(value));
}
constexpr System::Action_2<T,TUserData> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::__get_onReceive() const {
return ::cordl_internals::getInstanceField<System::Action_2<T,TUserData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2>())) {}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2::_SubscribeReusable_b__0(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass28_0_2>::get(),
                            "<SubscribeReusable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::*)()>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2._SubscribeNetSerializable_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::_SubscribeNetSerializable_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::__set_packetConstructor(System::Func_1<T> value)  {
::cordl_internals::setInstanceField<System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<T>>(value));
}
constexpr System::Func_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::__get_packetConstructor() const {
return ::cordl_internals::getInstanceField<System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::__set_onReceive(System::Action_2<T,TUserData> value)  {
::cordl_internals::setInstanceField<System::Action_2<T,TUserData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<T,TUserData>>(value));
}
constexpr System::Action_2<T,TUserData> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::__get_onReceive() const {
return ::cordl_internals::getInstanceField<System::Action_2<T,TUserData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2>())) {}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2::_SubscribeNetSerializable_b__0(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass29_0_2>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::*)()>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1._SubscribeNetSerializable_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::_SubscribeNetSerializable_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::__set_packetConstructor(System::Func_1<T> value)  {
::cordl_internals::setInstanceField<System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<T>>(value));
}
constexpr System::Func_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::__get_packetConstructor() const {
return ::cordl_internals::getInstanceField<System::Func_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::__set_onReceive(System::Action_1<T> value)  {
::cordl_internals::setInstanceField<System::Action_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<T>>(value));
}
constexpr System::Action_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::__get_onReceive() const {
return ::cordl_internals::getInstanceField<System::Action_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1>())) {}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1::_SubscribeNetSerializable_b__0(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass30_0_1>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::*)()>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2._SubscribeNetSerializable_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::_SubscribeNetSerializable_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::__set_reference(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::__get_reference() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::__set_onReceive(System::Action_2<T,TUserData> value)  {
::cordl_internals::setInstanceField<System::Action_2<T,TUserData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<T,TUserData>>(value));
}
constexpr System::Action_2<T,TUserData> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::__get_onReceive() const {
return ::cordl_internals::getInstanceField<System::Action_2<T,TUserData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2>())) {}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2::_SubscribeNetSerializable_b__0(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass31_0_2>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::*)()>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1._SubscribeNetSerializable_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::*)(LiteNetLib::Utils::NetDataReader, ::bs_hook::Il2CppWrapperType)>(&LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::_SubscribeNetSerializable_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::__set_reference(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::__get_reference() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::__set_onReceive(System::Action_1<T> value)  {
::cordl_internals::setInstanceField<System::Action_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<T>>(value));
}
constexpr System::Action_1<T> LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::__get_onReceive() const {
return ::cordl_internals::getInstanceField<System::Action_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1>())) {}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1::_SubscribeNetSerializable_b__0(LiteNetLib::Utils::NetDataReader reader, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LiteNetLib::Utils::LiteNetLib__Utils__NetPacketProcessor____c__DisplayClass32_0_1>::get(),
                            "<SubscribeNetSerializable>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader, userData);
}
