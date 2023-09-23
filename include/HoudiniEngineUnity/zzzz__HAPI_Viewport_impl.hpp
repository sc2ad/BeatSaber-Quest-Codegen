#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Viewport_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HAPI_Viewport._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HAPI_Viewport::*)(bool)>(&HoudiniEngineUnity::HAPI_Viewport::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x201f6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_Viewport>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HAPI_Viewport.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HAPI_Viewport::*)()>(&HoudiniEngineUnity::HAPI_Viewport::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x201f778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_Viewport>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "rotationQuaternion", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "offset", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_Viewport::HAPI_Viewport(::ArrayW<float_t> position, ::ArrayW<float_t> rotationQuaternion, float_t offset) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->rotationQuaternion = rotationQuaternion;
this->offset = offset;
}
constexpr void HoudiniEngineUnity::HAPI_Viewport::__set_position(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x0>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HAPI_Viewport::__get_position() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_Viewport::__set_rotationQuaternion(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x8>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HAPI_Viewport::__get_rotationQuaternion() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_Viewport::__set_offset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_Viewport::__get_offset() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
 void HoudiniEngineUnity::HAPI_Viewport::_ctor(bool initializeFields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_Viewport>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, initializeFields);
}
 void HoudiniEngineUnity::HAPI_Viewport::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_Viewport>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
