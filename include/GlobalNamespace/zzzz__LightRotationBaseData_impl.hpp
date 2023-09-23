#pragma once
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
//  Writing Method size for method: GlobalNamespace::LightRotationBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationBaseData::*)(float_t, bool, GlobalNamespace::EaseType, float_t, int32_t, GlobalNamespace::LightRotationDirection)>(&GlobalNamespace::LightRotationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21d8438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationBaseData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightRotationDirection>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightRotationBaseData::__set_beat(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightRotationBaseData::__get_beat() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationBaseData::__set_usePreviousEventRotationValue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LightRotationBaseData::__get_usePreviousEventRotationValue() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationBaseData::__set_easeType(GlobalNamespace::EaseType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EaseType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EaseType>(value));
}
constexpr GlobalNamespace::EaseType GlobalNamespace::LightRotationBaseData::__get_easeType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EaseType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationBaseData::__set_rotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightRotationBaseData::__get_rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationBaseData::__set_loopsCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LightRotationBaseData::__get_loopsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationBaseData::__set_rotationDirection(GlobalNamespace::LightRotationDirection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightRotationDirection, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightRotationDirection>(value));
}
constexpr GlobalNamespace::LightRotationDirection GlobalNamespace::LightRotationBaseData::__get_rotationDirection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightRotationDirection, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "usePreviousEventRotationValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "loopsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rotationDirection", ty: "GlobalNamespace::LightRotationDirection", modifiers: "", def_value: None }]
 GlobalNamespace::LightRotationBaseData::LightRotationBaseData(float_t beat, bool usePreviousEventRotationValue, GlobalNamespace::EaseType easeType, float_t rotation, int32_t loopsCount, GlobalNamespace::LightRotationDirection rotationDirection)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LightRotationBaseData>(beat, usePreviousEventRotationValue, easeType, rotation, loopsCount, rotationDirection))) {}
 void GlobalNamespace::LightRotationBaseData::_ctor(float_t beat, bool usePreviousEventRotationValue, GlobalNamespace::EaseType easeType, float_t rotation, int32_t loopsCount, GlobalNamespace::LightRotationDirection rotationDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationBaseData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightRotationDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beat, usePreviousEventRotationValue, easeType, rotation, loopsCount, rotationDirection);
}
