#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithApplicationInviteList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithApplicationInviteList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithApplicationInviteList::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithApplicationInviteList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257dea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithApplicationInviteList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithApplicationInviteList.GetApplicationInviteList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::ApplicationInviteList (Oculus::Platform::MessageWithApplicationInviteList::*)()>(&Oculus::Platform::MessageWithApplicationInviteList::GetApplicationInviteList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x257feb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithApplicationInviteList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithApplicationInviteList>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithApplicationInviteList.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::ApplicationInviteList (Oculus::Platform::MessageWithApplicationInviteList::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithApplicationInviteList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x257fef4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithApplicationInviteList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithApplicationInviteList>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithApplicationInviteList::MessageWithApplicationInviteList(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::ApplicationInviteList>(THROW_UNLESS(::il2cpp_utils::New<MessageWithApplicationInviteList>(c_message))) {}
 void Oculus::Platform::MessageWithApplicationInviteList::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithApplicationInviteList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::ApplicationInviteList Oculus::Platform::MessageWithApplicationInviteList::GetApplicationInviteList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithApplicationInviteList>::get(),
                            "GetApplicationInviteList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::ApplicationInviteList, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::ApplicationInviteList Oculus::Platform::MessageWithApplicationInviteList::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithApplicationInviteList>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::ApplicationInviteList, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
