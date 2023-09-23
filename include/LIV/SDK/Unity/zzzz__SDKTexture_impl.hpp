#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTexture_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_FORMAT_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_DEVICE_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_TYPE_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_def.hpp"
//  Writing Method size for method: LIV::SDK::Unity::SDKTexture.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LIV::SDK::Unity::SDKTexture (*)()>(&LIV::SDK::Unity::SDKTexture::get_empty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x209cdc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTexture>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: LIV::SDK::Unity::SDKTexture.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (LIV::SDK::Unity::SDKTexture::*)()>(&LIV::SDK::Unity::SDKTexture::ToString)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x20a309c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(LIV::SDK::Unity::SDKTexture),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTexture>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "id", ty: "LIV::SDK::Unity::TEXTURE_ID", modifiers: "", def_value: Some("{}") }, CppParam { name: "texturePtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SharedHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "device", ty: "LIV::SDK::Unity::TEXTURE_DEVICE", modifiers: "", def_value: Some("{}") }, CppParam { name: "dummy", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "LIV::SDK::Unity::TEXTURE_TYPE", modifiers: "", def_value: Some("{}") }, CppParam { name: "format", ty: "LIV::SDK::Unity::TEXTURE_FORMAT", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorSpace", ty: "LIV::SDK::Unity::TEXTURE_COLOR_SPACE", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr LIV::SDK::Unity::SDKTexture::SDKTexture(LIV::SDK::Unity::TEXTURE_ID id, ::cordl_internals::intptr_t texturePtr, ::cordl_internals::intptr_t SharedHandle, LIV::SDK::Unity::TEXTURE_DEVICE device, int32_t dummy, LIV::SDK::Unity::TEXTURE_TYPE type, LIV::SDK::Unity::TEXTURE_FORMAT format, LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace, int32_t width, int32_t height) noexcept : ::bs_hook::ValueTypeWrapper() {this->id = id;
this->texturePtr = texturePtr;
this->SharedHandle = SharedHandle;
this->device = device;
this->dummy = dummy;
this->type = type;
this->format = format;
this->colorSpace = colorSpace;
this->width = width;
this->height = height;
}
constexpr void LIV::SDK::Unity::SDKTexture::__set_id(LIV::SDK::Unity::TEXTURE_ID value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::TEXTURE_ID, 0x0>(this->__instance, std::forward<LIV::SDK::Unity::TEXTURE_ID>(value));
}
constexpr LIV::SDK::Unity::TEXTURE_ID LIV::SDK::Unity::SDKTexture::__get_id() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::TEXTURE_ID, 0x0>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTexture::__set_texturePtr(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t LIV::SDK::Unity::SDKTexture::__get_texturePtr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x8>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTexture::__set_SharedHandle(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t LIV::SDK::Unity::SDKTexture::__get_SharedHandle() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTexture::__set_device(LIV::SDK::Unity::TEXTURE_DEVICE value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::TEXTURE_DEVICE, 0x18>(this->__instance, std::forward<LIV::SDK::Unity::TEXTURE_DEVICE>(value));
}
constexpr LIV::SDK::Unity::TEXTURE_DEVICE LIV::SDK::Unity::SDKTexture::__get_device() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::TEXTURE_DEVICE, 0x18>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTexture::__set_dummy(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t LIV::SDK::Unity::SDKTexture::__get_dummy() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTexture::__set_type(LIV::SDK::Unity::TEXTURE_TYPE value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::TEXTURE_TYPE, 0x20>(this->__instance, std::forward<LIV::SDK::Unity::TEXTURE_TYPE>(value));
}
constexpr LIV::SDK::Unity::TEXTURE_TYPE LIV::SDK::Unity::SDKTexture::__get_type() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::TEXTURE_TYPE, 0x20>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTexture::__set_format(LIV::SDK::Unity::TEXTURE_FORMAT value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::TEXTURE_FORMAT, 0x24>(this->__instance, std::forward<LIV::SDK::Unity::TEXTURE_FORMAT>(value));
}
constexpr LIV::SDK::Unity::TEXTURE_FORMAT LIV::SDK::Unity::SDKTexture::__get_format() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::TEXTURE_FORMAT, 0x24>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTexture::__set_colorSpace(LIV::SDK::Unity::TEXTURE_COLOR_SPACE value)  {
::cordl_internals::setInstanceField<LIV::SDK::Unity::TEXTURE_COLOR_SPACE, 0x28>(this->__instance, std::forward<LIV::SDK::Unity::TEXTURE_COLOR_SPACE>(value));
}
constexpr LIV::SDK::Unity::TEXTURE_COLOR_SPACE LIV::SDK::Unity::SDKTexture::__get_colorSpace() const {
return ::cordl_internals::getInstanceField<LIV::SDK::Unity::TEXTURE_COLOR_SPACE, 0x28>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTexture::__set_width(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t LIV::SDK::Unity::SDKTexture::__get_width() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->__instance);
}
constexpr void LIV::SDK::Unity::SDKTexture::__set_height(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t LIV::SDK::Unity::SDKTexture::__get_height() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->__instance);
}
 LIV::SDK::Unity::SDKTexture LIV::SDK::Unity::SDKTexture::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTexture>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<LIV::SDK::Unity::SDKTexture, false>(nullptr, ___internal_method);
}
 ::StringW LIV::SDK::Unity::SDKTexture::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LIV::SDK::Unity::SDKTexture>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
