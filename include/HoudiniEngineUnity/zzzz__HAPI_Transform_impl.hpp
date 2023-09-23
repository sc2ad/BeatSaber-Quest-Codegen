#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HAPI_Transform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HAPI_Transform::*)(bool)>(&HoudiniEngineUnity::HAPI_Transform::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2016108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_Transform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HAPI_Transform.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HAPI_Transform::*)()>(&HoudiniEngineUnity::HAPI_Transform::Init)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x201f14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_Transform>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "position", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "rotationQuaternion", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "scale", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "shear", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "rstOrder", ty: "HoudiniEngineUnity::HAPI_RSTOrder", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_Transform::HAPI_Transform(::ArrayW<float_t> position, ::ArrayW<float_t> rotationQuaternion, ::ArrayW<float_t> scale, ::ArrayW<float_t> shear, HoudiniEngineUnity::HAPI_RSTOrder rstOrder) noexcept : ::bs_hook::ValueTypeWrapper() {this->position = position;
this->rotationQuaternion = rotationQuaternion;
this->scale = scale;
this->shear = shear;
this->rstOrder = rstOrder;
}
constexpr void HoudiniEngineUnity::HAPI_Transform::__set_position(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x0>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HAPI_Transform::__get_position() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_Transform::__set_rotationQuaternion(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x8>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HAPI_Transform::__get_rotationQuaternion() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_Transform::__set_scale(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x10>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HAPI_Transform::__get_scale() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x10>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_Transform::__set_shear(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x18>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HAPI_Transform::__get_shear() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x18>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_Transform::__set_rstOrder(HoudiniEngineUnity::HAPI_RSTOrder value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_RSTOrder, 0x20>(this->__instance, std::forward<HoudiniEngineUnity::HAPI_RSTOrder>(value));
}
constexpr HoudiniEngineUnity::HAPI_RSTOrder HoudiniEngineUnity::HAPI_Transform::__get_rstOrder() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_RSTOrder, 0x20>(this->__instance);
}
 void HoudiniEngineUnity::HAPI_Transform::_ctor(bool initializeFields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_Transform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, initializeFields);
}
 void HoudiniEngineUnity::HAPI_Transform::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_Transform>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
