#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__ScheduleMode_def.hpp"
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::*)(void*, ::cordl_internals::intptr_t, Unity::Jobs::JobHandle, Unity::Jobs::LowLevel::Unsafe::ScheduleMode)>(&Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2b28354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Jobs::JobHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Jobs::LowLevel::Unsafe::ScheduleMode>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Dependency", ty: "Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "ScheduleMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReflectionData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "JobDataPtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters(Unity::Jobs::JobHandle Dependency, int32_t ScheduleMode, ::cordl_internals::intptr_t ReflectionData, ::cordl_internals::intptr_t JobDataPtr) noexcept : ::bs_hook::ValueTypeWrapper() {this->Dependency = Dependency;
this->ScheduleMode = ScheduleMode;
this->ReflectionData = ReflectionData;
this->JobDataPtr = JobDataPtr;
}
constexpr void Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::__set_Dependency(Unity::Jobs::JobHandle value)  {
::cordl_internals::setInstanceField<Unity::Jobs::JobHandle, 0x0>(this->__instance, std::forward<Unity::Jobs::JobHandle>(value));
}
constexpr Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::__get_Dependency() const {
return ::cordl_internals::getInstanceField<Unity::Jobs::JobHandle, 0x0>(this->__instance);
}
constexpr void Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::__set_ScheduleMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::__get_ScheduleMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::__set_ReflectionData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::__get_ReflectionData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->__instance);
}
constexpr void Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::__set_JobDataPtr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::__get_JobDataPtr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->__instance);
}
 void Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters::_ctor(void* i_jobData, ::cordl_internals::intptr_t i_reflectionData, Unity::Jobs::JobHandle i_dependency, Unity::Jobs::LowLevel::Unsafe::ScheduleMode i_scheduleMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Jobs::JobHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Jobs::LowLevel::Unsafe::ScheduleMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, i_jobData, i_reflectionData, i_dependency, i_scheduleMode);
}
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2b2838c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_::*)()>(&Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2b28448;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_>(object, method))) {}
 void Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::JobsUtility.GetWorkStealingRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t, ByRef<int32_t>, ByRef<int32_t>)>(&Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetWorkStealingRange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b28068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "GetWorkStealingRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::JobsUtility.Schedule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Jobs::JobHandle (*)(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>)>(&Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b280c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "Schedule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Unity::Jobs::JobHandle (*)(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>, int32_t, int32_t)>(&Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b2815c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "ScheduleParallelFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::JobsUtility.CreateJobReflectionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(System::Type, System::Type, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b28224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "CreateJobReflectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::JobsUtility.CreateJobReflectionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(System::Type, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b28290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "CreateJobReflectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::JobsUtility.InvokePanicFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Jobs::LowLevel::Unsafe::JobsUtility::InvokePanicFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2b282f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "InvokePanicFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::JobsUtility.Schedule_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>, ByRef<Unity::Jobs::JobHandle>)>(&Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b28118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "Schedule_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::JobHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelFor_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>, int32_t, int32_t, ByRef<Unity::Jobs::JobHandle>)>(&Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b281c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "ScheduleParallelFor_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::JobHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
 void Unity::Jobs::LowLevel::Unsafe::JobsUtility::__set_PanicFunction(Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_ value)  {
::cordl_internals::setStaticField<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_, "PanicFunction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get>(std::forward<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_>(value));
}
 Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_ Unity::Jobs::LowLevel::Unsafe::JobsUtility::__get_PanicFunction()  {
return ::cordl_internals::getStaticField<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__PanicFunction_, "PanicFunction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get>();
}
 bool Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetWorkStealingRange(ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex, ByRef<int32_t> beginIndex, ByRef<int32_t> endIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "GetWorkStealingRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ranges, jobIndex, beginIndex, endIndex);
}
 Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters> parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "Schedule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, parameters);
}
 Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters> parameters, int32_t arrayLength, int32_t innerloopBatchCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "ScheduleParallelFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, parameters, arrayLength, innerloopBatchCount);
}
 ::cordl_internals::intptr_t Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(System::Type wrapperJobType, System::Type userJobType, ::bs_hook::Il2CppWrapperType managedJobFunction0, ::bs_hook::Il2CppWrapperType managedJobFunction1, ::bs_hook::Il2CppWrapperType managedJobFunction2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "CreateJobReflectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, wrapperJobType, userJobType, managedJobFunction0, managedJobFunction1, managedJobFunction2);
}
/// @param managedJobFunction1: ::bs_hook::Il2CppWrapperType (default: csnull)
/// @param managedJobFunction2: ::bs_hook::Il2CppWrapperType (default: csnull)
 ::cordl_internals::intptr_t Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(System::Type type, ::bs_hook::Il2CppWrapperType managedJobFunction0, ::bs_hook::Il2CppWrapperType managedJobFunction1, ::bs_hook::Il2CppWrapperType managedJobFunction2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "CreateJobReflectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, type, managedJobFunction0, managedJobFunction1, managedJobFunction2);
}
 void Unity::Jobs::LowLevel::Unsafe::JobsUtility::InvokePanicFunction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "InvokePanicFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule_Injected(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters> parameters, ByRef<Unity::Jobs::JobHandle> ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "Schedule_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::JobHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parameters, ret);
}
 void Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor_Injected(ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters> parameters, int32_t arrayLength, int32_t innerloopBatchCount, ByRef<Unity::Jobs::JobHandle> ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::LowLevel::Unsafe::JobsUtility>::get(),
                            "ScheduleParallelFor_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::Unity__Jobs__LowLevel__Unsafe__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::JobHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parameters, arrayLength, innerloopBatchCount, ret);
}
