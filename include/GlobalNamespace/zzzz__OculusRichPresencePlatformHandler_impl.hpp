#pragma once
namespace {
#include "GlobalNamespace/zzzz__OculusRichPresencePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresencePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusRichPresencePlatformHandler.SetPresence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusRichPresencePlatformHandler::*)(::GlobalNamespace::IRichPresenceData)>(&::GlobalNamespace::OculusRichPresencePlatformHandler::SetPresence)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2229f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler>::get(),
                            "SetPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRichPresenceData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusRichPresencePlatformHandler.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusRichPresencePlatformHandler::*)()>(&::GlobalNamespace::OculusRichPresencePlatformHandler::Clear)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x222a240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusRichPresencePlatformHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusRichPresencePlatformHandler::*)()>(&::GlobalNamespace::OculusRichPresencePlatformHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222a2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IRichPresencePlatformHandler
constexpr  ::GlobalNamespace::OculusRichPresencePlatformHandler::operator ::GlobalNamespace::IRichPresencePlatformHandler() const noexcept {
return ::GlobalNamespace::IRichPresencePlatformHandler(::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::OculusRichPresencePlatformHandler::SetPresence(::GlobalNamespace::IRichPresenceData richPresenceData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler>::get(),
                            "SetPresence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRichPresenceData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, richPresenceData);
}
 void ::GlobalNamespace::OculusRichPresencePlatformHandler::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::OculusRichPresencePlatformHandler::OculusRichPresencePlatformHandler()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OculusRichPresencePlatformHandler>())) {}
 void ::GlobalNamespace::OculusRichPresencePlatformHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusRichPresencePlatformHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
