#pragma once
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/Tasks/zzzz__ContinuationTaskFromResultTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Threading/Tasks/zzzz__InternalTaskOptions_def.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1::*)(System::Threading::Tasks::Task_1<TAntecedentResult>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<TAntecedentResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1::__set_m_antecedent(System::Threading::Tasks::Task_1<TAntecedentResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<TAntecedentResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<TAntecedentResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<TAntecedentResult> System::Threading::Tasks::ContinuationTaskFromResultTask_1::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<TAntecedentResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<TAntecedentResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1::_ctor(System::Threading::Tasks::Task_1<TAntecedentResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<TAntecedentResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_m_antecedent(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>(value));
}
constexpr System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::*)(System::Threading::Tasks::Task_1<int32_t>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::__set_m_antecedent(System::Threading::Tasks::Task_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<int32_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<int32_t>>(value));
}
constexpr System::Threading::Tasks::Task_1<int32_t> System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<int32_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<int32_t> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::_ctor(System::Threading::Tasks::Task_1<int32_t> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<int32_t>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_m_antecedent(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::*)(System::Threading::Tasks::Task_1<bool>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::__set_m_antecedent(System::Threading::Tasks::Task_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<bool>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<bool>>(value));
}
constexpr System::Threading::Tasks::Task_1<bool> System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<bool>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<bool>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<bool> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::_ctor(System::Threading::Tasks::Task_1<bool> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<bool>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_antecedent(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(value));
}
constexpr System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::*)(System::Threading::Tasks::Task_1<int64_t>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::__set_m_antecedent(System::Threading::Tasks::Task_1<int64_t> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<int64_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<int64_t>>(value));
}
constexpr System::Threading::Tasks::Task_1<int64_t> System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<int64_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<int64_t> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::_ctor(System::Threading::Tasks::Task_1<int64_t> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<int64_t>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>::*)(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>::__set_m_antecedent(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>::_ctor(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Nullable_1<int32_t>>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>::__set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>::__set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>::*)(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>::__set_m_antecedent(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>::_ctor(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__set_m_antecedent(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_ctor(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_m_antecedent(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>::*)(System::Threading::Tasks::Task_1<System::Int32Enum>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>::__set_m_antecedent(System::Threading::Tasks::Task_1<System::Int32Enum> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Int32Enum>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::Int32Enum>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Int32Enum> System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Int32Enum>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::Int32Enum> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>::_ctor(System::Threading::Tasks::Task_1<System::Int32Enum> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::Int32Enum>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__set_m_antecedent(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, System::Delegate, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::InternalTaskOptions)>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>.InnerInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)()>(&System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::InnerInvoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_m_antecedent(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_m_antecedent() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "antecedent", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Delegate", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "internalOptions", ty: "System::Threading::Tasks::InternalTaskOptions", modifiers: "", def_value: None }]
 System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::ContinuationTaskFromResultTask_1(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  : System::Threading::Tasks::Task(THROW_UNLESS(::il2cpp_utils::New<ContinuationTaskFromResultTask_1>(antecedent, action, state, creationOptions, internalOptions))) {}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Delegate>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::InternalTaskOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, antecedent, action, state, creationOptions, internalOptions);
}
 void System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::InnerInvoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::ContinuationTaskFromResultTask_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "InnerInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
