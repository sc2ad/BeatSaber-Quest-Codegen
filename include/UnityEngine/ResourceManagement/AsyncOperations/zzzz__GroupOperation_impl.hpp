#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__ICachable_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IOperationCacheKey_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__DownloadStatus_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings  UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings::None{0};
constexpr UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings  UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings::ReleaseDependenciesOnFailure{1};
constexpr UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings  UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings::AllowFailedDependencies{2};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2a45d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.InvokeWaitForCompletion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::InvokeWaitForCompletion)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x2a45eac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Util::IOperationCacheKey (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a46284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(UnityEngine::ResourceManagement::Util::IOperationCacheKey)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a4628c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Util::IOperationCacheKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.GetDependentOps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependentOps)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a358c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "GetDependentOps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.GetDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependencies)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a46294;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.ReleaseDependencies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::ReleaseDependencies)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2a462f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.GetDownloadStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDownloadStatus)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2a4654c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.DependenciesAreUnchanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::DependenciesAreUnchanged)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2a467ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "DependenciesAreUnchanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.get_DebugName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_DebugName)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2a46978;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Execute)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2a46c4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.CompleteIfDependenciesComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::CompleteIfDependenciesComplete)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2a46e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "CompleteIfDependenciesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Destroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a4716c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.get_Progress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)()>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_Progress)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2a4717c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::AsyncOperations::GroupOperation),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, bool, bool)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2a357d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a47374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::AsyncOperations::GroupOperation.OnOperationCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::OnOperationCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a4740c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "OnOperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ResourceManagement::AsyncOperations::ICachable
constexpr  UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::operator UnityEngine::ResourceManagement::AsyncOperations::ICachable() const noexcept {
return UnityEngine::ResourceManagement::AsyncOperations::ICachable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__set_m_InternalOnComplete(System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(value));
}
constexpr System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__get_m_InternalOnComplete() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__set_m_LoadedCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__get_m_LoadedCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__set_m_Settings(UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings>(value));
}
constexpr UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__get_m_Settings() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__set_debugName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__get_debugName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__set__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField(UnityEngine::ResourceManagement::Util::IOperationCacheKey value)  {
::cordl_internals::setInstanceField<UnityEngine::ResourceManagement::Util::IOperationCacheKey, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::ResourceManagement::Util::IOperationCacheKey>(value));
}
constexpr UnityEngine::ResourceManagement::Util::IOperationCacheKey UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__get__UnityEngine_ResourceManagement_AsyncOperations_ICachable_Key_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::ResourceManagement::Util::IOperationCacheKey, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__set_m_CachedDependencyLocations(System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<::StringW>>(value));
}
constexpr System::Collections::Generic::HashSet_1<::StringW> UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::__get_m_CachedDependencyLocations() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GroupOperation()  : UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>(THROW_UNLESS(::il2cpp_utils::New<GroupOperation>())) {}
 void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::InvokeWaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "InvokeWaitForCompletion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::Util::IOperationCacheKey UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::Util::IOperationCacheKey, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::UnityEngine_ResourceManagement_AsyncOperations_ICachable_set_Key(UnityEngine::ResourceManagement::Util::IOperationCacheKey value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::Util::IOperationCacheKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependentOps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "GetDependentOps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDependencies(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "GetDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::ReleaseDependencies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "ReleaseDependencies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::GetDownloadStatus(System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType> visited)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "GetDownloadStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, false>(const_cast<void*>(instance), ___internal_method, visited);
}
 bool UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::DependenciesAreUnchanged(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> deps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "DependenciesAreUnchanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, deps);
}
 ::StringW UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "get_DebugName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Execute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::CompleteIfDependenciesComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "CompleteIfDependenciesComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "get_Progress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param releaseDependenciesOnFailure: bool (default: true)
/// @param allowFailedDependencies: bool (default: false)
 void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> operations, bool releaseDependenciesOnFailure, bool allowFailedDependencies)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operations, releaseDependenciesOnFailure, allowFailedDependencies);
}
 void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::Init(System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> operations, UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::UnityEngine__ResourceManagement__AsyncOperations__GroupOperation__GroupOperationSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operations, settings);
}
 void UnityEngine::ResourceManagement::AsyncOperations::GroupOperation::OnOperationCompleted(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::AsyncOperations::GroupOperation>::get(),
                            "OnOperationCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, op);
}
