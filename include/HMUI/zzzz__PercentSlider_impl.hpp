#pragma once
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
namespace {
#include "HMUI/zzzz__PercentSlider_def.hpp"
//  Writing Method size for method: ::HMUI::PercentSlider.TextForValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::PercentSlider::*)(float_t)>(&::HMUI::PercentSlider::TextForValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1faf31c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HMUI::PercentSlider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PercentSlider>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PercentSlider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::PercentSlider::*)()>(&::HMUI::PercentSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1faf3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PercentSlider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::HMUI::PercentSlider::TextForValue(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PercentSlider>::get(),
                            "TextForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 ::HMUI::PercentSlider::PercentSlider()  : ::HMUI::RangeValuesTextSlider(THROW_UNLESS(::il2cpp_utils::New<PercentSlider>())) {}
 void ::HMUI::PercentSlider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::PercentSlider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
