#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__MessageWithCalApplicationSuggestionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationSuggestionList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationSuggestionList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCalApplicationSuggestionList::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithCalApplicationSuggestionList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25808d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationSuggestionList.GetCalApplicationSuggestionList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationSuggestionList (::Oculus::Platform::MessageWithCalApplicationSuggestionList::*)()>(&::Oculus::Platform::MessageWithCalApplicationSuggestionList::GetCalApplicationSuggestionList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2580930;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithCalApplicationSuggestionList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationSuggestionList.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationSuggestionList (::Oculus::Platform::MessageWithCalApplicationSuggestionList::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithCalApplicationSuggestionList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x258096c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithCalApplicationSuggestionList),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::MessageWithCalApplicationSuggestionList::MessageWithCalApplicationSuggestionList(::cordl_internals::intptr_t c_message)  : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CalApplicationSuggestionList>(THROW_UNLESS(::il2cpp_utils::New<MessageWithCalApplicationSuggestionList>(c_message))) {}
 void ::Oculus::Platform::MessageWithCalApplicationSuggestionList::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 ::Oculus::Platform::Models::CalApplicationSuggestionList ::Oculus::Platform::MessageWithCalApplicationSuggestionList::GetCalApplicationSuggestionList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList>::get(),
                            "GetCalApplicationSuggestionList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationSuggestionList, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::CalApplicationSuggestionList ::Oculus::Platform::MessageWithCalApplicationSuggestionList::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationSuggestionList>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationSuggestionList, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
} // end anonymous namespace
