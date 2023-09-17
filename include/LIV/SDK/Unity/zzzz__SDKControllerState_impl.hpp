#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "LIV/SDK/Unity/zzzz__SDKControllerState_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKControllerState.get_empty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKControllerState (*)()>(&::LIV::SDK::Unity::SDKControllerState::get_empty)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x20a3704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKControllerState>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKControllerState.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKControllerState::*)()>(&::LIV::SDK::Unity::SDKControllerState::ToString)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x20a3750;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::LIV::SDK::Unity::SDKControllerState),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKControllerState>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "hmdposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "hmdrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "calibrationcameraposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "calibrationcamerarotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "camerarotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKControllerState::SDKControllerState(::LIV::SDK::Unity::SDKVector3 hmdposition, ::LIV::SDK::Unity::SDKQuaternion hmdrotation, ::LIV::SDK::Unity::SDKVector3 calibrationcameraposition, ::LIV::SDK::Unity::SDKQuaternion calibrationcamerarotation, ::LIV::SDK::Unity::SDKVector3 cameraposition, ::LIV::SDK::Unity::SDKQuaternion camerarotation, ::LIV::SDK::Unity::SDKVector3 leftposition, ::LIV::SDK::Unity::SDKQuaternion leftrotation, ::LIV::SDK::Unity::SDKVector3 rightposition, ::LIV::SDK::Unity::SDKQuaternion rightrotation) noexcept : ::bs_hook::ValueTypeWrapper() {this->hmdposition = hmdposition;
this->hmdrotation = hmdrotation;
this->calibrationcameraposition = calibrationcameraposition;
this->calibrationcamerarotation = calibrationcamerarotation;
this->cameraposition = cameraposition;
this->camerarotation = camerarotation;
this->leftposition = leftposition;
this->leftrotation = leftrotation;
this->rightposition = rightposition;
this->rightrotation = rightrotation;
}
constexpr void ::LIV::SDK::Unity::SDKControllerState::__set_hmdposition(::LIV::SDK::Unity::SDKVector3 value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKVector3, 0x0>(this->__instance, std::forward<::LIV::SDK::Unity::SDKVector3>(value));
}
constexpr ::LIV::SDK::Unity::SDKVector3 ::LIV::SDK::Unity::SDKControllerState::__get_hmdposition() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x0>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKControllerState::__set_hmdrotation(::LIV::SDK::Unity::SDKQuaternion value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0xc>(this->__instance, std::forward<::LIV::SDK::Unity::SDKQuaternion>(value));
}
constexpr ::LIV::SDK::Unity::SDKQuaternion ::LIV::SDK::Unity::SDKControllerState::__get_hmdrotation() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0xc>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKControllerState::__set_calibrationcameraposition(::LIV::SDK::Unity::SDKVector3 value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKVector3, 0x1c>(this->__instance, std::forward<::LIV::SDK::Unity::SDKVector3>(value));
}
constexpr ::LIV::SDK::Unity::SDKVector3 ::LIV::SDK::Unity::SDKControllerState::__get_calibrationcameraposition() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x1c>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKControllerState::__set_calibrationcamerarotation(::LIV::SDK::Unity::SDKQuaternion value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0x28>(this->__instance, std::forward<::LIV::SDK::Unity::SDKQuaternion>(value));
}
constexpr ::LIV::SDK::Unity::SDKQuaternion ::LIV::SDK::Unity::SDKControllerState::__get_calibrationcamerarotation() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0x28>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKControllerState::__set_cameraposition(::LIV::SDK::Unity::SDKVector3 value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKVector3, 0x38>(this->__instance, std::forward<::LIV::SDK::Unity::SDKVector3>(value));
}
constexpr ::LIV::SDK::Unity::SDKVector3 ::LIV::SDK::Unity::SDKControllerState::__get_cameraposition() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x38>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKControllerState::__set_camerarotation(::LIV::SDK::Unity::SDKQuaternion value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0x44>(this->__instance, std::forward<::LIV::SDK::Unity::SDKQuaternion>(value));
}
constexpr ::LIV::SDK::Unity::SDKQuaternion ::LIV::SDK::Unity::SDKControllerState::__get_camerarotation() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0x44>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKControllerState::__set_leftposition(::LIV::SDK::Unity::SDKVector3 value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKVector3, 0x54>(this->__instance, std::forward<::LIV::SDK::Unity::SDKVector3>(value));
}
constexpr ::LIV::SDK::Unity::SDKVector3 ::LIV::SDK::Unity::SDKControllerState::__get_leftposition() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x54>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKControllerState::__set_leftrotation(::LIV::SDK::Unity::SDKQuaternion value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0x60>(this->__instance, std::forward<::LIV::SDK::Unity::SDKQuaternion>(value));
}
constexpr ::LIV::SDK::Unity::SDKQuaternion ::LIV::SDK::Unity::SDKControllerState::__get_leftrotation() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0x60>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKControllerState::__set_rightposition(::LIV::SDK::Unity::SDKVector3 value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKVector3, 0x70>(this->__instance, std::forward<::LIV::SDK::Unity::SDKVector3>(value));
}
constexpr ::LIV::SDK::Unity::SDKVector3 ::LIV::SDK::Unity::SDKControllerState::__get_rightposition() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKVector3, 0x70>(this->__instance);
}
constexpr void ::LIV::SDK::Unity::SDKControllerState::__set_rightrotation(::LIV::SDK::Unity::SDKQuaternion value)  {
::cordl_internals::setInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0x7c>(this->__instance, std::forward<::LIV::SDK::Unity::SDKQuaternion>(value));
}
constexpr ::LIV::SDK::Unity::SDKQuaternion ::LIV::SDK::Unity::SDKControllerState::__get_rightrotation() const {
return ::cordl_internals::getInstanceField<::LIV::SDK::Unity::SDKQuaternion, 0x7c>(this->__instance);
}
 ::LIV::SDK::Unity::SDKControllerState ::LIV::SDK::Unity::SDKControllerState::get_empty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKControllerState>::get(),
                            "get_empty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKControllerState, false>(nullptr, ___internal_method);
}
 ::StringW ::LIV::SDK::Unity::SDKControllerState::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKControllerState>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
