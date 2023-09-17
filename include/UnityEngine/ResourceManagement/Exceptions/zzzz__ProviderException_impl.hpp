#pragma once
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__OperationException_impl.hpp"
namespace {
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ProviderException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ProviderException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::ProviderException::*)(::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, ::System::Exception)>(&::UnityEngine::ResourceManagement::Exceptions::ProviderException::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a38814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ProviderException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::ProviderException.get_Location
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation (::UnityEngine::ResourceManagement::Exceptions::ProviderException::*)()>(&::UnityEngine::ResourceManagement::Exceptions::ProviderException::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3883c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ProviderException>::get(),
                            "get_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ResourceManagement::Exceptions::ProviderException::__set__Location_k__BackingField(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation ::UnityEngine::ResourceManagement::Exceptions::ProviderException::__get__Location_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "location", ty: "::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation", modifiers: "", def_value: Some("csnull") }, CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: Some("csnull") }]
 ::UnityEngine::ResourceManagement::Exceptions::ProviderException::ProviderException(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::System::Exception innerException)  : ::UnityEngine::ResourceManagement::Exceptions::OperationException(THROW_UNLESS(::il2cpp_utils::New<ProviderException>(message, location, innerException))) {}
/// @param location: ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation (default: csnull)
/// @param innerException: ::System::Exception (default: csnull)
 void ::UnityEngine::ResourceManagement::Exceptions::ProviderException::_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::System::Exception innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ProviderException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, location, innerException);
}
 ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation ::UnityEngine::ResourceManagement::Exceptions::ProviderException::get_Location()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Exceptions::ProviderException>::get(),
                            "get_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
