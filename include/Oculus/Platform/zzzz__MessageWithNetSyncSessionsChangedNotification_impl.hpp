#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithNetSyncSessionsChangedNotification._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257ecc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSessionsChangedNotification>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithNetSyncSessionsChangedNotification.GetNetSyncSessionsChangedNotification
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncSessionsChangedNotification (Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)()>(&Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetNetSyncSessionsChangedNotification)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25828a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithNetSyncSessionsChangedNotification),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSessionsChangedNotification>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithNetSyncSessionsChangedNotification.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncSessionsChangedNotification (Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25828dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithNetSyncSessionsChangedNotification),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSessionsChangedNotification>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::MessageWithNetSyncSessionsChangedNotification(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncSessionsChangedNotification>(THROW_UNLESS(::il2cpp_utils::New<MessageWithNetSyncSessionsChangedNotification>(c_message))) {}
 void Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSessionsChangedNotification>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::NetSyncSessionsChangedNotification Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetNetSyncSessionsChangedNotification()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSessionsChangedNotification>::get(),
                            "GetNetSyncSessionsChangedNotification",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::NetSyncSessionsChangedNotification, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::NetSyncSessionsChangedNotification Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSessionsChangedNotification>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::NetSyncSessionsChangedNotification, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
