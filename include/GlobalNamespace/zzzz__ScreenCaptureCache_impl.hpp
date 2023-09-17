#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ScreenCaptureCache_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType::____GlobalNamespace__ScreenCaptureCache__ScreenshotType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType  ::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType::Game{0};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType  ::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType::Menu{1};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType  ::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType::Other{2};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureCache.GetLastScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D (::GlobalNamespace::ScreenCaptureCache::*)(::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType)>(&::GlobalNamespace::ScreenCaptureCache::GetLastScreenshot)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x267a618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache>::get(),
                            "GetLastScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureCache.StoreScreenshot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureCache::*)(::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType, ::UnityEngine::Texture2D)>(&::GlobalNamespace::ScreenCaptureCache::StoreScreenshot)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x267a2d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache>::get(),
                            "StoreScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureCache::*)()>(&::GlobalNamespace::ScreenCaptureCache::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x267a690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ScreenCaptureCache::__set__cache(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D> ::GlobalNamespace::ScreenCaptureCache::__get__cache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType,::UnityEngine::Texture2D>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Texture2D ::GlobalNamespace::ScreenCaptureCache::GetLastScreenshot(::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType screenshotType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache>::get(),
                            "GetLastScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D, false>(const_cast<void*>(instance), ___internal_method, screenshotType);
}
 void ::GlobalNamespace::ScreenCaptureCache::StoreScreenshot(::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType screenshotType, ::UnityEngine::Texture2D texture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache>::get(),
                            "StoreScreenshot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ScreenCaptureCache__ScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, screenshotType, texture);
}
// Ctor Parameters []
 ::GlobalNamespace::ScreenCaptureCache::ScreenCaptureCache()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ScreenCaptureCache>())) {}
 void ::GlobalNamespace::ScreenCaptureCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
