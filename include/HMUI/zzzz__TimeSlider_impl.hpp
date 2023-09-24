#pragma once
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HMUI::HMUI__TimeSlider__TimeType::HMUI__TimeSlider__TimeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HMUI::HMUI__TimeSlider__TimeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::HMUI__TimeSlider__TimeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HMUI::HMUI__TimeSlider__TimeType  HMUI::HMUI__TimeSlider__TimeType::Default{0};
constexpr HMUI::HMUI__TimeSlider__TimeType  HMUI::HMUI__TimeSlider__TimeType::Miliseconds{1};
//  Writing Method size for method: HMUI::TimeSlider.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HMUI::TimeSlider::*)(float_t)>(&HMUI::TimeSlider::TextForValue)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x1fb103c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::TimeSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TimeSlider>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::TimeSlider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TimeSlider::*)()>(&HMUI::TimeSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1fb1290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TimeSlider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::TimeSlider::__set__timeType(HMUI::HMUI__TimeSlider__TimeType value)  {
::cordl_internals::setInstanceField<HMUI::HMUI__TimeSlider__TimeType, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::HMUI__TimeSlider__TimeType>(value));
}
constexpr HMUI::HMUI__TimeSlider__TimeType HMUI::TimeSlider::__get__timeType() const {
return ::cordl_internals::getInstanceField<HMUI::HMUI__TimeSlider__TimeType, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW HMUI::TimeSlider::TextForValue(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TimeSlider>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
 HMUI::TimeSlider HMUI::TimeSlider::New_ctor()  {
HMUI::TimeSlider o{THROW_UNLESS(::il2cpp_utils::New<HMUI::TimeSlider>())};
return o;
}
 void HMUI::TimeSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TimeSlider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
