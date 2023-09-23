#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_impl.hpp"
#include "UnityEngine/AddressableAssets/ResourceProviders/zzzz__ContentCatalogProvider_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__ContentCatalogData_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex  UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex::Remote{0};
constexpr UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex  UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex::Cache{1};
constexpr UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex  UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex::Count{2};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog.add_OnLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)(System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>)>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::add_OnLoaded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x289a2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "add_OnLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog.remove_OnLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)(System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>)>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::remove_OnLoaded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x289aec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "remove_OnLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog.get_OpInProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::get_OpInProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289af74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "get_OpInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog.get_OpIsSuccess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::get_OpIsSuccess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x289af7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "get_OpIsSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)(::StringW, int32_t)>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x289a1b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::Finalize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x289af9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::Unload)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x289b044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog.LoadCatalogFromBundleAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::LoadCatalogFromBundleAsync)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x289a388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "LoadCatalogFromBundleAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog.WebRequestOperationCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)(UnityEngine::AsyncOperation)>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::WebRequestOperationCompleted)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x289b06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "WebRequestOperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog.LoadTextAssetRequestComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)(UnityEngine::AsyncOperation)>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::LoadTextAssetRequestComplete)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x289b268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "LoadTextAssetRequestComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog.WaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)()>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::WaitForCompletion)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2899fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog._LoadCatalogFromBundleAsync_b__19_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)(UnityEngine::Networking::UnityWebRequestAsyncOperation)>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::_LoadCatalogFromBundleAsync_b__19_1)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x289b400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "<LoadCatalogFromBundleAsync>b__19_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityWebRequestAsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog._LoadCatalogFromBundleAsync_b__19_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::*)(UnityEngine::AsyncOperation)>(&GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::_LoadCatalogFromBundleAsync_b__19_0)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x289b498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "<LoadCatalogFromBundleAsync>b__19_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__set_m_BundlePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__get_m_BundlePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__set_m_OpInProgress(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__get_m_OpInProgress() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__set_m_LoadBundleRequest(UnityEngine::AssetBundleCreateRequest value)  {
::cordl_internals::setInstanceField<UnityEngine::AssetBundleCreateRequest, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AssetBundleCreateRequest>(value));
}
constexpr UnityEngine::AssetBundleCreateRequest GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__get_m_LoadBundleRequest() const {
return ::cordl_internals::getInstanceField<UnityEngine::AssetBundleCreateRequest, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__set_m_CatalogAssetBundle(UnityEngine::AssetBundle value)  {
::cordl_internals::setInstanceField<UnityEngine::AssetBundle, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AssetBundle>(value));
}
constexpr UnityEngine::AssetBundle GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__get_m_CatalogAssetBundle() const {
return ::cordl_internals::getInstanceField<UnityEngine::AssetBundle, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__set_m_LoadTextAssetRequest(UnityEngine::AssetBundleRequest value)  {
::cordl_internals::setInstanceField<UnityEngine::AssetBundleRequest, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AssetBundleRequest>(value));
}
constexpr UnityEngine::AssetBundleRequest GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__get_m_LoadTextAssetRequest() const {
return ::cordl_internals::getInstanceField<UnityEngine::AssetBundleRequest, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__set_m_CatalogData(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData value)  {
::cordl_internals::setInstanceField<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>(value));
}
constexpr UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__get_m_CatalogData() const {
return ::cordl_internals::getInstanceField<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__set_m_WebRequestQueueOperation(UnityEngine::ResourceManagement::WebRequestQueueOperation value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::WebRequestQueueOperation, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::WebRequestQueueOperation>(value));
}
constexpr UnityEngine::ResourceManagement::WebRequestQueueOperation GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__get_m_WebRequestQueueOperation() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::WebRequestQueueOperation, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__set_m_RequestOperation(UnityEngine::AsyncOperation value)  {
::cordl_internals::setInstanceField<UnityEngine::AsyncOperation, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AsyncOperation>(value));
}
constexpr UnityEngine::AsyncOperation GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__get_m_RequestOperation() const {
return ::cordl_internals::getInstanceField<UnityEngine::AsyncOperation, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__set_m_WebRequestTimeout(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__get_m_WebRequestTimeout() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__set_OnLoaded(System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>>(value));
}
constexpr System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::__get_OnLoaded() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::add_OnLoaded(System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "add_OnLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::remove_OnLoaded(System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "remove_OnLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::get_OpInProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "get_OpInProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::get_OpIsSuccess()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "get_OpIsSuccess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "bundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "webRequestTimeout", ty: "int32_t", modifiers: "", def_value: Some("0") }]
 GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog(::StringW bundlePath, int32_t webRequestTimeout)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>(bundlePath, webRequestTimeout))) {}
/// @param webRequestTimeout: int32_t (default: 0)
 void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::_ctor(::StringW bundlePath, int32_t webRequestTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bundlePath, webRequestTimeout);
}
 void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::Unload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::LoadCatalogFromBundleAsync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "LoadCatalogFromBundleAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::WebRequestOperationCompleted(UnityEngine::AsyncOperation op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "WebRequestOperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, op);
}
 void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::LoadTextAssetRequestComplete(UnityEngine::AsyncOperation op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "LoadTextAssetRequestComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, op);
}
 bool GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "WaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::_LoadCatalogFromBundleAsync_b__19_1(UnityEngine::Networking::UnityWebRequestAsyncOperation asyncOp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "<LoadCatalogFromBundleAsync>b__19_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Networking::UnityWebRequestAsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncOp);
}
 void GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog::_LoadCatalogFromBundleAsync_b__19_0(UnityEngine::AsyncOperation loadOp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>::get(),
                            "<LoadCatalogFromBundleAsync>b__19_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, loadOp);
}
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, bool, bool)>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::Start)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x28990cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp.WaitForCompletionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)()>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::WaitForCompletionCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2899ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "WaitForCompletionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)()>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::Release)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2898f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp.CanLoadCatalogFromBundle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)(::StringW, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation)>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::CanLoadCatalogFromBundle)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2899990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "CanLoadCatalogFromBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp.LoadCatalog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)(::StringW, bool)>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::LoadCatalog)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x2899a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "LoadCatalog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp.CatalogLoadOpCompleteCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>)>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::CatalogLoadOpCompleteCallback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x289a61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "CatalogLoadOpCompleteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp.GetTransformedInternalId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation)>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::GetTransformedInternalId)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x289a0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "GetTransformedInternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp.DetermineIdToLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>, bool)>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::DetermineIdToLoad)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x2899248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "DetermineIdToLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp.OnCatalogLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData)>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::OnCatalogLoaded)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x289a6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "OnCatalogLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)()>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28990c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp._LoadCatalog_b__14_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::*)(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData)>(&UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::_LoadCatalog_b__14_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x289aebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "<LoadCatalog>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__set_m_LocalDataPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__get_m_LocalDataPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__set_m_RemoteHashValue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__get_m_RemoteHashValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__set_m_LocalHashValue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__get_m_LocalHashValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__set_m_ProviderInterface(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__get_m_ProviderInterface() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__set_m_ContentCatalogData(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData value)  {
::cordl_internals::setInstanceField<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>(value));
}
constexpr UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__get_m_ContentCatalogData() const {
return ::cordl_internals::getInstanceField<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__set_m_ContentCatalogDataLoadOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__get_m_ContentCatalogDataLoadOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__set_m_BundledCatalog(GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog value)  {
::cordl_internals::setInstanceField<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog>(value));
}
constexpr GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__get_m_BundledCatalog() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__set_m_Retried(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__get_m_Retried() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__set_m_DisableCatalogUpdateOnStart(bool value)  {
::cordl_internals::setInstanceField<bool, 0x71>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__get_m_DisableCatalogUpdateOnStart() const {
return ::cordl_internals::getInstanceField<bool, 0x71>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__set_m_IsLocalCatalogInBundle(bool value)  {
::cordl_internals::setInstanceField<bool, 0x72>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::__get_m_IsLocalCatalogInBundle() const {
return ::cordl_internals::getInstanceField<bool, 0x72>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::Start(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface, bool disableCatalogUpdateOnStart, bool isLocalCatalogInBundle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, providerInterface, disableCatalogUpdateOnStart, isLocalCatalogInBundle);
}
 bool UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::WaitForCompletionCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "WaitForCompletionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::Release()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::CanLoadCatalogFromBundle(::StringW idToLoad, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "CanLoadCatalogFromBundle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, idToLoad, location);
}
 void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::LoadCatalog(::StringW idToLoad, bool loadCatalogFromLocalBundle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "LoadCatalog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, idToLoad, loadCatalogFromLocalBundle);
}
 void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::CatalogLoadOpCompleteCallback(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "CatalogLoadOpCompleteCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, op);
}
 ::StringW UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::GetTransformedInternalId(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation loc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "GetTransformedInternalId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, loc);
}
/// @param disableCatalogUpdateOnStart: bool (default: false)
 ::StringW UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::DetermineIdToLoad(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> dependencyObjects, bool disableCatalogUpdateOnStart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "DetermineIdToLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, location, dependencyObjects, disableCatalogUpdateOnStart);
}
 void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::OnCatalogLoaded(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData ccd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "OnCatalogLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ccd);
}
// Ctor Parameters []
 UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>())) {}
 void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp::_LoadCatalog_b__14_0(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData ccd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>::get(),
                            "<LoadCatalog>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ccd);
}
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(UnityEngine::ResourceManagement::ResourceManager)>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2898de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, ::bs_hook::Il2CppWrapperType)>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Release)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2898e7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider.Provide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::*)(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Provide)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2898f68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__set_DisableCatalogUpdateOnStart(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__get_DisableCatalogUpdateOnStart() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__set_IsLocalCatalogInBundle(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__get_IsLocalCatalogInBundle() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__set_m_LocationToCatalogLoadOpMap(System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp> UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__get_m_LocationToCatalogLoadOpMap() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,UnityEngine::AddressableAssets::ResourceProviders::UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__set_m_RM(UnityEngine::ResourceManagement::ResourceManager value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceManager>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceManager UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::__get_m_RM() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "resourceManagerInstance", ty: "UnityEngine::ResourceManagement::ResourceManager", modifiers: "", def_value: None }]
 UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::ContentCatalogProvider(UnityEngine::ResourceManagement::ResourceManager resourceManagerInstance)  : UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase(THROW_UNLESS(::il2cpp_utils::New<ContentCatalogProvider>(resourceManagerInstance))) {}
 void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::_ctor(UnityEngine::ResourceManagement::ResourceManager resourceManagerInstance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resourceManagerInstance);
}
 void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Release(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, location, obj);
}
 void UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider>::get(),
                            "Provide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, providerInterface);
}
