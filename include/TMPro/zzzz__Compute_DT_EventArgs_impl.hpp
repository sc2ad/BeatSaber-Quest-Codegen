#pragma once
namespace {
#include "TMPro/zzzz__Compute_DT_EventArgs_def.hpp"
#include "TMPro/zzzz__Compute_DistanceTransform_EventTypes_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::TMPro::Compute_DT_EventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::Compute_DT_EventArgs::*)(::TMPro::Compute_DistanceTransform_EventTypes, float_t)>(&::TMPro::Compute_DT_EventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a67a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Compute_DT_EventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::Compute_DistanceTransform_EventTypes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::Compute_DT_EventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::Compute_DT_EventArgs::*)(::TMPro::Compute_DistanceTransform_EventTypes, ::ArrayW<::UnityEngine::Color>)>(&::TMPro::Compute_DT_EventArgs::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a67aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Compute_DT_EventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::Compute_DistanceTransform_EventTypes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::TMPro::Compute_DT_EventArgs::__set_EventType(::TMPro::Compute_DistanceTransform_EventTypes value)  {
::cordl_internals::setInstanceField<::TMPro::Compute_DistanceTransform_EventTypes, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::Compute_DistanceTransform_EventTypes>(value));
}
constexpr ::TMPro::Compute_DistanceTransform_EventTypes ::TMPro::Compute_DT_EventArgs::__get_EventType() const {
return ::cordl_internals::getInstanceField<::TMPro::Compute_DistanceTransform_EventTypes, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::Compute_DT_EventArgs::__set_ProgressPercentage(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::TMPro::Compute_DT_EventArgs::__get_ProgressPercentage() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::TMPro::Compute_DT_EventArgs::__set_Colors(::ArrayW<::UnityEngine::Color> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Color>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Color>>(value));
}
constexpr ::ArrayW<::UnityEngine::Color> ::TMPro::Compute_DT_EventArgs::__get_Colors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Color>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "::TMPro::Compute_DistanceTransform_EventTypes", modifiers: "", def_value: None }, CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: None }]
 ::TMPro::Compute_DT_EventArgs::Compute_DT_EventArgs(::TMPro::Compute_DistanceTransform_EventTypes type, float_t progress)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Compute_DT_EventArgs>(type, progress))) {}
 void ::TMPro::Compute_DT_EventArgs::_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, float_t progress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Compute_DT_EventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::Compute_DistanceTransform_EventTypes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, progress);
}
// Ctor Parameters [CppParam { name: "type", ty: "::TMPro::Compute_DistanceTransform_EventTypes", modifiers: "", def_value: None }, CppParam { name: "colors", ty: "::ArrayW<::UnityEngine::Color>", modifiers: "", def_value: None }]
 ::TMPro::Compute_DT_EventArgs::Compute_DT_EventArgs(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color> colors)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Compute_DT_EventArgs>(type, colors))) {}
 void ::TMPro::Compute_DT_EventArgs::_ctor(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color> colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::Compute_DT_EventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::Compute_DistanceTransform_EventTypes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Color>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, colors);
}
} // end anonymous namespace
