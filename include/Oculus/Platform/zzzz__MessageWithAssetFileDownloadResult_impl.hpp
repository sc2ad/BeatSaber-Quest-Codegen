#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithAssetFileDownloadResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithAssetFileDownloadResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithAssetFileDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithAssetFileDownloadResult.GetAssetFileDownloadResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::AssetFileDownloadResult (Oculus::Platform::MessageWithAssetFileDownloadResult::*)()>(&Oculus::Platform::MessageWithAssetFileDownloadResult::GetAssetFileDownloadResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25803c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithAssetFileDownloadResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadResult>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithAssetFileDownloadResult.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::AssetFileDownloadResult (Oculus::Platform::MessageWithAssetFileDownloadResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithAssetFileDownloadResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2580404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithAssetFileDownloadResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadResult>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithAssetFileDownloadResult::MessageWithAssetFileDownloadResult(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult>(THROW_UNLESS(::il2cpp_utils::New<MessageWithAssetFileDownloadResult>(c_message))) {}
 void Oculus::Platform::MessageWithAssetFileDownloadResult::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::AssetFileDownloadResult Oculus::Platform::MessageWithAssetFileDownloadResult::GetAssetFileDownloadResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadResult>::get(),
                            "GetAssetFileDownloadResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::AssetFileDownloadResult, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::AssetFileDownloadResult Oculus::Platform::MessageWithAssetFileDownloadResult::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadResult>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::AssetFileDownloadResult, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
