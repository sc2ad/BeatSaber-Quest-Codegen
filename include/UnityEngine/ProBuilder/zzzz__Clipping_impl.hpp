#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/ProBuilder/zzzz__Clipping_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode::____UnityEngine__ProBuilder__Clipping__OutCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode::Inside{0};
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode::Left{1};
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode::Right{2};
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode::Bottom{4};
constexpr ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode  ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode::Top{8};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Clipping.ComputeOutCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode (*)(::UnityEngine::Rect, float_t, float_t)>(&::UnityEngine::ProBuilder::Clipping::ComputeOutCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29a8898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping>::get(),
                            "ComputeOutCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Clipping.RectContainsLineSegment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rect, float_t, float_t, float_t, float_t)>(&::UnityEngine::ProBuilder::Clipping::RectContainsLineSegment)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x29a8934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping>::get(),
                            "RectContainsLineSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
 ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode ::UnityEngine::ProBuilder::Clipping::ComputeOutCode(::UnityEngine::Rect rect, float_t x, float_t y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping>::get(),
                            "ComputeOutCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__Clipping__OutCode, false>(nullptr, ___internal_method, rect, x, y);
}
 bool ::UnityEngine::ProBuilder::Clipping::RectContainsLineSegment(::UnityEngine::Rect rect, float_t x0, float_t y0, float_t x1, float_t y1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::Clipping>::get(),
                            "RectContainsLineSegment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rect, x0, y0, x1, y1);
}
} // end anonymous namespace
