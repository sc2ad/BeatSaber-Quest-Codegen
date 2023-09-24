#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__ProviderOperation_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__ICachable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__IGenericProviderOperation_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
/// @brief Convert operator to UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation
constexpr  UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::operator UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation() const noexcept {
return UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::ResourceManagement::AsyncOperations::ICachable
constexpr  UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::operator UnityEngine::ResourceManagement::AsyncOperations::ICachable() const noexcept {
return UnityEngine::ResourceManagement::AsyncOperations::ICachable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_ReleaseDependenciesOnFailure(bool value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_ReleaseDependenciesOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_CompletionCallback(System::Action_4<int32_t,::bs_hook::Il2CppWrapperType,bool,System::Exception> value)  {
::cordl_internals::setInstanceField<System::Action_4<int32_t,::bs_hook::Il2CppWrapperType,bool,System::Exception>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_4<int32_t,::bs_hook::Il2CppWrapperType,bool,System::Exception>>(value));
}
constexpr System::Action_4<int32_t,::bs_hook::Il2CppWrapperType,bool,System::Exception> UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_CompletionCallback() const {
return ::cordl_internals::getInstanceField<System::Action_4<int32_t,::bs_hook::Il2CppWrapperType,bool,System::Exception>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_GetDepCallback(System::Action_2<int32_t,System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Action_2<int32_t,System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<int32_t,System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Action_2<int32_t,System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>> UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_GetDepCallback() const {
return ::cordl_internals::getInstanceField<System::Action_2<int32_t,System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_GetProgressCallback(System::Func_1<float_t> value)  {
::cordl_internals::setInstanceField<System::Func_1<float_t>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<float_t>>(value));
}
constexpr System::Func_1<float_t> UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_GetProgressCallback() const {
return ::cordl_internals::getInstanceField<System::Func_1<float_t>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_GetDownloadProgressCallback(System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> value)  {
::cordl_internals::setInstanceField<System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>>(value));
}
constexpr System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_GetDownloadProgressCallback() const {
return ::cordl_internals::getInstanceField<System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_WaitForCompletionCallback(System::Func_1<bool> value)  {
::cordl_internals::setInstanceField<System::Func_1<bool>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_1<bool>>(value));
}
constexpr System::Func_1<bool> UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_WaitForCompletionCallback() const {
return ::cordl_internals::getInstanceField<System::Func_1<bool>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_DownloadStatus(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_DownloadStatus() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_Provider(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_Provider() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_DepOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_DepOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_Location(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_Location() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_ProvideHandleVersion(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_ProvideHandleVersion() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_NeedsRelease(bool value)  {
::cordl_internals::setInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_NeedsRelease() const {
return ::cordl_internals::getInstanceField<bool, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField(UnityEngine::ResourceManagement::Util::IOperationCacheKey value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::Util::IOperationCacheKey, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::Util::IOperationCacheKey>(value));
}
constexpr UnityEngine::ResourceManagement::Util::IOperationCacheKey UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::Util::IOperationCacheKey, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__set_m_ResourceManager(UnityEngine::ResourceManagement::ResourceManager value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceManager>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceManager UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::__get_m_ResourceManager() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0x0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ResourceManagement::Util::IOperationCacheKey UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::Util::IOperationCacheKey, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key(UnityEngine::ResourceManagement::Util::IOperationCacheKey value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Util::IOperationCacheKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_ProvideHandleVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "get_ProvideHandleVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_Location()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "get_Location",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::SetDownloadProgressCallback(System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "SetDownloadProgressCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::SetWaitForCompletionCallback(System::Func_1<bool> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "SetWaitForCompletionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject> UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::New_ctor()  {
UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>())};
return o;
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::ReleaseDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "ReleaseDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDependencies(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> dstList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dstList);
}
 System::Type UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_RequestedType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "get_RequestedType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_DependencyCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "get_DependencyCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TDepObject>
 TDepObject UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::GetDependency(int32_t index)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                        "GetDependency",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDepObject>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDepObject>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<TDepObject, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::SetProgressCallback(System::Func_1<float_t> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "SetProgressCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
template<typename T>
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::ProviderCompleted(T result, bool status, System::Exception e)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                        "ProviderCompleted",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, result, status, e);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Init(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider provider, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> depOp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm, provider, location, depOp);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Init(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider provider, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> depOp, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm, provider, location, depOp, releaseDependenciesOnFailure);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::WaitForCompletionHandler()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "WaitForCompletionHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::ProviderOperation_1<TObject>>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
