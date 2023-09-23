#pragma once
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ProviderException_impl.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__RemoteProviderException_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__UnityWebRequestResult_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::Exceptions::RemoteProviderException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)(::StringW, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::ResourceManagement::Util::UnityWebRequestResult, System::Exception)>(&UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a38844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Exceptions::RemoteProviderException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Util::UnityWebRequestResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Exceptions::RemoteProviderException.get_Message
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)()>(&UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_Message)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a38870;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::Exceptions::RemoteProviderException),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Exceptions::RemoteProviderException>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Exceptions::RemoteProviderException.get_WebRequestResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Util::UnityWebRequestResult (UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)()>(&UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_WebRequestResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3887c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Exceptions::RemoteProviderException>::get(),
                            "get_WebRequestResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Exceptions::RemoteProviderException.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)()>(&UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::ToString)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2a38884;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::Exceptions::RemoteProviderException),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Exceptions::RemoteProviderException>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__set__WebRequestResult_k__BackingField(UnityEngine::ResourceManagement::Util::UnityWebRequestResult value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::Util::UnityWebRequestResult, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::Util::UnityWebRequestResult>(value));
}
constexpr UnityEngine::ResourceManagement::Util::UnityWebRequestResult UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__get__WebRequestResult_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::Util::UnityWebRequestResult, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "location", ty: "UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "uwrResult", ty: "UnityEngine::ResourceManagement::Util::UnityWebRequestResult", modifiers: "", def_value: Some("csnull") }, CppParam { name: "innerException", ty: "System::Exception", modifiers: "", def_value: Some("csnull") }]
 UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::RemoteProviderException(::StringW message, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::Util::UnityWebRequestResult uwrResult, System::Exception innerException)  : UnityEngine::ResourceManagement::Exceptions::ProviderException(THROW_UNLESS(::il2cpp_utils::New<RemoteProviderException>(message, location, uwrResult, innerException))) {}
/// @param location: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation (default: csnull)
/// @param uwrResult: UnityEngine::ResourceManagement::Util::UnityWebRequestResult (default: csnull)
/// @param innerException: System::Exception (default: csnull)
 void UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::_ctor(::StringW message, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::Util::UnityWebRequestResult uwrResult, System::Exception innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Exceptions::RemoteProviderException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Util::UnityWebRequestResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, location, uwrResult, innerException);
}
 ::StringW UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_Message()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Exceptions::RemoteProviderException>::get(),
                            "get_Message",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::Util::UnityWebRequestResult UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_WebRequestResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Exceptions::RemoteProviderException>::get(),
                            "get_WebRequestResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::Util::UnityWebRequestResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Exceptions::RemoteProviderException>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
