#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "ENet/zzzz__PacketFreeCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "ENet/zzzz__Packet_def.hpp"
//  Writing Method size for method: ENet::PacketFreeCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::PacketFreeCallback::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&ENet::PacketFreeCallback::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x207c81c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::PacketFreeCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ENet::PacketFreeCallback.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::PacketFreeCallback::*)(ENet::Packet)>(&ENet::PacketFreeCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x207c8e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(ENet::PacketFreeCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::PacketFreeCallback>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ENet::PacketFreeCallback.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult (ENet::PacketFreeCallback::*)(ENet::Packet, System::AsyncCallback, ::bs_hook::Il2CppWrapperType)>(&ENet::PacketFreeCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x207c8f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(ENet::PacketFreeCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::PacketFreeCallback>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ENet::PacketFreeCallback.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ENet::PacketFreeCallback::*)(System::IAsyncResult)>(&ENet::PacketFreeCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x207c978;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(ENet::PacketFreeCallback),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::PacketFreeCallback>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ENet::PacketFreeCallback::PacketFreeCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<PacketFreeCallback>(object, method))) {}
 void ENet::PacketFreeCallback::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::PacketFreeCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ENet::PacketFreeCallback::Invoke(ENet::Packet packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::PacketFreeCallback>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ENet::Packet>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, packet);
}
 System::IAsyncResult ENet::PacketFreeCallback::BeginInvoke(ENet::Packet packet, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::PacketFreeCallback>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ENet::Packet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::AsyncCallback>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IAsyncResult, false>(const_cast<void*>(instance), ___internal_method, packet, callback, object);
}
 void ENet::PacketFreeCallback::EndInvoke(System::IAsyncResult result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ENet::PacketFreeCallback>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result);
}
