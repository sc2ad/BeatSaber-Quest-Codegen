#pragma once
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__TimelinePauseMarker_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseMarker.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (::GlobalNamespace::TimelinePauseMarker::*)()>(&::GlobalNamespace::TimelinePauseMarker::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f83a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePauseMarker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimelinePauseMarker::*)()>(&::GlobalNamespace::TimelinePauseMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f83a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::Playables::INotification
constexpr  ::GlobalNamespace::TimelinePauseMarker::operator ::UnityEngine::Playables::INotification() const noexcept {
return ::UnityEngine::Playables::INotification(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::TimelinePauseMarker::__set__id_k__BackingField(::UnityEngine::PropertyName value)  {
::cordl_internals::setInstanceField<::UnityEngine::PropertyName, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::PropertyName>(value));
}
constexpr ::UnityEngine::PropertyName ::GlobalNamespace::TimelinePauseMarker::__get__id_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::PropertyName, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::PropertyName ::GlobalNamespace::TimelinePauseMarker::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::TimelinePauseMarker::TimelinePauseMarker()  : ::UnityEngine::Timeline::Marker(THROW_UNLESS(::il2cpp_utils::New<TimelinePauseMarker>())) {}
 void ::GlobalNamespace::TimelinePauseMarker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelinePauseMarker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
