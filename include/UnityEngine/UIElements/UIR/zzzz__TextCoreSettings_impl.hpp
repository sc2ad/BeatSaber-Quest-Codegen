#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextCoreSettings_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::UIR::TextCoreSettings.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::TextCoreSettings::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::UIElements::UIR::TextCoreSettings::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2c53be0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UIR::TextCoreSettings),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::TextCoreSettings>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::TextCoreSettings.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::TextCoreSettings::*)(UnityEngine::UIElements::UIR::TextCoreSettings)>(&UnityEngine::UIElements::UIR::TextCoreSettings::Equals)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c53c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::TextCoreSettings>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::TextCoreSettings>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::TextCoreSettings.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::UIR::TextCoreSettings::*)()>(&UnityEngine::UIElements::UIR::TextCoreSettings::GetHashCode)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2c53d58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UIElements::UIR::TextCoreSettings),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::TextCoreSettings>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::UIR::TextCoreSettings>
constexpr  UnityEngine::UIElements::UIR::TextCoreSettings::operator System::IEquatable_1<UnityEngine::UIElements::UIR::TextCoreSettings>() const {
return System::IEquatable_1<UnityEngine::UIElements::UIR::TextCoreSettings>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "faceColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "outlineColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "outlineWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlayColor", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlayOffset", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlaySoftness", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::TextCoreSettings::TextCoreSettings(UnityEngine::Color faceColor, UnityEngine::Color outlineColor, float_t outlineWidth, UnityEngine::Color underlayColor, UnityEngine::Vector2 underlayOffset, float_t underlaySoftness) noexcept : ::bs_hook::ValueTypeWrapper() {this->faceColor = faceColor;
this->outlineColor = outlineColor;
this->outlineWidth = outlineWidth;
this->underlayColor = underlayColor;
this->underlayOffset = underlayOffset;
this->underlaySoftness = underlaySoftness;
}
constexpr void UnityEngine::UIElements::UIR::TextCoreSettings::__set_faceColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x0>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UIR::TextCoreSettings::__get_faceColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::TextCoreSettings::__set_outlineColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x10>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UIR::TextCoreSettings::__get_outlineColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::TextCoreSettings::__set_outlineWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UIR::TextCoreSettings::__get_outlineWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::TextCoreSettings::__set_underlayColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x24>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::UIR::TextCoreSettings::__get_underlayColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x24>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::TextCoreSettings::__set_underlayOffset(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x34>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UIR::TextCoreSettings::__get_underlayOffset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x34>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::TextCoreSettings::__set_underlaySoftness(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::UIR::TextCoreSettings::__get_underlaySoftness() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->__instance);
}
 bool UnityEngine::UIElements::UIR::TextCoreSettings::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::TextCoreSettings>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool UnityEngine::UIElements::UIR::TextCoreSettings::Equals(UnityEngine::UIElements::UIR::TextCoreSettings other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::TextCoreSettings>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::TextCoreSettings>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t UnityEngine::UIElements::UIR::TextCoreSettings::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::TextCoreSettings>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
