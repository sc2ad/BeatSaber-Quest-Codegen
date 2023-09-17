#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__RenderModel_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_t_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::RenderModel_t_Packed._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::RenderModel_t_Packed::*)(::OVR::OpenVR::RenderModel_t)>(&::OVR::OpenVR::RenderModel_t_Packed::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2668f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_t_Packed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::RenderModel_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::RenderModel_t_Packed.Unpack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::RenderModel_t_Packed::*)(ByRef<::OVR::OpenVR::RenderModel_t>)>(&::OVR::OpenVR::RenderModel_t_Packed::Unpack)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2668f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_t_Packed>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "rVertexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unVertexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rIndexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "diffuseTextureId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_t_Packed::RenderModel_t_Packed(::cordl_internals::intptr_t rVertexData, uint32_t unVertexCount, ::cordl_internals::intptr_t rIndexData, uint32_t unTriangleCount, int32_t diffuseTextureId) noexcept : ::bs_hook::ValueTypeWrapper() {this->rVertexData = rVertexData;
this->unVertexCount = unVertexCount;
this->rIndexData = rIndexData;
this->unTriangleCount = unTriangleCount;
this->diffuseTextureId = diffuseTextureId;
}
constexpr void ::OVR::OpenVR::RenderModel_t_Packed::__set_rVertexData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::RenderModel_t_Packed::__get_rVertexData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x0>(this->__instance);
}
constexpr void ::OVR::OpenVR::RenderModel_t_Packed::__set_unVertexCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::RenderModel_t_Packed::__get_unVertexCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void ::OVR::OpenVR::RenderModel_t_Packed::__set_rIndexData(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0xc>(this->__instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t ::OVR::OpenVR::RenderModel_t_Packed::__get_rIndexData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0xc>(this->__instance);
}
constexpr void ::OVR::OpenVR::RenderModel_t_Packed::__set_unTriangleCount(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::OVR::OpenVR::RenderModel_t_Packed::__get_unTriangleCount() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->__instance);
}
constexpr void ::OVR::OpenVR::RenderModel_t_Packed::__set_diffuseTextureId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::RenderModel_t_Packed::__get_diffuseTextureId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
 void ::OVR::OpenVR::RenderModel_t_Packed::_ctor(::OVR::OpenVR::RenderModel_t unpacked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_t_Packed>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::RenderModel_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, unpacked);
}
 void ::OVR::OpenVR::RenderModel_t_Packed::Unpack(ByRef<::OVR::OpenVR::RenderModel_t> unpacked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::RenderModel_t_Packed>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::RenderModel_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, unpacked);
}
} // end anonymous namespace
