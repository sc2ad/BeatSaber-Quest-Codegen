#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "BGNet/Core/GameLift/zzzz__GetMultiplayerInstanceResponse_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "GlobalNamespace/zzzz__GetAssetBundleFileResult_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskFactory_1_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>::__set_s_completeFromAsyncResult(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "s_completeFromAsyncResult", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>::__get_s_completeFromAsyncResult()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "s_completeFromAsyncResult", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>>::get>();
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>::__set_m_thisRef(TInstance value)  {
::cordl_internals::setInstanceField<TInstance, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TInstance>(value));
}
constexpr TInstance System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>::__get_m_thisRef() const {
return ::cordl_internals::getInstanceField<TInstance, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>::__set_m_endMethod(System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>::__get_m_endMethod() const {
return ::cordl_internals::getInstanceField<System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>::New_ctor(TInstance thisRef, System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> endMethod)  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>>(thisRef, endMethod))};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>::_ctor(TInstance thisRef, System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> endMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, thisRef, endMethod);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>::CompleteFromAsyncResult(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>>::get(),
                            "CompleteFromAsyncResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>::Complete(TInstance thisRef, System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> endMethod, System::IAsyncResult asyncResult, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<System::Threading::Tasks::VoidTaskResult,TInstance>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, thisRef, endMethod, asyncResult, requiresSynchronization);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__set_s_completeFromAsyncResult(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "s_completeFromAsyncResult", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__get_s_completeFromAsyncResult()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "s_completeFromAsyncResult", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>::get>();
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__set_m_thisRef(TInstance value)  {
::cordl_internals::setInstanceField<TInstance, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TInstance>(value));
}
constexpr TInstance System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__get_m_thisRef() const {
return ::cordl_internals::getInstanceField<TInstance, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__set_m_endMethod(System::Func_3<TInstance,System::IAsyncResult,TResult> value)  {
::cordl_internals::setInstanceField<System::Func_3<TInstance,System::IAsyncResult,TResult>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_3<TInstance,System::IAsyncResult,TResult>>(value));
}
constexpr System::Func_3<TInstance,System::IAsyncResult,TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__get_m_endMethod() const {
return ::cordl_internals::getInstanceField<System::Func_3<TInstance,System::IAsyncResult,TResult>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::New_ctor(TInstance thisRef, System::Func_3<TInstance,System::IAsyncResult,TResult> endMethod)  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>(thisRef, endMethod))};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::_ctor(TInstance thisRef, System::Func_3<TInstance,System::IAsyncResult,TResult> endMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, thisRef, endMethod);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::CompleteFromAsyncResult(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>::get(),
                            "CompleteFromAsyncResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::Complete(TInstance thisRef, System::Func_3<TInstance,System::IAsyncResult,TResult> endMethod, System::IAsyncResult asyncResult, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, thisRef, endMethod, asyncResult, requiresSynchronization);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__set_s_completeFromAsyncResult(System::AsyncCallback value)  {
::cordl_internals::setStaticField<System::AsyncCallback, "s_completeFromAsyncResult", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>::get>(std::forward<System::AsyncCallback>(value));
}
 System::AsyncCallback System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__get_s_completeFromAsyncResult()  {
return ::cordl_internals::getStaticField<System::AsyncCallback, "s_completeFromAsyncResult", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>::get>();
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__set_m_thisRef(TInstance value)  {
::cordl_internals::setInstanceField<TInstance, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TInstance>(value));
}
constexpr TInstance System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__get_m_thisRef() const {
return ::cordl_internals::getInstanceField<TInstance, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__set_m_endMethod(System::Func_3<TInstance,System::IAsyncResult,TResult> value)  {
::cordl_internals::setInstanceField<System::Func_3<TInstance,System::IAsyncResult,TResult>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_3<TInstance,System::IAsyncResult,TResult>>(value));
}
constexpr System::Func_3<TInstance,System::IAsyncResult,TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::__get_m_endMethod() const {
return ::cordl_internals::getInstanceField<System::Func_3<TInstance,System::IAsyncResult,TResult>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::New_ctor(TInstance thisRef, System::Func_3<TInstance,System::IAsyncResult,TResult> endMethod)  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>(thisRef, endMethod))};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::_ctor(TInstance thisRef, System::Func_3<TInstance,System::IAsyncResult,TResult> endMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, thisRef, endMethod);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::CompleteFromAsyncResult(System::IAsyncResult asyncResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>::get(),
                            "CompleteFromAsyncResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>::Complete(TInstance thisRef, System::Func_3<TInstance,System::IAsyncResult,TResult> endMethod, System::IAsyncResult asyncResult, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1__FromAsyncTrimPromise_1<TResult,TInstance>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, thisRef, endMethod, asyncResult, requiresSynchronization);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_endFunction(System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>(value));
}
constexpr System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_promise(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__set_endFunction(System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__set_promise(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::__set_endFunction(System::Func_2<System::IAsyncResult,System::Int32Enum> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,System::Int32Enum>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,System::Int32Enum>>(value));
}
constexpr System::Func_2<System::IAsyncResult,System::Int32Enum> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,System::Int32Enum>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::__set_promise(System::Threading::Tasks::Task_1<System::Int32Enum> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Int32Enum>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::Int32Enum>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Int32Enum> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Int32Enum>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Int32Enum>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_endFunction(System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_promise(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__set_endFunction(System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>(value));
}
constexpr System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__set_promise(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__set_endFunction(System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__set_promise(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__set_endFunction(System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__set_promise(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__set_endFunction(System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__set_promise(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::__set_endFunction(System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::__set_promise(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::__set_endFunction(System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::__set_promise(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::__set_endFunction(System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>>(value));
}
constexpr System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::__set_promise(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<GlobalNamespace::AuthenticationToken>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::__set_endFunction(System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>>(value));
}
constexpr System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::__set_promise(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::Nullable_1<int32_t>>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__set_endFunction(System::Func_2<System::IAsyncResult,TResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,TResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__set_promise(System::Threading::Tasks::Task_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<TResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_endFunction(System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(value));
}
constexpr System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_promise(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(value));
}
constexpr System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::__set_endFunction(System::Func_2<System::IAsyncResult,bool> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,bool>>(value));
}
constexpr System::Func_2<System::IAsyncResult,bool> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::__set_promise(System::Threading::Tasks::Task_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<bool>>(value));
}
constexpr System::Threading::Tasks::Task_1<bool> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<bool>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<bool>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_endFunction(System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_promise(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__set_endFunction(System::Func_2<System::IAsyncResult,TResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,TResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__set_promise(System::Threading::Tasks::Task_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<TResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)()>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>._FromAsyncImpl_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)(System::IAsyncResult)>(&System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_FromAsyncImpl_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_endFunction(System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>(value));
}
constexpr System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_promise(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>(value));
}
constexpr System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__set_endFunction(System::Func_2<System::IAsyncResult,TResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,TResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__set_promise(System::Threading::Tasks::Task_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<TResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass35_0<TResult>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>::__set_endFunction(System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>::__set_promise(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<System::Threading::Tasks::VoidTaskResult,TArg1>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>::__set_endFunction(System::Func_2<System::IAsyncResult,TResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,TResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>::__set_promise(System::Threading::Tasks::Task_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<TResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass38_0_1<TResult,TArg1>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__set_endFunction(System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__set_promise(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__set_endFunction(System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__set_promise(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<System::Threading::Tasks::VoidTaskResult,TArg1,TArg2>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__set_endFunction(System::Func_2<System::IAsyncResult,TResult> value)  {
::cordl_internals::setInstanceField<System::Func_2<System::IAsyncResult,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<System::IAsyncResult,TResult>>(value));
}
constexpr System::Func_2<System::IAsyncResult,TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__get_endFunction() const {
return ::cordl_internals::getInstanceField<System::Func_2<System::IAsyncResult,TResult>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__set_endAction(System::Action_1<System::IAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<System::IAsyncResult>>(value));
}
constexpr System::Action_1<System::IAsyncResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__get_endAction() const {
return ::cordl_internals::getInstanceField<System::Action_1<System::IAsyncResult>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__set_promise(System::Threading::Tasks::Task_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::Task_1<TResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>::__get_promise() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2> System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>::New_ctor()  {
System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>>())};
return o;
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>::_FromAsyncImpl_b__0(System::IAsyncResult iar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::System__Threading__Tasks__TaskFactory_1____c__DisplayClass41_0_2<TResult,TArg1,TArg2>>::get(),
                            "<FromAsyncImpl>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, iar);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)()>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, bool)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)()>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, bool)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::*)()>(&System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Int32Enum>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,System::Int32Enum>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<System::Int32Enum>, bool)>(&System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Int32Enum>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Int32Enum> (System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::Int32Enum>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Int32Enum>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Int32Enum> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::Int32Enum>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<System::Int32Enum> System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<System::Int32Enum> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<System::Int32Enum> System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<System::Int32Enum> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,System::Int32Enum> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<System::Int32Enum> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<System::Int32Enum> System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Int32Enum> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Int32Enum>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<System::Int32Enum> System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Int32Enum> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Int32Enum>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::Int32Enum> System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Int32Enum> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Int32Enum>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::Int32Enum> System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Int32Enum> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Int32Enum>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<System::Int32Enum> System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Int32Enum> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Int32Enum>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<System::Int32Enum> System::Threading::Tasks::TaskFactory_1<System::Int32Enum>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,System::Int32Enum> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Int32Enum>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,System::Int32Enum>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Int32Enum>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, bool)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)()>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, bool)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)()>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, bool)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)()>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, bool)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)()>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, bool)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::*)()>(&System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, bool)>(&System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> (System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,System::Threading::Tasks::VoidTaskResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::*)()>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, bool)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::GetAssetBundleFileResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::*)()>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, bool)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> (System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,GlobalNamespace::AuthenticationToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::AuthenticationToken> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<GlobalNamespace::AuthenticationToken>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,GlobalNamespace::AuthenticationToken>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::*)()>(&System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, bool)>(&System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> (System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>> System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>> System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::Nullable_1<int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,System::Nullable_1<int32_t>> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::Nullable_1<int32_t>>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,System::Nullable_1<int32_t>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<TResult>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<TResult>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<TResult>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<TResult> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,TResult> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,TResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, bool)>(&System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<bool>::*)()>(&System::Threading::Tasks::TaskFactory_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<bool>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<bool>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,bool>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<bool>, bool)>(&System::Threading::Tasks::TaskFactory_1<bool>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<bool>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool> (System::Threading::Tasks::TaskFactory_1<bool>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,bool>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<bool>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<bool>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,bool>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<bool>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<bool>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<bool>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<bool>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<bool>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<bool>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<bool>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<bool>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<bool>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<bool> System::Threading::Tasks::TaskFactory_1<bool>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<bool> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<bool>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<bool>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<bool> System::Threading::Tasks::TaskFactory_1<bool>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<bool> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<bool>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<bool>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<bool>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,bool> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<bool> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<bool> System::Threading::Tasks::TaskFactory_1<bool>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,bool> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<bool> System::Threading::Tasks::TaskFactory_1<bool>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,bool> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<bool> System::Threading::Tasks::TaskFactory_1<bool>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,bool> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<bool> System::Threading::Tasks::TaskFactory_1<bool>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,bool> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<bool> System::Threading::Tasks::TaskFactory_1<bool>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,bool> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<bool> System::Threading::Tasks::TaskFactory_1<bool>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,bool> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<bool>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,bool>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, bool)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> (System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<TResult>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<TResult>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<TResult>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<TResult> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,TResult> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,TResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)()>(&System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)(System::Threading::CancellationToken, System::Threading::Tasks::TaskCreationOptions, System::Threading::Tasks::TaskContinuationOptions, System::Threading::Tasks::TaskScheduler)>(&System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.FromAsyncCoreLogic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IAsyncResult, System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, System::Action_1<System::IAsyncResult>, System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, bool)>(&System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::FromAsyncCoreLogic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.FromAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> (System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, ::bs_hook::Il2CppWrapperType)>(&System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::FromAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.FromAsyncImpl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> (*)(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>, System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, System::Action_1<System::IAsyncResult>, ::bs_hook::Il2CppWrapperType, System::Threading::Tasks::TaskCreationOptions)>(&System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::FromAsyncImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultCancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultCancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskScheduler>(value));
}
constexpr System::Threading::Tasks::TaskScheduler System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultScheduler() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskScheduler, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCreationOptions>(value));
}
constexpr System::Threading::Tasks::TaskCreationOptions System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultCreationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCreationOptions, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Threading::Tasks::TaskFactory_1<TResult>::__set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskContinuationOptions>(value));
}
constexpr System::Threading::Tasks::TaskContinuationOptions System::Threading::Tasks::TaskFactory_1<TResult>::__get_m_defaultContinuationOptions() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskContinuationOptions, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::TaskFactory_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::New_ctor()  {
System::Threading::Tasks::TaskFactory_1<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<TResult>>())};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::TaskFactory_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
System::Threading::Tasks::TaskFactory_1<TResult> o{THROW_UNLESS(::il2cpp_utils::New<System::Threading::Tasks::TaskFactory_1<TResult>>(cancellationToken, creationOptions, continuationOptions, scheduler))};
return o;
}
 void System::Threading::Tasks::TaskFactory_1<TResult>::_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskContinuationOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskScheduler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cancellationToken, creationOptions, continuationOptions, scheduler);
}
 void System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncCoreLogic(System::IAsyncResult iar, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, System::Threading::Tasks::Task_1<TResult> promise, bool requiresSynchronization)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            "FromAsyncCoreLogic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IAsyncResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iar, endFunction, endAction, promise, requiresSynchronization);
}
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsync(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endMethod, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            "FromAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, state);
}
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                            "FromAsyncImpl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, state, creationOptions);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsync",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(const_cast<void*>(instance), ___internal_method, beginMethod, endMethod, arg1, state);
}
template<typename TArg1>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, state, creationOptions);
}
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncImpl(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_2<System::IAsyncResult,TResult> endFunction, System::Action_1<System::IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsyncImpl",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<System::IAsyncResult,TResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::TaskCreationOptions>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg2>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, beginMethod, endFunction, endAction, arg1, arg2, state, creationOptions);
}
template<typename TInstance,typename TArgs>
 System::Threading::Tasks::Task_1<TResult> System::Threading::Tasks::TaskFactory_1<TResult>::FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Func_3<TInstance,System::IAsyncResult,TResult> endMethod)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskFactory_1<TResult>>::get(),
                        "FromAsyncTrim",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArgs>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_5<TInstance,TArgs,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<TInstance,System::IAsyncResult,TResult>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, thisRef, args, beginMethod, endMethod);
}
