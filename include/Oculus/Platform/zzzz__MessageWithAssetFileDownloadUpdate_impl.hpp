#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetFileDownloadUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
//  Writing Method size for method: Oculus::Platform::MessageWithAssetFileDownloadUpdate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MessageWithAssetFileDownloadUpdate::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithAssetFileDownloadUpdate::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithAssetFileDownloadUpdate.GetAssetFileDownloadUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::AssetFileDownloadUpdate (Oculus::Platform::MessageWithAssetFileDownloadUpdate::*)()>(&Oculus::Platform::MessageWithAssetFileDownloadUpdate::GetAssetFileDownloadUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25804a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithAssetFileDownloadUpdate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadUpdate>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::MessageWithAssetFileDownloadUpdate.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Oculus::Platform::Models::AssetFileDownloadUpdate (Oculus::Platform::MessageWithAssetFileDownloadUpdate::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::MessageWithAssetFileDownloadUpdate::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x25804dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Oculus::Platform::MessageWithAssetFileDownloadUpdate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadUpdate>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::MessageWithAssetFileDownloadUpdate::MessageWithAssetFileDownloadUpdate(::cordl_internals::intptr_t c_message)  : Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate>(THROW_UNLESS(::il2cpp_utils::New<MessageWithAssetFileDownloadUpdate>(c_message))) {}
 void Oculus::Platform::MessageWithAssetFileDownloadUpdate::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadUpdate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 Oculus::Platform::Models::AssetFileDownloadUpdate Oculus::Platform::MessageWithAssetFileDownloadUpdate::GetAssetFileDownloadUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadUpdate>::get(),
                            "GetAssetFileDownloadUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::AssetFileDownloadUpdate, false>(const_cast<void*>(instance), ___internal_method);
}
 Oculus::Platform::Models::AssetFileDownloadUpdate Oculus::Platform::MessageWithAssetFileDownloadUpdate::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::MessageWithAssetFileDownloadUpdate>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Oculus::Platform::Models::AssetFileDownloadUpdate, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
