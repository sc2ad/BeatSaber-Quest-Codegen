#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_TextureMap_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_TextureMap_t_def.hpp"
//  Writing Method size for method: OVR::OpenVR::RenderModel_TextureMap_t_Packed._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::RenderModel_TextureMap_t_Packed::*)(OVR::OpenVR::RenderModel_TextureMap_t)>(&OVR::OpenVR::RenderModel_TextureMap_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2668f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::RenderModel_TextureMap_t_Packed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::RenderModel_TextureMap_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVR::OpenVR::RenderModel_TextureMap_t_Packed.Unpack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::RenderModel_TextureMap_t_Packed::*)(ByRef<OVR::OpenVR::RenderModel_TextureMap_t>)>(&OVR::OpenVR::RenderModel_TextureMap_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2668f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::RenderModel_TextureMap_t_Packed>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::RenderModel_TextureMap_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "unWidth", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unHeight", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rubTextureMapData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::RenderModel_TextureMap_t_Packed::RenderModel_TextureMap_t_Packed(uint16_t unWidth, uint16_t unHeight, ::cordl_internals::intptr_t rubTextureMapData) noexcept : ::bs_hook::ValueTypeWrapper() {this->unWidth = unWidth;
this->unHeight = unHeight;
this->rubTextureMapData = rubTextureMapData;
}
constexpr void OVR::OpenVR::RenderModel_TextureMap_t_Packed::__set_unWidth(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t OVR::OpenVR::RenderModel_TextureMap_t_Packed::__get_unWidth() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::RenderModel_TextureMap_t_Packed::__set_unHeight(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t OVR::OpenVR::RenderModel_TextureMap_t_Packed::__get_unHeight() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void OVR::OpenVR::RenderModel_TextureMap_t_Packed::__set_rubTextureMapData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x4>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t OVR::OpenVR::RenderModel_TextureMap_t_Packed::__get_rubTextureMapData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x4>(this->__instance);
}
 void OVR::OpenVR::RenderModel_TextureMap_t_Packed::_ctor(OVR::OpenVR::RenderModel_TextureMap_t unpacked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::RenderModel_TextureMap_t_Packed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVR::OpenVR::RenderModel_TextureMap_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, unpacked);
}
 void OVR::OpenVR::RenderModel_TextureMap_t_Packed::Unpack(ByRef<OVR::OpenVR::RenderModel_TextureMap_t> unpacked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::RenderModel_TextureMap_t_Packed>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<OVR::OpenVR::RenderModel_TextureMap_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, unpacked);
}
