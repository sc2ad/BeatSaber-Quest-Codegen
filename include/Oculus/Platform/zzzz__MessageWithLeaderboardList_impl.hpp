#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLeaderboardList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardList_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithLeaderboardList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithLeaderboardList::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithLeaderboardList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLeaderboardList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithLeaderboardList.GetLeaderboardList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LeaderboardList (Oculus::Platform::MessageWithLeaderboardList::*)()>(&Oculus::Platform::MessageWithLeaderboardList::GetLeaderboardList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2581b18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithLeaderboardList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLeaderboardList>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithLeaderboardList.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::LeaderboardList (Oculus::Platform::MessageWithLeaderboardList::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithLeaderboardList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2581b54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithLeaderboardList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLeaderboardList>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithLeaderboardList::MessageWithLeaderboardList(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::LeaderboardList>(THROW_UNLESS(::il2cpp_utils::New<MessageWithLeaderboardList>(c_message))) {}
 void Oculus::Platform::MessageWithLeaderboardList::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLeaderboardList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::LeaderboardList Oculus::Platform::MessageWithLeaderboardList::GetLeaderboardList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLeaderboardList>::get(),
                            "GetLeaderboardList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::LeaderboardList, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::LeaderboardList Oculus::Platform::MessageWithLeaderboardList::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithLeaderboardList>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::LeaderboardList, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
