#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMatchmakingEnqueueResultAndRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResultAndRoom_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257eb60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom.GetMatchmakingEnqueueResultAndRoom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom (Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::*)()>(&Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::GetMatchmakingEnqueueResultAndRoom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2582410;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom (Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x258244c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::MessageWithMatchmakingEnqueueResultAndRoom(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom>(THROW_UNLESS(::il2cpp_utils::New<MessageWithMatchmakingEnqueueResultAndRoom>(c_message))) {}
 void Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::GetMatchmakingEnqueueResultAndRoom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom>::get(),
                            "GetMatchmakingEnqueueResultAndRoom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
