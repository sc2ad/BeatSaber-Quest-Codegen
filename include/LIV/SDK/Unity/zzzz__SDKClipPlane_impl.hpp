#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKClipPlane_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_def.hpp"
//  Writing Method size for method: LIV::SDK::Unity::SDKClipPlane.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::SDKClipPlane (*)()>(&LIV::SDK::Unity::SDKClipPlane::get_empty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x20a29b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKClipPlane>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKClipPlane.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKClipPlane::*)()>(&LIV::SDK::Unity::SDKClipPlane::ToString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x20a3528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LIV::SDK::Unity::SDKClipPlane),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKClipPlane>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "transform", ty: "LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tesselation", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr LIV::SDK::Unity::SDKClipPlane::SDKClipPlane(LIV::SDK::Unity::SDKMatrix4x4 transform, int32_t width, int32_t height, float_t tesselation) noexcept : ::bs_hook::ValueTypeWrapper() {this->transform = transform;
this->width = width;
this->height = height;
this->tesselation = tesselation;
}
constexpr void LIV::SDK::Unity::SDKClipPlane::__set_transform(LIV::SDK::Unity::SDKMatrix4x4 value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::SDKMatrix4x4, 0x0>(this->__instance, std::forward<LIV::SDK::Unity::SDKMatrix4x4>(value));
}
constexpr LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKClipPlane::__get_transform() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::SDKMatrix4x4, 0x0>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKClipPlane::__set_width(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t LIV::SDK::Unity::SDKClipPlane::__get_width() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKClipPlane::__set_height(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t LIV::SDK::Unity::SDKClipPlane::__get_height() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKClipPlane::__set_tesselation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t LIV::SDK::Unity::SDKClipPlane::__get_tesselation() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->__instance);
}
 LIV::SDK::Unity::SDKClipPlane LIV::SDK::Unity::SDKClipPlane::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKClipPlane>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::SDKClipPlane, false>(nullptr, ___internal_method);
}
 ::StringW LIV::SDK::Unity::SDKClipPlane::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKClipPlane>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
