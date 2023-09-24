#pragma once
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
#include "HMUI/zzzz__CustomFormatRangeValuesSlider_def.hpp"
//  Writing Method size for method: HMUI::CustomFormatRangeValuesSlider.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HMUI::CustomFormatRangeValuesSlider::*)(float_t)>(&HMUI::CustomFormatRangeValuesSlider::TextForValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1faf294;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::CustomFormatRangeValuesSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CustomFormatRangeValuesSlider>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::CustomFormatRangeValuesSlider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::CustomFormatRangeValuesSlider::*)()>(&HMUI::CustomFormatRangeValuesSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1faf304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CustomFormatRangeValuesSlider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::CustomFormatRangeValuesSlider::__set__formatString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x168>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HMUI::CustomFormatRangeValuesSlider::__get__formatString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x168>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW HMUI::CustomFormatRangeValuesSlider::TextForValue(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CustomFormatRangeValuesSlider>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
 HMUI::CustomFormatRangeValuesSlider HMUI::CustomFormatRangeValuesSlider::New_ctor()  {
HMUI::CustomFormatRangeValuesSlider o{THROW_UNLESS(::il2cpp_utils::New<HMUI::CustomFormatRangeValuesSlider>())};
return o;
}
 void HMUI::CustomFormatRangeValuesSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::CustomFormatRangeValuesSlider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
