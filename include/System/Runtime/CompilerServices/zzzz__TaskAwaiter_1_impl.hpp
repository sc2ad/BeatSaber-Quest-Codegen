#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
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
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1::*)(System::Threading::Tasks::Task_1<TResult>)>(&System::Runtime::CompilerServices::TaskAwaiter_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<TResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TResult (System::Runtime::CompilerServices::TaskAwaiter_1::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<TResult>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1::TaskAwaiter_1(System::Threading::Tasks::Task_1<TResult> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1::__set_m_task(System::Threading::Tasks::Task_1<TResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<TResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<TResult> System::Runtime::CompilerServices::TaskAwaiter_1::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<TResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1::_ctor(System::Threading::Tasks::Task_1<TResult> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<TResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 TResult System::Runtime::CompilerServices::TaskAwaiter_1::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BGNet::Core::GameLift::GetMultiplayerInstanceResponse (System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::TaskAwaiter_1(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__set_m_task(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>(value));
}
constexpr System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::_ctor(System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 BGNet::Core::GameLift::GetMultiplayerInstanceResponse System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::GetMultiplayerInstanceResponse>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<BGNet::Core::GameLift::GetMultiplayerInstanceResponse, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::*)(System::Threading::Tasks::Task_1<int32_t>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<int32_t>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::TaskAwaiter_1(System::Threading::Tasks::Task_1<int32_t> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::__set_m_task(System::Threading::Tasks::Task_1<int32_t> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<int32_t>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<int32_t>>(value));
}
constexpr System::Threading::Tasks::Task_1<int32_t> System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<int32_t>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::_ctor(System::Threading::Tasks::Task_1<int32_t> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 int32_t System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::TaskAwaiter_1(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__set_m_task(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::_ctor(System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType> System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<bool,::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<bool>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<bool>::*)(System::Threading::Tasks::Task_1<bool>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<bool>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<bool>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<bool>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<bool>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<bool>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<bool>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<bool>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<bool>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<bool>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<bool>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<bool>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<bool>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool>::TaskAwaiter_1(System::Threading::Tasks::Task_1<bool> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<bool>::__set_m_task(System::Threading::Tasks::Task_1<bool> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<bool>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<bool>>(value));
}
constexpr System::Threading::Tasks::Task_1<bool> System::Runtime::CompilerServices::TaskAwaiter_1<bool>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<bool>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<bool>::_ctor(System::Threading::Tasks::Task_1<bool> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<bool>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<bool>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<bool>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance (System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::TaskAwaiter_1(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__set_m_task(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>(value));
}
constexpr System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::_ctor(System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 UnityEngine::ResourceManagement::ResourceProviders::SceneInstance System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::*)(System::Threading::Tasks::Task_1<int64_t>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<int64_t>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::TaskAwaiter_1(System::Threading::Tasks::Task_1<int64_t> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::__set_m_task(System::Threading::Tasks::Task_1<int64_t> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<int64_t>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<int64_t>>(value));
}
constexpr System::Threading::Tasks::Task_1<int64_t> System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<int64_t>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::_ctor(System::Threading::Tasks::Task_1<int64_t> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 int64_t System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<int64_t>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::*)(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<int32_t> (System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::TaskAwaiter_1(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::__set_m_task(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::_ctor(System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Nullable_1<int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 System::Nullable_1<int32_t> System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Nullable_1<int32_t>>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<int32_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AuthenticationToken (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::TaskAwaiter_1(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::__set_m_task(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 GlobalNamespace::AuthenticationToken System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AuthenticationToken>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::AuthenticationToken, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GetAssetBundleFileResult (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::TaskAwaiter_1(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::__set_m_task(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 GlobalNamespace::GetAssetBundleFileResult System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GetAssetBundleFileResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GetAssetBundleFileResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::*)(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::VoidTaskResult (System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::TaskAwaiter_1(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::__set_m_task(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::_ctor(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 System::Threading::Tasks::VoidTaskResult System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Threading::Tasks::VoidTaskResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::VoidTaskResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::TaskAwaiter_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__set_m_task(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__BeatmapLevelLoader__LoadBeatmapLevelResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::TaskAwaiter_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__set_m_task(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__BeatmapLevelSO__GetBeatmapLevelDataResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::TaskAwaiter_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__set_m_task(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__BeatmapLevelsModel__GetBeatmapLevelResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::TaskAwaiter_1(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__set_m_task(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::_ctor(System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t> System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_3<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType,int32_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::TaskAwaiter_1(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__set_m_task(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::_ctor(System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType> System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_5<::bs_hook::Il2CppWrapperType,bool,bool,::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::*)(System::Threading::Tasks::Task_1<System::Int32Enum>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Int32Enum>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Int32Enum (System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<System::Int32Enum>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::TaskAwaiter_1(System::Threading::Tasks::Task_1<System::Int32Enum> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::__set_m_task(System::Threading::Tasks::Task_1<System::Int32Enum> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::Int32Enum>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<System::Int32Enum>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::Int32Enum> System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::Int32Enum>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::_ctor(System::Threading::Tasks::Task_1<System::Int32Enum> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::Int32Enum>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 System::Int32Enum System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::Int32Enum>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Int32Enum, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult (System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::TaskAwaiter_1(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__set_m_task(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>(value));
}
constexpr System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::_ctor(System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>.UnsafeOnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)(System::Action)>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> (System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::*)()>(&System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Runtime::CompilerServices::ICriticalNotifyCompletion
constexpr  System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() const {
return System::Runtime::CompilerServices::ICriticalNotifyCompletion(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_task", ty: "System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>", modifiers: "", def_value: Some("csnull") }]
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::TaskAwaiter_1(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> m_task) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_task = m_task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__set_m_task(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, 0x0>(this->__instance, std::forward<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>(value));
}
constexpr System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::__get_m_task() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>, 0x0>(this->__instance);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::_ctor(System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, task);
}
 bool System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::UnsafeOnCompleted(System::Action continuation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "UnsafeOnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, continuation);
}
 System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t> System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TaskAwaiter_1<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
