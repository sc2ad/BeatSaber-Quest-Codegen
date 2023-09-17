#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__MessageWithRoomInviteNotificationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomInviteNotificationList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomInviteNotificationList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithRoomInviteNotificationList::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithRoomInviteNotificationList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257f190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomInviteNotificationList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomInviteNotificationList.GetRoomInviteNotificationList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::RoomInviteNotificationList (::Oculus::Platform::MessageWithRoomInviteNotificationList::*)()>(&::Oculus::Platform::MessageWithRoomInviteNotificationList::GetRoomInviteNotificationList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2583930;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithRoomInviteNotificationList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomInviteNotificationList>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomInviteNotificationList.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::RoomInviteNotificationList (::Oculus::Platform::MessageWithRoomInviteNotificationList::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithRoomInviteNotificationList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x258396c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithRoomInviteNotificationList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomInviteNotificationList>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::MessageWithRoomInviteNotificationList::MessageWithRoomInviteNotificationList(::cordl_internals::intptr_t c_message)  : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RoomInviteNotificationList>(THROW_UNLESS(::il2cpp_utils::New<MessageWithRoomInviteNotificationList>(c_message))) {}
 void ::Oculus::Platform::MessageWithRoomInviteNotificationList::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomInviteNotificationList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 ::Oculus::Platform::Models::RoomInviteNotificationList ::Oculus::Platform::MessageWithRoomInviteNotificationList::GetRoomInviteNotificationList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomInviteNotificationList>::get(),
                            "GetRoomInviteNotificationList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RoomInviteNotificationList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::RoomInviteNotificationList ::Oculus::Platform::MessageWithRoomInviteNotificationList::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomInviteNotificationList>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RoomInviteNotificationList, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
} // end anonymous namespace
