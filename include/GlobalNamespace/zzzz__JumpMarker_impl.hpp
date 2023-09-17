#pragma once
#include "UnityEngine/Timeline/zzzz__Marker_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__JumpMarker_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "GlobalNamespace/zzzz__JumpDestinationMarker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JumpMarker.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PropertyName (::GlobalNamespace::JumpMarker::*)()>(&::GlobalNamespace::JumpMarker::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f838c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpMarker.get_jumpDestination
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::JumpDestinationMarker (::GlobalNamespace::JumpMarker::*)()>(&::GlobalNamespace::JumpMarker::get_jumpDestination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f838d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker>::get(),
                            "get_jumpDestination",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JumpMarker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::JumpMarker::*)()>(&::GlobalNamespace::JumpMarker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f838d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::Playables::INotification
constexpr  ::GlobalNamespace::JumpMarker::operator ::UnityEngine::Playables::INotification() const noexcept {
return ::UnityEngine::Playables::INotification(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::JumpMarker::__set__destination(::GlobalNamespace::JumpDestinationMarker value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::JumpDestinationMarker, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::JumpDestinationMarker>(value));
}
constexpr ::GlobalNamespace::JumpDestinationMarker ::GlobalNamespace::JumpMarker::__get__destination() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::JumpDestinationMarker, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::JumpMarker::__set__id_k__BackingField(::UnityEngine::PropertyName value)  {
::cordl_internals::setInstanceField<::UnityEngine::PropertyName, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::PropertyName>(value));
}
constexpr ::UnityEngine::PropertyName ::GlobalNamespace::JumpMarker::__get__id_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::PropertyName, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::PropertyName ::GlobalNamespace::JumpMarker::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PropertyName, false>(const_cast<void*>(instance), ___internal_method);
}
 ::GlobalNamespace::JumpDestinationMarker ::GlobalNamespace::JumpMarker::get_jumpDestination()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker>::get(),
                            "get_jumpDestination",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JumpDestinationMarker, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::JumpMarker::JumpMarker()  : ::UnityEngine::Timeline::Marker(THROW_UNLESS(::il2cpp_utils::New<JumpMarker>())) {}
 void ::GlobalNamespace::JumpMarker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::JumpMarker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
