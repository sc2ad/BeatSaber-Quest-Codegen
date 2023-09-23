#pragma once
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneProvider_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider2_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ISceneProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__IUpdateReceiver_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)(UnityEngine::ResourceManagement::ResourceManager)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a40e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::GetDownloadStatus)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a41254;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2a40ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2a41330;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::GetDependencies)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2a41668;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::get_DebugName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a417b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::Execute)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x2a41858;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.InternalLoadScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, bool, UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::InternalLoadScene)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a41e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "InternalLoadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.InternalLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AsyncOperation (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)(::StringW, bool, UnityEngine::SceneManagement::LoadSceneMode)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::InternalLoad)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a41f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "InternalLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::Destroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a41fe0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::get_Progress)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2a42070;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp.UnityEngine_ResourceManagement_IUpdateReceiver_Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::*)(float_t)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::UnityEngine_ResourceManagement_IUpdateReceiver_Update)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2a42130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "UnityEngine.ResourceManagement.IUpdateReceiver.Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::IUpdateReceiver
constexpr  UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::operator UnityEngine::ResourceManagement::IUpdateReceiver() const noexcept {
return UnityEngine::ResourceManagement::IUpdateReceiver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__set_m_ActivateOnLoad(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__get_m_ActivateOnLoad() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__set_m_Inst(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceProviders::SceneInstance UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__get_m_Inst() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__set_m_Location(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__get_m_Location() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__set_m_LoadMode(UnityEngine::SceneManagement::LoadSceneMode value)  {
::cordl_internals::setInstanceField<UnityEngine::SceneManagement::LoadSceneMode, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SceneManagement::LoadSceneMode>(value));
}
constexpr UnityEngine::SceneManagement::LoadSceneMode UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__get_m_LoadMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::SceneManagement::LoadSceneMode, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__set_m_Priority(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__get_m_Priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0xb4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__set_m_DepOp(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__get_m_DepOp() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__set_m_ResourceManager(UnityEngine::ResourceManagement::ResourceManager value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceManager>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceManager UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::__get_m_ResourceManager() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceManager, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "rm", ty: "UnityEngine::ResourceManagement::ResourceManager", modifiers: "", def_value: None }]
 UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp(UnityEngine::ResourceManagement::ResourceManager rm)  : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>(rm))) {}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::_ctor(UnityEngine::ResourceManagement::ResourceManager rm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rm);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::Init(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>> depOp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, location, loadMode, activateOnLoad, priority, depOp);
}
 bool UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 ::StringW UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::ResourceProviders::SceneInstance UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::InternalLoadScene(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, bool loadingFromBundle, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "InternalLoadScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, false>(const_cast<void*>(instance), ___internal_method, location, loadingFromBundle, loadMode, activateOnLoad, priority);
}
 UnityEngine::AsyncOperation UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::InternalLoad(::StringW path, bool loadingFromBundle, UnityEngine::SceneManagement::LoadSceneMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "InternalLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AsyncOperation, false>(const_cast<void*>(instance), ___internal_method, path, loadingFromBundle, mode);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp::UnityEngine_ResourceManagement_IUpdateReceiver_Update(float_t unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__SceneOp>::get(),
                            "UnityEngine.ResourceManagement.IUpdateReceiver.Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unscaledDeltaTime);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, UnityEngine::SceneManagement::UnloadSceneOptions)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::Init)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a411b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::Execute)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2a42258;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a424c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp.UnloadSceneCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::*)(UnityEngine::AsyncOperation)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::UnloadSceneCompleted)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2a423fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            "UnloadSceneCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp.UnloadSceneCompletedNoRelease
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::*)(UnityEngine::AsyncOperation)>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::UnloadSceneCompletedNoRelease)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a4238c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            "UnloadSceneCompletedNoRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::get_Progress)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a42578;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a41170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::__set_m_Instance(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(value));
}
constexpr UnityEngine::ResourceManagement::ResourceProviders::SceneInstance UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::__get_m_Instance() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::__set_m_sceneLoadHandle(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::__get_m_sceneLoadHandle() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::__set_m_UnloadOptions(UnityEngine::SceneManagement::UnloadSceneOptions value)  {
::cordl_internals::setInstanceField<UnityEngine::SceneManagement::UnloadSceneOptions, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SceneManagement::UnloadSceneOptions>(value));
}
constexpr UnityEngine::SceneManagement::UnloadSceneOptions UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::__get_m_UnloadOptions() const {
return ::cordl_internals::getInstanceField<UnityEngine::SceneManagement::UnloadSceneOptions, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::Init(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle, UnityEngine::SceneManagement::UnloadSceneOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sceneLoadHandle, options);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::UnloadSceneCompleted(UnityEngine::AsyncOperation obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            "UnloadSceneCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::UnloadSceneCompletedNoRelease(UnityEngine::AsyncOperation obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            "UnloadSceneCompletedNoRelease",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AsyncOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 float_t UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp()  : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>())) {}
 void UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::UnityEngine__ResourceManagement__ResourceProviders__SceneProvider__UnloadSceneOp>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ProvideScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation, UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2a40aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneProvider>::get(),
                            "ProvideScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.ReleaseScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ReleaseScene)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2a40f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneProvider>::get(),
                            "ReleaseScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider.UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)(UnityEngine::ResourceManagement::ResourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, UnityEngine::SceneManagement::UnloadSceneOptions)>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2a41050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneProvider>::get(),
                            "UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::ResourceProviders::SceneProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4124c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2
constexpr  UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::operator UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2() const noexcept {
return UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider
constexpr  UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::operator UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider() const noexcept {
return UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider(::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ProvideScene(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneProvider>::get(),
                            "ProvideScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(const_cast<void*>(instance), ___internal_method, resourceManager, location, loadMode, activateOnLoad, priority);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::ReleaseScene(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneProvider>::get(),
                            "ReleaseScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(const_cast<void*>(instance), ___internal_method, resourceManager, sceneLoadHandle);
}
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::UnityEngine_ResourceManagement_ResourceProviders_ISceneProvider2_ReleaseScene(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle, UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneProvider>::get(),
                            "UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2.ReleaseScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::ResourceManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SceneManagement::UnloadSceneOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(const_cast<void*>(instance), ___internal_method, resourceManager, sceneLoadHandle, unloadOptions);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::SceneProvider()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SceneProvider>())) {}
 void UnityEngine::ResourceManagement::ResourceProviders::SceneProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::ResourceProviders::SceneProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
