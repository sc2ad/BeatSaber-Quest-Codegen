#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope::*)(::cordl_internals::intptr_t)>(&::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b27c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope::*)()>(&::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b27d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope::operator ::System::IDisposable() const {
return ::System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope::____Unity__Profiling__ProfilerMarker__AutoScope(::cordl_internals::intptr_t m_Ptr) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Ptr = m_Ptr;
}
constexpr void ::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope::__set_m_Ptr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
 void ::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope::_ctor(::cordl_internals::intptr_t markerPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, markerPtr);
}
 void ::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::ProfilerMarker::*)(::StringW)>(&::Unity::Profiling::ProfilerMarker::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b27b20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerMarker.Auto
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope (::Unity::Profiling::ProfilerMarker::*)()>(&::Unity::Profiling::ProfilerMarker::Auto)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b27bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker>::get(),
                            "Auto",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerMarker::ProfilerMarker(::cordl_internals::intptr_t m_Ptr) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Ptr = m_Ptr;
}
constexpr void ::Unity::Profiling::ProfilerMarker::__set_m_Ptr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::Unity::Profiling::ProfilerMarker::__get_m_Ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
 void ::Unity::Profiling::ProfilerMarker::_ctor(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name);
}
 ::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope ::Unity::Profiling::ProfilerMarker::Auto()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker>::get(),
                            "Auto",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::____Unity__Profiling__ProfilerMarker__AutoScope, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
