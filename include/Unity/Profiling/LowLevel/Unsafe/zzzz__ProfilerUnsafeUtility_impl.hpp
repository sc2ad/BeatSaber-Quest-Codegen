#pragma once
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerUnsafeUtility_def.hpp"
#include "Unity/Profiling/LowLevel/zzzz__MarkerFlags_def.hpp"
//  Writing Method size for method: Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.CreateMarker
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::StringW, uint16_t, Unity::Profiling::LowLevel::MarkerFlags, int32_t)>(&Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b27b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility>::get(),
                            "CreateMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Profiling::LowLevel::MarkerFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.BeginSample
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::BeginSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b27cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility>::get(),
                            "BeginSample",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility.EndSample
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::intptr_t)>(&Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::EndSample)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b27dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility>::get(),
                            "EndSample",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
 ::cordl_internals::intptr_t Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::CreateMarker(::StringW name, uint16_t categoryId, Unity::Profiling::LowLevel::MarkerFlags flags, int32_t metadataCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility>::get(),
                            "CreateMarker",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Unity::Profiling::LowLevel::MarkerFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, name, categoryId, flags, metadataCount);
}
 void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::BeginSample(::cordl_internals::intptr_t markerPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility>::get(),
                            "BeginSample",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, markerPtr);
}
 void Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility::EndSample(::cordl_internals::intptr_t markerPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility>::get(),
                            "EndSample",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, markerPtr);
}
