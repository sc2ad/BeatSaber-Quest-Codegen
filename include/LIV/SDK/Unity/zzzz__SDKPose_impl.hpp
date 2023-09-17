#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "LIV/SDK/Unity/zzzz__SDKPose_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPose.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKPose (*)()>(&::LIV::SDK::Unity::SDKPose::get_empty)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x209d734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPose>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKPose.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKPose::*)()>(&::LIV::SDK::Unity::SDKPose::ToString)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x20a3ab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LIV::SDK::Unity::SDKPose),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPose>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "projectionMatrix", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "localPosition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localRotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "verticalFieldOfView", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearClipPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "farClipPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unused0", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unused1", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKPose::SDKPose(::LIV::SDK::Unity::SDKMatrix4x4 projectionMatrix, ::LIV::SDK::Unity::SDKVector3 localPosition, ::LIV::SDK::Unity::SDKQuaternion localRotation, float_t verticalFieldOfView, float_t nearClipPlane, float_t farClipPlane, int32_t unused0, int32_t unused1) noexcept : ::bs_hook::ValueTypeWrapper() {this->projectionMatrix = projectionMatrix;
this->localPosition = localPosition;
this->localRotation = localRotation;
this->verticalFieldOfView = verticalFieldOfView;
this->nearClipPlane = nearClipPlane;
this->farClipPlane = farClipPlane;
this->unused0 = unused0;
this->unused1 = unused1;
}
constexpr void ::LIV::SDK::Unity::SDKPose::__set_projectionMatrix(::LIV::SDK::Unity::SDKMatrix4x4 value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKMatrix4x4, 0x0>(this->__instance, std::forward<::LIV::SDK::Unity::SDKMatrix4x4>(value));
}
constexpr ::LIV::SDK::Unity::SDKMatrix4x4 ::LIV::SDK::Unity::SDKPose::__get_projectionMatrix() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKMatrix4x4, 0x0>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPose::__set_localPosition(::LIV::SDK::Unity::SDKVector3 value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKVector3, 0x40>(this->__instance, std::forward<::LIV::SDK::Unity::SDKVector3>(value));
}
constexpr ::LIV::SDK::Unity::SDKVector3 ::LIV::SDK::Unity::SDKPose::__get_localPosition() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x40>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPose::__set_localRotation(::LIV::SDK::Unity::SDKQuaternion value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0x4c>(this->__instance, std::forward<::LIV::SDK::Unity::SDKQuaternion>(value));
}
constexpr ::LIV::SDK::Unity::SDKQuaternion ::LIV::SDK::Unity::SDKPose::__get_localRotation() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0x4c>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPose::__set_verticalFieldOfView(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::LIV::SDK::Unity::SDKPose::__get_verticalFieldOfView() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPose::__set_nearClipPlane(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::LIV::SDK::Unity::SDKPose::__get_nearClipPlane() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPose::__set_farClipPlane(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::LIV::SDK::Unity::SDKPose::__get_farClipPlane() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPose::__set_unused0(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LIV::SDK::Unity::SDKPose::__get_unused0() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKPose::__set_unused1(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::LIV::SDK::Unity::SDKPose::__get_unused1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this->__instance);
}
 ::LIV::SDK::Unity::SDKPose ::LIV::SDK::Unity::SDKPose::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPose>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKPose, false>(nullptr, ___internal_method);
}
 ::StringW ::LIV::SDK::Unity::SDKPose::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKPose>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
