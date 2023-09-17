#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__MessageWithCloudStorageUpdateResponse_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageUpdateResponse_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageUpdateResponse._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCloudStorageUpdateResponse::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithCloudStorageUpdateResponse::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e530;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageUpdateResponse.GetCloudStorageUpdateResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageUpdateResponse (::Oculus::Platform::MessageWithCloudStorageUpdateResponse::*)()>(&::Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetCloudStorageUpdateResponse)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2580ff0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithCloudStorageUpdateResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCloudStorageUpdateResponse.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CloudStorageUpdateResponse (::Oculus::Platform::MessageWithCloudStorageUpdateResponse::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x258102c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithCloudStorageUpdateResponse),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::MessageWithCloudStorageUpdateResponse::MessageWithCloudStorageUpdateResponse(::cordl_internals::intptr_t c_message)  : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CloudStorageUpdateResponse>(THROW_UNLESS(::il2cpp_utils::New<MessageWithCloudStorageUpdateResponse>(c_message))) {}
 void ::Oculus::Platform::MessageWithCloudStorageUpdateResponse::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 ::Oculus::Platform::Models::CloudStorageUpdateResponse ::Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetCloudStorageUpdateResponse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse>::get(),
                            "GetCloudStorageUpdateResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageUpdateResponse, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::CloudStorageUpdateResponse ::Oculus::Platform::MessageWithCloudStorageUpdateResponse::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCloudStorageUpdateResponse>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CloudStorageUpdateResponse, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
} // end anonymous namespace