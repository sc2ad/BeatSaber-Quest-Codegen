#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Unity/XR/Oculus/zzzz__Development_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache  ::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache::NoUserSettingCached{0};
constexpr ::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache  ::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache::UserSettingFalse{1};
constexpr ::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache  ::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache::UserSettingTrue{2};
//  Writing Method size for method: ::Unity::XR::Oculus::Development.TrySetDeveloperMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::Unity::XR::Oculus::Development::TrySetDeveloperMode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2adecec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development>::get(),
                            "TrySetDeveloperMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Development.OverrideDeveloperModeStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::Development::OverrideDeveloperModeStart)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2aded44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development>::get(),
                            "OverrideDeveloperModeStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::Oculus::Development.OverrideDeveloperModeStop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::Oculus::Development::OverrideDeveloperModeStop)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2adee18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development>::get(),
                            "OverrideDeveloperModeStop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Unity::XR::Oculus::Development::__set_s_CachedMode(::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache value)  {
::cordl_internals::setStaticField<::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache, "s_CachedMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development>::get>(std::forward<::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache>(value));
}
 ::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache ::Unity::XR::Oculus::Development::__get_s_CachedMode()  {
return ::cordl_internals::getStaticField<::Unity::XR::Oculus::____Unity__XR__Oculus__Development__UserDeveloperModeSettingCache, "s_CachedMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development>::get>();
}
 void ::Unity::XR::Oculus::Development::TrySetDeveloperMode(bool active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development>::get(),
                            "TrySetDeveloperMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, active);
}
 void ::Unity::XR::Oculus::Development::OverrideDeveloperModeStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development>::get(),
                            "OverrideDeveloperModeStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::Unity::XR::Oculus::Development::OverrideDeveloperModeStop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::Oculus::Development>::get(),
                            "OverrideDeveloperModeStop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
