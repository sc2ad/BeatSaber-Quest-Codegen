#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithChallengeEntryList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithChallengeEntryList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithChallengeEntryList::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithChallengeEntryList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithChallengeEntryList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithChallengeEntryList.GetChallengeEntryList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::ChallengeEntryList (Oculus::Platform::MessageWithChallengeEntryList::*)()>(&Oculus::Platform::MessageWithChallengeEntryList::GetChallengeEntryList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2580bb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithChallengeEntryList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithChallengeEntryList>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithChallengeEntryList.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::ChallengeEntryList (Oculus::Platform::MessageWithChallengeEntryList::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithChallengeEntryList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2580bf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithChallengeEntryList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithChallengeEntryList>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithChallengeEntryList::MessageWithChallengeEntryList(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::ChallengeEntryList>(THROW_UNLESS(::il2cpp_utils::New<MessageWithChallengeEntryList>(c_message))) {}
 void Oculus::Platform::MessageWithChallengeEntryList::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithChallengeEntryList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::ChallengeEntryList Oculus::Platform::MessageWithChallengeEntryList::GetChallengeEntryList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithChallengeEntryList>::get(),
                            "GetChallengeEntryList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::ChallengeEntryList, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::ChallengeEntryList Oculus::Platform::MessageWithChallengeEntryList::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithChallengeEntryList>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::ChallengeEntryList, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
