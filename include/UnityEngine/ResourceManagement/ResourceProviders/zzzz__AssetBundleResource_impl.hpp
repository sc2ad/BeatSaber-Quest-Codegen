#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleResource_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerAssetBundle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IAssetBundleResource_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__AssetBundleRequestOptions_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType  ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType::None{0};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType  ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType::Local{1};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType  ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType::Web{2};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.get_HasTimedOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_HasTimedOut)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a3c17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "get_HasTimedOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.get_BytesToDownload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_BytesToDownload)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a3c1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "get_BytesToDownload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.CreateWebRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a3c2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "CreateWebRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.CreateWebRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::StringW)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2a3c2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "CreateWebRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetAssetPreloadRequest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AssetBundleRequest (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetPreloadRequest)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2a3c4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "GetAssetPreloadRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.PercentComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::PercentComplete)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2a3c6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetDownloadStatus)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2a3c6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetAssetBundle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AssetBundle (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetBundle)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2a3c5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "GetAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Start)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2a3c828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.WaitForCompletionHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WaitForCompletionHandler)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2a3cff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "WaitForCompletionHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.AddCallbackInvokeIfDone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation>)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AddCallbackInvokeIfDone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a3d824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "AddCallbackInvokeIfDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AsyncOperation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetLoadInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, ByRef<::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType>, ByRef<::StringW>)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a3d884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "GetLoadInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.GetLoadInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, ::UnityEngine::ResourceManagement::ResourceManager, ByRef<::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType>, ByRef<::StringW>)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2a3d8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "GetLoadInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.BeginOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginOperation)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2a3cc7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "BeginOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.BeginWebRequestOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginWebRequestOperation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2a3daa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "BeginWebRequestOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(float_t)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2a3db94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.LocalRequestOperationCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::LocalRequestOperationCompleted)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2a3dcb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "LocalRequestOperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.CompleteBundleLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AssetBundle)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CompleteBundleLoad)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2a3dd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "CompleteBundleLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AssetBundle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.WebRequestOperationCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WebRequestOperationCompleted)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x2a3d234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "WebRequestOperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Unload)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a3de7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3df1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource._GetAssetPreloadRequest_b__25_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_GetAssetPreloadRequest_b__25_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a3df24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "<GetAssetPreloadRequest>b__25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource._BeginOperation_b__34_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation)>(&::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_BeginOperation_b__34_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a3df30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "<BeginOperation>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource
constexpr  ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::operator ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource() const noexcept {
return ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::ResourceManagement::IUpdateReceiver
constexpr  ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::operator ::UnityEngine::ResourceManagement::IUpdateReceiver() const noexcept {
return ::UnityEngine::ResourceManagement::IUpdateReceiver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_AssetBundle(::UnityEngine::AssetBundle value)  {
::cordl_internals::setInstanceField<::UnityEngine::AssetBundle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AssetBundle>(value));
}
constexpr ::UnityEngine::AssetBundle ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_AssetBundle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AssetBundle, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_downloadHandler(::UnityEngine::Networking::DownloadHandlerAssetBundle value)  {
::cordl_internals::setInstanceField<::UnityEngine::Networking::DownloadHandlerAssetBundle, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Networking::DownloadHandlerAssetBundle>(value));
}
constexpr ::UnityEngine::Networking::DownloadHandlerAssetBundle ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_downloadHandler() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Networking::DownloadHandlerAssetBundle, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_RequestOperation(::UnityEngine::AsyncOperation value)  {
::cordl_internals::setInstanceField<::UnityEngine::AsyncOperation, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AsyncOperation>(value));
}
constexpr ::UnityEngine::AsyncOperation ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_RequestOperation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AsyncOperation, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::WebRequestQueueOperation, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ResourceManagement::WebRequestQueueOperation>(value));
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_WebRequestQueueOperation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::WebRequestQueueOperation, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_ProvideHandle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_Options(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions value)  {
::cordl_internals::setInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions>(value));
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_Options() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_WebRequestCompletedCallbackCalled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_WebRequestCompletedCallbackCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_Retries(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_Retries() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_BytesToDownload(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_BytesToDownload() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_DownloadedBytes(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_DownloadedBytes() const {
return ::cordl_internals::getInstanceField<int64_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_Completed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_Completed() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_TransformedInternalId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_TransformedInternalId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_PreloadRequest(::UnityEngine::AssetBundleRequest value)  {
::cordl_internals::setInstanceField<::UnityEngine::AssetBundleRequest, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AssetBundleRequest>(value));
}
constexpr ::UnityEngine::AssetBundleRequest ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_PreloadRequest() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AssetBundleRequest, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_PreloadCompleted(bool value)  {
::cordl_internals::setInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_PreloadCompleted() const {
return ::cordl_internals::getInstanceField<bool, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_LastDownloadedByteCount(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_LastDownloadedByteCount() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_TimeoutTimer(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_TimeoutTimer() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__set_m_TimeoutOverFrames(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::__get_m_TimeoutOverFrames() const {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_HasTimedOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "get_HasTimedOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::get_BytesToDownload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "get_BytesToDownload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Networking::UnityWebRequest ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation loc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "CreateWebRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest, false>(const_cast<void*>(instance), ___internal_method, loc);
}
 ::UnityEngine::Networking::UnityWebRequest ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest(::StringW url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "CreateWebRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest, false>(const_cast<void*>(instance), ___internal_method, url);
}
 ::UnityEngine::AssetBundleRequest ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetPreloadRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "GetAssetPreloadRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundleRequest, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::PercentComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "PercentComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetDownloadStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::AssetBundle ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetBundle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "GetAssetBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AssetBundle, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, provideHandle);
}
 bool ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WaitForCompletionHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "WaitForCompletionHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AddCallbackInvokeIfDone(::UnityEngine::AsyncOperation operation, ::System::Action_1<::UnityEngine::AsyncOperation> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "AddCallbackInvokeIfDone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::AsyncOperation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operation, callback);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle handle, ByRef<::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType> loadType, ByRef<::StringW> path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "GetLoadInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, loadType, path);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetLoadInfo(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::UnityEngine::ResourceManagement::ResourceManager resourceManager, ByRef<::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType> loadType, ByRef<::StringW> path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "GetLoadInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, location, resourceManager, loadType, path);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginOperation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "BeginOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginWebRequestOperation(::UnityEngine::AsyncOperation asyncOp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "BeginWebRequestOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncOp);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Update(float_t unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unscaledDeltaTime);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::LocalRequestOperationCompleted(::UnityEngine::AsyncOperation op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "LocalRequestOperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, op);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CompleteBundleLoad(::UnityEngine::AssetBundle bundle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "CompleteBundleLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AssetBundle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bundle);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WebRequestOperationCompleted(::UnityEngine::AsyncOperation op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "WebRequestOperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, op);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Unload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::AssetBundleResource()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AssetBundleResource>())) {}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_GetAssetPreloadRequest_b__25_0(::UnityEngine::AsyncOperation operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "<GetAssetPreloadRequest>b__25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operation);
}
 void ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::_BeginOperation_b__34_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation asyncOp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource>::get(),
                            "<BeginOperation>b__34_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Networking::UnityWebRequestAsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncOp);
}
} // end anonymous namespace
