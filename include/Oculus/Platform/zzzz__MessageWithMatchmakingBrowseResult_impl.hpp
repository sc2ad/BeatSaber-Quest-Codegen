#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__MessageWithMatchmakingBrowseResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomList_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingBrowseResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingBrowseResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithMatchmakingBrowseResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithMatchmakingBrowseResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257eab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingBrowseResult.GetMatchmakingEnqueueResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingEnqueueResult (::Oculus::Platform::MessageWithMatchmakingBrowseResult::*)()>(&::Oculus::Platform::MessageWithMatchmakingBrowseResult::GetMatchmakingEnqueueResult)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25847e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithMatchmakingBrowseResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingBrowseResult.GetRoomList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::RoomList (::Oculus::Platform::MessageWithMatchmakingBrowseResult::*)()>(&::Oculus::Platform::MessageWithMatchmakingBrowseResult::GetRoomList)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x258482c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithMatchmakingBrowseResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult>::get(),
                                  76
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingBrowseResult.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingBrowseResult (::Oculus::Platform::MessageWithMatchmakingBrowseResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithMatchmakingBrowseResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2584874;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithMatchmakingBrowseResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::MessageWithMatchmakingBrowseResult::MessageWithMatchmakingBrowseResult(::cordl_internals::intptr_t c_message)  : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::MatchmakingBrowseResult>(THROW_UNLESS(::il2cpp_utils::New<MessageWithMatchmakingBrowseResult>(c_message))) {}
 void ::Oculus::Platform::MessageWithMatchmakingBrowseResult::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 ::Oculus::Platform::Models::MatchmakingEnqueueResult ::Oculus::Platform::MessageWithMatchmakingBrowseResult::GetMatchmakingEnqueueResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult>::get(),
                            "GetMatchmakingEnqueueResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingEnqueueResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::RoomList ::Oculus::Platform::MessageWithMatchmakingBrowseResult::GetRoomList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult>::get(),
                            "GetRoomList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RoomList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::MatchmakingBrowseResult ::Oculus::Platform::MessageWithMatchmakingBrowseResult::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingBrowseResult, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
} // end anonymous namespace
