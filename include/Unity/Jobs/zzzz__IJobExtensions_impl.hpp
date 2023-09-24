#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "Unity/Jobs/zzzz__IJobExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlaneMeshFilter_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayDisposeJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Jobs/zzzz__IJobExtensions_def.hpp"
/// @param dependsOn: Unity::Jobs::JobHandle (default: {})
template<typename T>
 Unity::Jobs::JobHandle Unity::Jobs::IJobExtensions::Schedule(T jobData, Unity::Jobs::JobHandle dependsOn)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::IJobExtensions>::get(),
                        "Schedule",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Jobs::JobHandle>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, jobData, dependsOn);
}
//  Writing Method size for method: GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::*)(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>(object, method))};
return o;
}
 void GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::Invoke(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::*)(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob> GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>(object, method))};
return o;
}
 void GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::Invoke(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::*)(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob> GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>(object, method))};
return o;
}
 void GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::Invoke(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>::*)(ByRef<Unity::Collections::NativeArrayDisposeJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
 GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob> GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>::New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>>(object, method))};
return o;
}
 void GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 void GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>::Invoke(ByRef<Unity::Collections::NativeArrayDisposeJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::Unity__Jobs__IJobExtensions__JobStruct_1__ExecuteJobFunction<Unity::Collections::NativeArrayDisposeJob>>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeArrayDisposeJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::__set_jobReflectionData(::cordl_internals::intptr_t value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
 ::cordl_internals::intptr_t Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::__get_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get>();
}
 void Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::Execute(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::__set_jobReflectionData(::cordl_internals::intptr_t value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
 ::cordl_internals::intptr_t Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::__get_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>::get>();
}
 void Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>::Execute(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryLengthJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::__set_jobReflectionData(::cordl_internals::intptr_t value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
 ::cordl_internals::intptr_t Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::__get_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>::get>();
}
 void Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>::Execute(ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__OVRScenePlane__GetBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<Unity::Collections::NativeArrayDisposeJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeArrayDisposeJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob>::__set_jobReflectionData(::cordl_internals::intptr_t value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
 ::cordl_internals::intptr_t Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob>::__get_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob>>::get>();
}
 void Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob>::Execute(ByRef<Unity::Collections::NativeArrayDisposeJob> data, ::cordl_internals::intptr_t additionalPtr, ::cordl_internals::intptr_t bufferRangePatchData, ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges> ranges, int32_t jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Jobs::Unity__Jobs__IJobExtensions__JobStruct_1<Unity::Collections::NativeArrayDisposeJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Collections::NativeArrayDisposeJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
