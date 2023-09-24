#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithUserDataStoreUpdateResponse_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserDataStoreUpdateResponse_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithUserDataStoreUpdateResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithUserDataStoreUpdateResponse::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithUserDataStoreUpdateResponse::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257f500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithUserDataStoreUpdateResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithUserDataStoreUpdateResponse.GetUserDataStoreUpdateResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::UserDataStoreUpdateResponse (Oculus::Platform::MessageWithUserDataStoreUpdateResponse::*)()>(&Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetUserDataStoreUpdateResponse)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2584158;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithUserDataStoreUpdateResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithUserDataStoreUpdateResponse>::get(),
                                  85
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithUserDataStoreUpdateResponse.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::UserDataStoreUpdateResponse (Oculus::Platform::MessageWithUserDataStoreUpdateResponse::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2584194;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithUserDataStoreUpdateResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithUserDataStoreUpdateResponse>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
 Oculus::Platform::MessageWithUserDataStoreUpdateResponse Oculus::Platform::MessageWithUserDataStoreUpdateResponse::New_ctor(::cordl_internals::intptr_t c_message)  {
Oculus::Platform::MessageWithUserDataStoreUpdateResponse o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::MessageWithUserDataStoreUpdateResponse>(c_message))};
return o;
}
 void Oculus::Platform::MessageWithUserDataStoreUpdateResponse::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithUserDataStoreUpdateResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::UserDataStoreUpdateResponse Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetUserDataStoreUpdateResponse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithUserDataStoreUpdateResponse>::get(),
                            "GetUserDataStoreUpdateResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::UserDataStoreUpdateResponse, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::UserDataStoreUpdateResponse Oculus::Platform::MessageWithUserDataStoreUpdateResponse::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithUserDataStoreUpdateResponse>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::UserDataStoreUpdateResponse, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
