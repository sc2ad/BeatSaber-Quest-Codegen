#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Keyboard_t_def.hpp"
//  Writing Method size for method: OVR::OpenVR::VREvent_Keyboard_t.get_cNewInput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::VREvent_Keyboard_t::*)()>(&OVR::OpenVR::VREvent_Keyboard_t::get_cNewInput)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2668de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::VREvent_Keyboard_t>::get(),
                            "get_cNewInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "cNewInput0", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput1", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput2", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput3", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput4", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput5", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput6", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cNewInput7", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uUserValue", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VREvent_Keyboard_t::VREvent_Keyboard_t(uint8_t cNewInput0, uint8_t cNewInput1, uint8_t cNewInput2, uint8_t cNewInput3, uint8_t cNewInput4, uint8_t cNewInput5, uint8_t cNewInput6, uint8_t cNewInput7, uint64_t uUserValue) noexcept : ::bs_hook::ValueTypeWrapper() {this->cNewInput0 = cNewInput0;
this->cNewInput1 = cNewInput1;
this->cNewInput2 = cNewInput2;
this->cNewInput3 = cNewInput3;
this->cNewInput4 = cNewInput4;
this->cNewInput5 = cNewInput5;
this->cNewInput6 = cNewInput6;
this->cNewInput7 = cNewInput7;
this->uUserValue = uUserValue;
}
constexpr void OVR::OpenVR::VREvent_Keyboard_t::__set_cNewInput0(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t OVR::OpenVR::VREvent_Keyboard_t::__get_cNewInput0() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Keyboard_t::__set_cNewInput1(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x1>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t OVR::OpenVR::VREvent_Keyboard_t::__get_cNewInput1() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x1>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Keyboard_t::__set_cNewInput2(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x2>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t OVR::OpenVR::VREvent_Keyboard_t::__get_cNewInput2() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x2>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Keyboard_t::__set_cNewInput3(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x3>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t OVR::OpenVR::VREvent_Keyboard_t::__get_cNewInput3() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x3>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Keyboard_t::__set_cNewInput4(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x4>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t OVR::OpenVR::VREvent_Keyboard_t::__get_cNewInput4() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x4>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Keyboard_t::__set_cNewInput5(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x5>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t OVR::OpenVR::VREvent_Keyboard_t::__get_cNewInput5() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x5>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Keyboard_t::__set_cNewInput6(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x6>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t OVR::OpenVR::VREvent_Keyboard_t::__get_cNewInput6() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x6>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Keyboard_t::__set_cNewInput7(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x7>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t OVR::OpenVR::VREvent_Keyboard_t::__get_cNewInput7() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x7>(this->__instance);
}
constexpr void OVR::OpenVR::VREvent_Keyboard_t::__set_uUserValue(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t OVR::OpenVR::VREvent_Keyboard_t::__get_uUserValue() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
 ::StringW OVR::OpenVR::VREvent_Keyboard_t::get_cNewInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVR::OpenVR::VREvent_Keyboard_t>::get(),
                            "get_cNewInput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
