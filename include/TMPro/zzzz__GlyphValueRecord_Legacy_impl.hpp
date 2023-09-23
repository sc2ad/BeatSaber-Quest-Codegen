#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__GlyphValueRecord_Legacy_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphValueRecord_def.hpp"
//  Writing Method size for method: TMPro::GlyphValueRecord_Legacy._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::GlyphValueRecord_Legacy::*)(UnityEngine::TextCore::LowLevel::GlyphValueRecord)>(&TMPro::GlyphValueRecord_Legacy::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a7897c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::GlyphValueRecord_Legacy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphValueRecord>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: TMPro::GlyphValueRecord_Legacy.op_Addition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::GlyphValueRecord_Legacy (*)(TMPro::GlyphValueRecord_Legacy, TMPro::GlyphValueRecord_Legacy)>(&TMPro::GlyphValueRecord_Legacy::op_Addition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a789dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::GlyphValueRecord_Legacy>::get(),
                            "op_Addition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::GlyphValueRecord_Legacy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::GlyphValueRecord_Legacy>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "xPlacement", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yPlacement", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::GlyphValueRecord_Legacy::GlyphValueRecord_Legacy(float_t xPlacement, float_t yPlacement, float_t xAdvance, float_t yAdvance) noexcept : ::bs_hook::ValueTypeWrapper() {this->xPlacement = xPlacement;
this->yPlacement = yPlacement;
this->xAdvance = xAdvance;
this->yAdvance = yAdvance;
}
constexpr void TMPro::GlyphValueRecord_Legacy::__set_xPlacement(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::GlyphValueRecord_Legacy::__get_xPlacement() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void TMPro::GlyphValueRecord_Legacy::__set_yPlacement(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::GlyphValueRecord_Legacy::__get_yPlacement() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void TMPro::GlyphValueRecord_Legacy::__set_xAdvance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::GlyphValueRecord_Legacy::__get_xAdvance() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void TMPro::GlyphValueRecord_Legacy::__set_yAdvance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::GlyphValueRecord_Legacy::__get_yAdvance() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
 void TMPro::GlyphValueRecord_Legacy::_ctor(UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::GlyphValueRecord_Legacy>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphValueRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, valueRecord);
}
 TMPro::GlyphValueRecord_Legacy TMPro::GlyphValueRecord_Legacy::op_Addition(TMPro::GlyphValueRecord_Legacy a, TMPro::GlyphValueRecord_Legacy b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMPro::GlyphValueRecord_Legacy>::get(),
                            "op_Addition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::GlyphValueRecord_Legacy>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TMPro::GlyphValueRecord_Legacy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TMPro::GlyphValueRecord_Legacy, false>(nullptr, ___internal_method, a, b);
}
