#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Unity/Jobs/zzzz__IJobParallelForExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
/// @param dependsOn: ::Unity::Jobs::JobHandle (default: {})
template<typename T>
 ::Unity::Jobs::JobHandle ::Unity::Jobs::IJobParallelForExtensions::Schedule(T jobData, int32_t arrayLength, int32_t innerloopBatchCount, ::Unity::Jobs::JobHandle dependsOn)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobParallelForExtensions>::get(),
                        "Schedule",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, jobData, arrayLength, innerloopBatchCount, dependsOn);
}
//  Writing Method size for method: ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::*)(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction>(object, method))) {}
 void ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::Invoke(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::*)(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : ::System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction>(object, method))) {}
 void ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void ::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::Invoke(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::__set_jobReflectionData(::cordl_internals::intptr_t value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
 ::cordl_internals::intptr_t ::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::__get_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>>::get>();
}
 void ::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>::Execute(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob> jobData, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::__set_jobReflectionData(::cordl_internals::intptr_t value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
 ::cordl_internals::intptr_t ::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::__get_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>>::get>();
}
 void ::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>::Execute(ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob> jobData, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::____Unity__Jobs__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
} // end anonymous namespace
