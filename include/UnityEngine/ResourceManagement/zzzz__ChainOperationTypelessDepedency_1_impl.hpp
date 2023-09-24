#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ChainOperationTypelessDepedency_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_DepOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_DepOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_WrappedOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_WrappedOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_depStatus(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_depStatus() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_wrapStatus(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_wrapStatus() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_Callback(System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value)  {
::cordl_internals::setInstanceField<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>(value));
}
constexpr System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_Callback() const {
return ::cordl_internals::getInstanceField<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_CachedOnWrappedCompleted(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_CachedOnWrappedCompleted() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_ReleaseDependenciesOnFailure(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_ReleaseDependenciesOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::New_ctor()  {
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>())};
return o;
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> callback, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
 bool UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::OnWrappedCompleted(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "OnWrappedCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::ReleaseDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "ReleaseDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
/// @param visited: System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> (default: csnull)
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::RefreshDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "RefreshDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 float_t UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>, bool)>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.OnWrappedCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::OnWrappedCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "OnWrappedCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Destroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.ReleaseDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::ReleaseDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.RefreshDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::RefreshDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "RefreshDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Progress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_DepOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_DepOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_WrappedOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_WrappedOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_depStatus(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_depStatus() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_wrapStatus(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_wrapStatus() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_Callback(System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> value)  {
::cordl_internals::setInstanceField<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>(value));
}
constexpr System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_Callback() const {
return ::cordl_internals::getInstanceField<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_CachedOnWrappedCompleted(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_CachedOnWrappedCompleted() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_ReleaseDependenciesOnFailure(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_ReleaseDependenciesOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::New_ctor()  {
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>())};
return o;
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>> callback, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
 bool UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::OnWrappedCompleted(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "OnWrappedCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::ReleaseDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "ReleaseDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
/// @param visited: System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> (default: csnull)
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::RefreshDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "RefreshDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 float_t UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::get_DebugName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::GetDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>, bool)>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.OnWrappedCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>)>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::OnWrappedCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "OnWrappedCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::Destroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.ReleaseDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::ReleaseDependencies)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.RefreshDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::RefreshDownloadStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "RefreshDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::*)()>(&UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::get_Progress)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__set_m_DepOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__get_m_DepOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__set_m_WrappedOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__get_m_WrappedOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__set_m_depStatus(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__get_m_depStatus() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__set_m_wrapStatus(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__get_m_wrapStatus() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__set_m_Callback(System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> value)  {
::cordl_internals::setInstanceField<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>(value));
}
constexpr System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__get_m_Callback() const {
return ::cordl_internals::getInstanceField<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__set_m_CachedOnWrappedCompleted(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__get_m_CachedOnWrappedCompleted() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__set_m_ReleaseDependenciesOnFailure(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::__get_m_ReleaseDependenciesOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::New_ctor()  {
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>())};
return o;
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>> callback, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
 bool UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::OnWrappedCompleted(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "OnWrappedCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::ReleaseDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "ReleaseDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
/// @param visited: System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> (default: csnull)
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::RefreshDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "RefreshDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 float_t UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<bool>>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_DepOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_DepOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_WrappedOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_WrappedOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_depStatus(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_depStatus() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_wrapStatus(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_wrapStatus() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_Callback(System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value)  {
::cordl_internals::setInstanceField<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>(value));
}
constexpr System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_Callback() const {
return ::cordl_internals::getInstanceField<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_CachedOnWrappedCompleted(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_CachedOnWrappedCompleted() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__set_m_ReleaseDependenciesOnFailure(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::__get_m_ReleaseDependenciesOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject> UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::New_ctor()  {
UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject> o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>())};
return o;
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle dependentOp, System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>> callback, bool releaseDependenciesOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dependentOp, callback, releaseDependenciesOnFailure);
}
 bool UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::OnWrappedCompleted(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "OnWrappedCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::ReleaseDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "ReleaseDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
/// @param visited: System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> (default: csnull)
 void UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::RefreshDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "RefreshDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 float_t UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ChainOperationTypelessDepedency_1<TObject>>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
