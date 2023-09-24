#pragma once
#include "UnityEngine/AddressableAssets/zzzz__PlatformMappingService_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesPlatform_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: UnityEngine::AddressableAssets::PlatformMappingService.GetAddressablesPlatformInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AddressableAssets::AddressablesPlatform (*)(UnityEngine::RuntimePlatform)>(&UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformInternal)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28969d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get(),
                            "GetAddressablesPlatformInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RuntimePlatform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::PlatformMappingService.GetAddressablesPlatformPathInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::RuntimePlatform)>(&UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformPathInternal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2896aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get(),
                            "GetAddressablesPlatformPathInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RuntimePlatform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::PlatformMappingService.GetPlatform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AddressableAssets::AddressablesPlatform (*)()>(&UnityEngine::AddressableAssets::PlatformMappingService::GetPlatform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2896bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get(),
                            "GetPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::PlatformMappingService.GetPlatformPathSubFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::AddressableAssets::PlatformMappingService::GetPlatformPathSubFolder)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x288a884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get(),
                            "GetPlatformPathSubFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::PlatformMappingService._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::PlatformMappingService::*)()>(&UnityEngine::AddressableAssets::PlatformMappingService::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2896c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::AddressableAssets::PlatformMappingService::__set_s_RuntimeTargetMapping(System::Collections::Generic::Dictionary_2<UnityEngine::RuntimePlatform,UnityEngine::AddressableAssets::AddressablesPlatform> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::RuntimePlatform,UnityEngine::AddressableAssets::AddressablesPlatform>, "s_RuntimeTargetMapping", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get>(std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::RuntimePlatform,UnityEngine::AddressableAssets::AddressablesPlatform>>(value));
}
 System::Collections::Generic::Dictionary_2<UnityEngine::RuntimePlatform,UnityEngine::AddressableAssets::AddressablesPlatform> UnityEngine::AddressableAssets::PlatformMappingService::__get_s_RuntimeTargetMapping()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<UnityEngine::RuntimePlatform,UnityEngine::AddressableAssets::AddressablesPlatform>, "s_RuntimeTargetMapping", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get>();
}
 UnityEngine::AddressableAssets::AddressablesPlatform UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformInternal(UnityEngine::RuntimePlatform platform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get(),
                            "GetAddressablesPlatformInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RuntimePlatform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AddressableAssets::AddressablesPlatform, false>(nullptr, ___internal_method, platform);
}
 ::StringW UnityEngine::AddressableAssets::PlatformMappingService::GetAddressablesPlatformPathInternal(UnityEngine::RuntimePlatform platform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get(),
                            "GetAddressablesPlatformPathInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RuntimePlatform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, platform);
}
 UnityEngine::AddressableAssets::AddressablesPlatform UnityEngine::AddressableAssets::PlatformMappingService::GetPlatform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get(),
                            "GetPlatform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AddressableAssets::AddressablesPlatform, false>(nullptr, ___internal_method);
}
 ::StringW UnityEngine::AddressableAssets::PlatformMappingService::GetPlatformPathSubFolder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get(),
                            "GetPlatformPathSubFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 UnityEngine::AddressableAssets::PlatformMappingService UnityEngine::AddressableAssets::PlatformMappingService::New_ctor()  {
UnityEngine::AddressableAssets::PlatformMappingService o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::AddressableAssets::PlatformMappingService>())};
return o;
}
 void UnityEngine::AddressableAssets::PlatformMappingService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::PlatformMappingService>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
