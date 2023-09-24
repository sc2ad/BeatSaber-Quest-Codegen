#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2582978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult.GetNetSyncSetSessionPropertyResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncSetSessionPropertyResult (Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)()>(&Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetNetSyncSetSessionPropertyResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25829d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::NetSyncSetSessionPropertyResult (Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2582a0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
 Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::New_ctor(::cordl_internals::intptr_t c_message)  {
Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult>(c_message))};
return o;
}
 void Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::NetSyncSetSessionPropertyResult Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetNetSyncSetSessionPropertyResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult>::get(),
                            "GetNetSyncSetSessionPropertyResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::NetSyncSetSessionPropertyResult, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::NetSyncSetSessionPropertyResult Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::NetSyncSetSessionPropertyResult, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
