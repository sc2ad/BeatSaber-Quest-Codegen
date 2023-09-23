#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IInstanceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AddressablesImpl_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__InstantiationParameters_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode::UnityEngine__AddressableAssets__Addressables__MergeMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode  UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode::None{0};
constexpr UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode  UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode::UseFirst{0};
constexpr UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode  UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode::Union{1};
constexpr UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode  UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode::Intersection{2};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_m_Addressables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AddressableAssets::AddressablesImpl (*)()>(&UnityEngine::AddressableAssets::Addressables::get_m_Addressables)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2881690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_m_Addressables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_ResourceManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::ResourceManager (*)()>(&UnityEngine::AddressableAssets::Addressables::get_ResourceManager)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x28816e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_ResourceManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AddressableAssets::AddressablesImpl (*)()>(&UnityEngine::AddressableAssets::Addressables::get_Instance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2881778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_InstanceProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider (*)()>(&UnityEngine::AddressableAssets::Addressables::get_InstanceProvider)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2881800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_InstanceProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ResolveInternalId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::AddressableAssets::Addressables::ResolveInternalId)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2881894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ResolveInternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_InternalIdTransformFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> (*)()>(&UnityEngine::AddressableAssets::Addressables::get_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x288192c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_InternalIdTransformFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.set_InternalIdTransformFunc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW>)>(&UnityEngine::AddressableAssets::Addressables::set_InternalIdTransformFunc)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x28819e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "set_InternalIdTransformFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_WebRequestOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Action_1<UnityEngine::Networking::UnityWebRequest> (*)()>(&UnityEngine::AddressableAssets::Addressables::get_WebRequestOverride)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2881aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_WebRequestOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.set_WebRequestOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Action_1<UnityEngine::Networking::UnityWebRequest>)>(&UnityEngine::AddressableAssets::Addressables::set_WebRequestOverride)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2881b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "set_WebRequestOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Networking::UnityWebRequest>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_StreamingAssetsSubFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::AddressableAssets::Addressables::get_StreamingAssetsSubFolder)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2881c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_StreamingAssetsSubFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_BuildPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::AddressableAssets::Addressables::get_BuildPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2881d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_BuildPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_PlayerBuildDataPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::AddressableAssets::Addressables::get_PlayerBuildDataPath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2881e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_PlayerBuildDataPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_RuntimePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::AddressableAssets::Addressables::get_RuntimePath)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2881f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_RuntimePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_ResourceLocators
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> (*)()>(&UnityEngine::AddressableAssets::Addressables::get_ResourceLocators)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2882030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_ResourceLocators",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.InternalSafeSerializationLog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, UnityEngine::LogType)>(&UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLog)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x28820c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InternalSafeSerializationLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.InternalSafeSerializationLogFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, UnityEngine::LogType, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLogFormat)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x28822dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InternalSafeSerializationLogFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::AddressableAssets::Addressables::Log)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2882538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LogFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::AddressableAssets::Addressables::LogFormat)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x28825d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::AddressableAssets::Addressables::LogWarning)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x287dae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LogWarningFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::AddressableAssets::Addressables::LogWarningFormat)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2882678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogWarningFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::AddressableAssets::Addressables::LogError)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x287db7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LogException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, System::Exception)>(&UnityEngine::AddressableAssets::Addressables::LogException)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2882720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LogException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception)>(&UnityEngine::AddressableAssets::Addressables::LogException)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2882890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LogErrorFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::AddressableAssets::Addressables::LogErrorFormat)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x287e4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogErrorFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> (*)()>(&UnityEngine::AddressableAssets::Addressables::Initialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2882924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.InitializeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> (*)()>(&UnityEngine::AddressableAssets::Addressables::InitializeAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x288298c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InitializeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.InitializeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> (*)(bool)>(&UnityEngine::AddressableAssets::Addressables::InitializeAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2882ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InitializeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadContentCatalog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> (*)(::StringW, ::StringW)>(&UnityEngine::AddressableAssets::Addressables::LoadContentCatalog)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2882c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadContentCatalog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadContentCatalogAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> (*)(::StringW, ::StringW)>(&UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2882c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadContentCatalogAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadContentCatalogAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> (*)(::StringW, bool, ::StringW)>(&UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2882f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadContentCatalogAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.get_InitializationOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> (*)()>(&UnityEngine::AddressableAssets::Addressables::get_InitializationOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2883024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_InitializationOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadResourceLocations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> (*)(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode, System::Type)>(&UnityEngine::AddressableAssets::Addressables::LoadResourceLocations)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2883030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadResourceLocations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadResourceLocationsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> (*)(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode, System::Type)>(&UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28830c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadResourceLocationsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadResourceLocationsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> (*)(System::Collections::IEnumerable, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode, System::Type)>(&UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28832e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadResourceLocationsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadResourceLocations
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> (*)(::bs_hook::Il2CppWrapperType, System::Type)>(&UnityEngine::AddressableAssets::Addressables::LoadResourceLocations)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28833bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadResourceLocations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadResourceLocationsAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> (*)(::bs_hook::Il2CppWrapperType, System::Type)>(&UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x288343c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadResourceLocationsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::Addressables::Release)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2883648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ReleaseInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::GameObject)>(&UnityEngine::AddressableAssets::Addressables::ReleaseInstance)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2883758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ReleaseInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ReleaseInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::Addressables::ReleaseInstance)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x28838ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ReleaseInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ReleaseInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>)>(&UnityEngine::AddressableAssets::Addressables::ReleaseInstance)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x28839b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ReleaseInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.GetDownloadSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::AddressableAssets::Addressables::GetDownloadSize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2883a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "GetDownloadSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2883afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "GetDownloadSizeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(::StringW)>(&UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2883c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "GetDownloadSizeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2883d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "GetDownloadSizeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.GetDownloadSizeAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> (*)(System::Collections::IEnumerable)>(&UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2884c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "GetDownloadSizeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.DownloadDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::AddressableAssets::Addressables::DownloadDependencies)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2884cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "DownloadDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(::bs_hook::Il2CppWrapperType, bool)>(&UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2884d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "DownloadDependenciesAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>, bool)>(&UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x28850a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "DownloadDependenciesAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode, bool)>(&UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28852b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "DownloadDependenciesAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.DownloadDependenciesAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (*)(System::Collections::IEnumerable, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode, bool)>(&UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2885614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "DownloadDependenciesAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x28856ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>)>(&UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x28859e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2885fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Collections::IEnumerable)>(&UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x288656c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2886618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(::bs_hook::Il2CppWrapperType, bool)>(&UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28866c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>, bool)>(&UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2886788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>, bool)>(&UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x288684c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(System::Collections::IEnumerable, bool)>(&UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2886910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearDependencyCacheAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(::StringW, bool)>(&UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x28869d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.Instantiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::Transform, bool, bool)>(&UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2886a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.Instantiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Transform, bool)>(&UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2886c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.Instantiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(::bs_hook::Il2CppWrapperType, UnityEngine::Transform, bool, bool)>(&UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2886e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.Instantiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(::bs_hook::Il2CppWrapperType, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Transform, bool)>(&UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2886fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.Instantiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(::bs_hook::Il2CppWrapperType, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(&UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28871ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.Instantiate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(&UnityEngine::AddressableAssets::Addressables::Instantiate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2887390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::Transform, bool, bool)>(&UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2887440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Transform, bool)>(&UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2886d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(::bs_hook::Il2CppWrapperType, UnityEngine::Transform, bool, bool)>(&UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2886efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(::bs_hook::Il2CppWrapperType, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Transform, bool)>(&UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x28870c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(::bs_hook::Il2CppWrapperType, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(&UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x288729c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.InstantiateAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> (*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters, bool)>(&UnityEngine::AddressableAssets::Addressables::InstantiateAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2886b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(::bs_hook::Il2CppWrapperType, UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&UnityEngine::AddressableAssets::Addressables::LoadScene)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2887c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&UnityEngine::AddressableAssets::Addressables::LoadScene)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2887db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(::bs_hook::Il2CppWrapperType, UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2887cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.LoadSceneAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&UnityEngine::AddressableAssets::Addressables::LoadSceneAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2887e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UnloadScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, bool)>(&UnityEngine::AddressableAssets::Addressables::UnloadScene)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x288823c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UnloadScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, bool)>(&UnityEngine::AddressableAssets::Addressables::UnloadScene)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x28883a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UnloadScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, bool)>(&UnityEngine::AddressableAssets::Addressables::UnloadScene)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x288852c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(&UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2888694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::UnloadSceneOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(&UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2888990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::UnloadSceneOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UnloadScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, UnityEngine::SceneManagement::UnloadSceneOptions, bool)>(&UnityEngine::AddressableAssets::Addressables::UnloadScene)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2888bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::UnloadSceneOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, bool)>(&UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28882cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, bool)>(&UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2888444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UnloadSceneAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, bool)>(&UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28885bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.CheckForCatalogUpdates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<::StringW>> (*)(bool)>(&UnityEngine::AddressableAssets::Addressables::CheckForCatalogUpdates)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2888d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "CheckForCatalogUpdates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UpdateCatalogs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>> (*)(System::Collections::Generic::IEnumerable_1<::StringW>, bool)>(&UnityEngine::AddressableAssets::Addressables::UpdateCatalogs)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2888f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UpdateCatalogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.UpdateCatalogs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>> (*)(bool, System::Collections::Generic::IEnumerable_1<::StringW>, bool)>(&UnityEngine::AddressableAssets::Addressables::UpdateCatalogs)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x288926c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UpdateCatalogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.AddResourceLocator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator, ::StringW, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation)>(&UnityEngine::AddressableAssets::Addressables::AddResourceLocator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2889340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "AddResourceLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.RemoveResourceLocator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator)>(&UnityEngine::AddressableAssets::Addressables::RemoveResourceLocator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28894f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "RemoveResourceLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.ClearResourceLocators
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AddressableAssets::Addressables::ClearResourceLocators)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2889664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearResourceLocators",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::Addressables.CleanBundleCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (*)(System::Collections::Generic::IEnumerable_1<::StringW>)>(&UnityEngine::AddressableAssets::Addressables::CleanBundleCache)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2889764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "CleanBundleCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::AddressableAssets::Addressables::__set_reinitializeAddressables(bool value)  {
::cordl_internals::setStaticField<bool, "reinitializeAddressables", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get>(std::forward<bool>(value));
}
 bool UnityEngine::AddressableAssets::Addressables::__get_reinitializeAddressables()  {
return ::cordl_internals::getStaticField<bool, "reinitializeAddressables", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get>();
}
 void UnityEngine::AddressableAssets::Addressables::__set_m_AddressablesInstance(UnityEngine::AddressableAssets::AddressablesImpl value)  {
::cordl_internals::setStaticField<UnityEngine::AddressableAssets::AddressablesImpl, "m_AddressablesInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get>(std::forward<UnityEngine::AddressableAssets::AddressablesImpl>(value));
}
 UnityEngine::AddressableAssets::AddressablesImpl UnityEngine::AddressableAssets::Addressables::__get_m_AddressablesInstance()  {
return ::cordl_internals::getStaticField<UnityEngine::AddressableAssets::AddressablesImpl, "m_AddressablesInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get>();
}
 void UnityEngine::AddressableAssets::Addressables::__set_LibraryPath(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "LibraryPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::AddressableAssets::Addressables::__get_LibraryPath()  {
return ::cordl_internals::getStaticField<::StringW, "LibraryPath", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get>();
}
 UnityEngine::AddressableAssets::AddressablesImpl UnityEngine::AddressableAssets::Addressables::get_m_Addressables()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_m_Addressables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AddressableAssets::AddressablesImpl, false>(nullptr, ___internal_method);
}
 UnityEngine::ResourceManagement::ResourceManager UnityEngine::AddressableAssets::Addressables::get_ResourceManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_ResourceManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::ResourceManager, false>(nullptr, ___internal_method);
}
 UnityEngine::AddressableAssets::AddressablesImpl UnityEngine::AddressableAssets::Addressables::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AddressableAssets::AddressablesImpl, false>(nullptr, ___internal_method);
}
 UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider UnityEngine::AddressableAssets::Addressables::get_InstanceProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_InstanceProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider, false>(nullptr, ___internal_method);
}
 ::StringW UnityEngine::AddressableAssets::Addressables::ResolveInternalId(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ResolveInternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, id);
}
 System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> UnityEngine::AddressableAssets::Addressables::get_InternalIdTransformFunc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_InternalIdTransformFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW>, false>(nullptr, ___internal_method);
}
 void UnityEngine::AddressableAssets::Addressables::set_InternalIdTransformFunc(System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "set_InternalIdTransformFunc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 System::Action_1<UnityEngine::Networking::UnityWebRequest> UnityEngine::AddressableAssets::Addressables::get_WebRequestOverride()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_WebRequestOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Action_1<UnityEngine::Networking::UnityWebRequest>, false>(nullptr, ___internal_method);
}
 void UnityEngine::AddressableAssets::Addressables::set_WebRequestOverride(System::Action_1<UnityEngine::Networking::UnityWebRequest> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "set_WebRequestOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Networking::UnityWebRequest>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
 ::StringW UnityEngine::AddressableAssets::Addressables::get_StreamingAssetsSubFolder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_StreamingAssetsSubFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW UnityEngine::AddressableAssets::Addressables::get_BuildPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_BuildPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW UnityEngine::AddressableAssets::Addressables::get_PlayerBuildDataPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_PlayerBuildDataPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW UnityEngine::AddressableAssets::Addressables::get_RuntimePath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_RuntimePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> UnityEngine::AddressableAssets::Addressables::get_ResourceLocators()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_ResourceLocators",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>, false>(nullptr, ___internal_method);
}
/// @param logType: UnityEngine::LogType (default: 3)
 void UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLog(::StringW msg, UnityEngine::LogType logType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InternalSafeSerializationLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg, logType);
}
/// @param logType: UnityEngine::LogType (default: 3)
 void UnityEngine::AddressableAssets::Addressables::InternalSafeSerializationLogFormat(::StringW format, UnityEngine::LogType logType, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InternalSafeSerializationLogFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, format, logType, args);
}
 void UnityEngine::AddressableAssets::Addressables::Log(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
 void UnityEngine::AddressableAssets::Addressables::LogFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, format, args);
}
 void UnityEngine::AddressableAssets::Addressables::LogWarning(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
 void UnityEngine::AddressableAssets::Addressables::LogWarningFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogWarningFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, format, args);
}
 void UnityEngine::AddressableAssets::Addressables::LogError(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, msg);
}
 void UnityEngine::AddressableAssets::Addressables::LogException(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op, System::Exception ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, op, ex);
}
 void UnityEngine::AddressableAssets::Addressables::LogException(System::Exception ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ex);
}
 void UnityEngine::AddressableAssets::Addressables::LogErrorFormat(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LogErrorFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, format, args);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> UnityEngine::AddressableAssets::Addressables::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>, false>(nullptr, ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> UnityEngine::AddressableAssets::Addressables::InitializeAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InitializeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>, false>(nullptr, ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> UnityEngine::AddressableAssets::Addressables::InitializeAsync(bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InitializeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>, false>(nullptr, ___internal_method, autoReleaseHandle);
}
/// @param providerSuffix: ::StringW (default: csnull)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> UnityEngine::AddressableAssets::Addressables::LoadContentCatalog(::StringW catalogPath, ::StringW providerSuffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadContentCatalog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>, false>(nullptr, ___internal_method, catalogPath, providerSuffix);
}
/// @param providerSuffix: ::StringW (default: csnull)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync(::StringW catalogPath, ::StringW providerSuffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadContentCatalogAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>, false>(nullptr, ___internal_method, catalogPath, providerSuffix);
}
/// @param providerSuffix: ::StringW (default: csnull)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> UnityEngine::AddressableAssets::Addressables::LoadContentCatalogAsync(::StringW catalogPath, bool autoReleaseHandle, ::StringW providerSuffix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadContentCatalogAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>, false>(nullptr, ___internal_method, catalogPath, autoReleaseHandle, providerSuffix);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator> UnityEngine::AddressableAssets::Addressables::get_InitializationOperation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "get_InitializationOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>, false>(nullptr, ___internal_method);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::AddressableAssets::Addressables::LoadAsset(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAsset",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(nullptr, ___internal_method, location);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::AddressableAssets::Addressables::LoadAsset(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAsset",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(nullptr, ___internal_method, key);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::AddressableAssets::Addressables::LoadAssetAsync(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssetAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(nullptr, ___internal_method, location);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::AddressableAssets::Addressables::LoadAssetAsync(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssetAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(nullptr, ___internal_method, key);
}
/// @param type: System::Type (default: csnull)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> UnityEngine::AddressableAssets::Addressables::LoadResourceLocations(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadResourceLocations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>, false>(nullptr, ___internal_method, keys, mode, type);
}
/// @param type: System::Type (default: csnull)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadResourceLocationsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>, false>(nullptr, ___internal_method, keys, mode, type);
}
/// @param type: System::Type (default: csnull)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync(System::Collections::IEnumerable keys, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadResourceLocationsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>, false>(nullptr, ___internal_method, keys, mode, type);
}
/// @param type: System::Type (default: csnull)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> UnityEngine::AddressableAssets::Addressables::LoadResourceLocations(::bs_hook::Il2CppWrapperType key, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadResourceLocations",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>, false>(nullptr, ___internal_method, key, type);
}
/// @param type: System::Type (default: csnull)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>> UnityEngine::AddressableAssets::Addressables::LoadResourceLocationsAsync(::bs_hook::Il2CppWrapperType key, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadResourceLocationsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>, false>(nullptr, ___internal_method, key, type);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssets(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, System::Action_1<TObject> callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssets",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, locations, callback);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, System::Action_1<TObject> callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssetsAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, locations, callback);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, System::Action_1<TObject> callback, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssetsAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, locations, callback, releaseDependenciesOnFailure);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssets(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, System::Action_1<TObject> callback, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssets",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, keys, callback, mode);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, System::Action_1<TObject> callback, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssetsAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, keys, callback, mode);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(System::Collections::IEnumerable keys, System::Action_1<TObject> callback, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssetsAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, keys, callback, mode);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, System::Action_1<TObject> callback, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssetsAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, keys, callback, mode, releaseDependenciesOnFailure);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(System::Collections::IEnumerable keys, System::Action_1<TObject> callback, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssetsAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, keys, callback, mode, releaseDependenciesOnFailure);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssets(::bs_hook::Il2CppWrapperType key, System::Action_1<TObject> callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssets",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, key, callback);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::bs_hook::Il2CppWrapperType key, System::Action_1<TObject> callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssetsAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, key, callback);
}
template<typename TObject>
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>> UnityEngine::AddressableAssets::Addressables::LoadAssetsAsync(::bs_hook::Il2CppWrapperType key, System::Action_1<TObject> callback, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "LoadAssetsAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TObject>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<TObject>>, false>(nullptr, ___internal_method, key, callback, releaseDependenciesOnFailure);
}
template<typename TObject>
 void UnityEngine::AddressableAssets::Addressables::Release(TObject obj)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "Release",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TObject>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
template<typename TObject>
 void UnityEngine::AddressableAssets::Addressables::Release(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> handle)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                        "Release",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle);
}
 void UnityEngine::AddressableAssets::Addressables::Release(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle);
}
 bool UnityEngine::AddressableAssets::Addressables::ReleaseInstance(UnityEngine::GameObject instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ReleaseInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, instance);
}
 bool UnityEngine::AddressableAssets::Addressables::ReleaseInstance(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ReleaseInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
 bool UnityEngine::AddressableAssets::Addressables::ReleaseInstance(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ReleaseInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::Addressables::GetDownloadSize(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "GetDownloadSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(nullptr, ___internal_method, key);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "GetDownloadSizeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(nullptr, ___internal_method, key);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(::StringW key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "GetDownloadSizeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(nullptr, ___internal_method, key);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "GetDownloadSizeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(nullptr, ___internal_method, keys);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> UnityEngine::AddressableAssets::Addressables::GetDownloadSizeAsync(System::Collections::IEnumerable keys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "GetDownloadSizeAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>, false>(nullptr, ___internal_method, keys);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::Addressables::DownloadDependencies(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "DownloadDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, key);
}
/// @param autoReleaseHandle: bool (default: false)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(::bs_hook::Il2CppWrapperType key, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "DownloadDependenciesAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, key, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: false)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "DownloadDependenciesAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, locations, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: false)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "DownloadDependenciesAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, keys, mode, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: false)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::AddressableAssets::Addressables::DownloadDependenciesAsync(System::Collections::IEnumerable keys, UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode mode, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "DownloadDependenciesAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::UnityEngine__AddressableAssets__Addressables__MergeMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, false>(nullptr, ___internal_method, keys, mode, autoReleaseHandle);
}
 void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::bs_hook::Il2CppWrapperType key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key);
}
 void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, locations);
}
 void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys);
}
 void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(System::Collections::IEnumerable keys)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, keys);
}
 void UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::StringW key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::bs_hook::Il2CppWrapperType key, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, key, autoReleaseHandle);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation> locations, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, locations, autoReleaseHandle);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> keys, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, keys, autoReleaseHandle);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(System::Collections::IEnumerable keys, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::IEnumerable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, keys, autoReleaseHandle);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::Addressables::ClearDependencyCacheAsync(::StringW key, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearDependencyCacheAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, key, autoReleaseHandle);
}
/// @param parent: UnityEngine::Transform (default: csnull)
/// @param instantiateInWorldSpace: bool (default: false)
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::Instantiate(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::Transform parent, bool instantiateInWorldSpace, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, location, parent, instantiateInWorldSpace, trackHandle);
}
/// @param parent: UnityEngine::Transform (default: csnull)
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::Instantiate(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, location, position, rotation, parent, trackHandle);
}
/// @param parent: UnityEngine::Transform (default: csnull)
/// @param instantiateInWorldSpace: bool (default: false)
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::Instantiate(::bs_hook::Il2CppWrapperType key, UnityEngine::Transform parent, bool instantiateInWorldSpace, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, key, parent, instantiateInWorldSpace, trackHandle);
}
/// @param parent: UnityEngine::Transform (default: csnull)
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::Instantiate(::bs_hook::Il2CppWrapperType key, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, key, position, rotation, parent, trackHandle);
}
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::Instantiate(::bs_hook::Il2CppWrapperType key, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, key, instantiateParameters, trackHandle);
}
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::Instantiate(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "Instantiate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, location, instantiateParameters, trackHandle);
}
/// @param parent: UnityEngine::Transform (default: csnull)
/// @param instantiateInWorldSpace: bool (default: false)
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::InstantiateAsync(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::Transform parent, bool instantiateInWorldSpace, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, location, parent, instantiateInWorldSpace, trackHandle);
}
/// @param parent: UnityEngine::Transform (default: csnull)
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::InstantiateAsync(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, location, position, rotation, parent, trackHandle);
}
/// @param parent: UnityEngine::Transform (default: csnull)
/// @param instantiateInWorldSpace: bool (default: false)
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::bs_hook::Il2CppWrapperType key, UnityEngine::Transform parent, bool instantiateInWorldSpace, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, key, parent, instantiateInWorldSpace, trackHandle);
}
/// @param parent: UnityEngine::Transform (default: csnull)
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::bs_hook::Il2CppWrapperType key, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform parent, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, key, position, rotation, parent, trackHandle);
}
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::InstantiateAsync(::bs_hook::Il2CppWrapperType key, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, key, instantiateParameters, trackHandle);
}
/// @param trackHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> UnityEngine::AddressableAssets::Addressables::InstantiateAsync(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters, bool trackHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "InstantiateAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject>, false>(nullptr, ___internal_method, location, instantiateParameters, trackHandle);
}
/// @param loadMode: UnityEngine::SceneManagement::LoadSceneMode (default: 0)
/// @param activateOnLoad: bool (default: true)
/// @param priority: int32_t (default: 100)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::LoadScene(::bs_hook::Il2CppWrapperType key, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, key, loadMode, activateOnLoad, priority);
}
/// @param loadMode: UnityEngine::SceneManagement::LoadSceneMode (default: 0)
/// @param activateOnLoad: bool (default: true)
/// @param priority: int32_t (default: 100)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::LoadScene(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, location, loadMode, activateOnLoad, priority);
}
/// @param loadMode: UnityEngine::SceneManagement::LoadSceneMode (default: 0)
/// @param activateOnLoad: bool (default: true)
/// @param priority: int32_t (default: 100)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(::bs_hook::Il2CppWrapperType key, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, key, loadMode, activateOnLoad, priority);
}
/// @param loadMode: UnityEngine::SceneManagement::LoadSceneMode (default: 0)
/// @param activateOnLoad: bool (default: true)
/// @param priority: int32_t (default: 100)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::LoadSceneAsync(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "LoadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, location, loadMode, activateOnLoad, priority);
}
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::UnloadScene(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, scene, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::UnloadScene(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, handle, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::UnloadScene(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, handle, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::UnloadSceneOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, scene, unloadOptions, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::UnloadSceneOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, handle, unloadOptions, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::UnloadScene(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::UnloadSceneOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, handle, unloadOptions, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance scene, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, scene, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle handle, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, handle, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::AddressableAssets::Addressables::UnloadSceneAsync(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> handle, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UnloadSceneAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, handle, autoReleaseHandle);
}
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<::StringW>> UnityEngine::AddressableAssets::Addressables::CheckForCatalogUpdates(bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "CheckForCatalogUpdates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<::StringW>>, false>(nullptr, ___internal_method, autoReleaseHandle);
}
/// @param catalogs: System::Collections::Generic::IEnumerable_1<::StringW> (default: csnull)
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>> UnityEngine::AddressableAssets::Addressables::UpdateCatalogs(System::Collections::Generic::IEnumerable_1<::StringW> catalogs, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UpdateCatalogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>>, false>(nullptr, ___internal_method, catalogs, autoReleaseHandle);
}
/// @param catalogs: System::Collections::Generic::IEnumerable_1<::StringW> (default: csnull)
/// @param autoReleaseHandle: bool (default: true)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>> UnityEngine::AddressableAssets::Addressables::UpdateCatalogs(bool autoCleanBundleCache, System::Collections::Generic::IEnumerable_1<::StringW> catalogs, bool autoReleaseHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "UpdateCatalogs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::List_1<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>>, false>(nullptr, ___internal_method, autoCleanBundleCache, catalogs, autoReleaseHandle);
}
/// @param localCatalogHash: ::StringW (default: csnull)
/// @param remoteCatalogLocation: UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation (default: csnull)
 void UnityEngine::AddressableAssets::Addressables::AddResourceLocator(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator locator, ::StringW localCatalogHash, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation remoteCatalogLocation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "AddResourceLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, locator, localCatalogHash, remoteCatalogLocation);
}
 void UnityEngine::AddressableAssets::Addressables::RemoveResourceLocator(UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator locator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "RemoveResourceLocator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, locator);
}
 void UnityEngine::AddressableAssets::Addressables::ClearResourceLocators()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "ClearResourceLocators",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
/// @param catalogsIds: System::Collections::Generic::IEnumerable_1<::StringW> (default: csnull)
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::AddressableAssets::Addressables::CleanBundleCache(System::Collections::Generic::IEnumerable_1<::StringW> catalogsIds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::Addressables>::get(),
                            "CleanBundleCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, false>(nullptr, ___internal_method, catalogsIds);
}
