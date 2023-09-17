#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "TMPro/zzzz__GlyphPairKey_def.hpp"
#include "TMPro/zzzz__TMP_GlyphPairAdjustmentRecord_def.hpp"
//  Writing Method size for method: ::TMPro::GlyphPairKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::GlyphPairKey::*)(uint32_t, uint32_t)>(&::TMPro::GlyphPairKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a7a924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphPairKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::GlyphPairKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::GlyphPairKey::*)(::TMPro::TMP_GlyphPairAdjustmentRecord)>(&::TMPro::GlyphPairKey::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a722a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphPairKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_GlyphPairAdjustmentRecord>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "firstGlyphIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "secondGlyphIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::GlyphPairKey::GlyphPairKey(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex, uint32_t key) noexcept : ::bs_hook::ValueTypeWrapper() {this->firstGlyphIndex = firstGlyphIndex;
this->secondGlyphIndex = secondGlyphIndex;
this->key = key;
}
constexpr void ::TMPro::GlyphPairKey::__set_firstGlyphIndex(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::TMPro::GlyphPairKey::__get_firstGlyphIndex() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::TMPro::GlyphPairKey::__set_secondGlyphIndex(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::TMPro::GlyphPairKey::__get_secondGlyphIndex() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void ::TMPro::GlyphPairKey::__set_key(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::TMPro::GlyphPairKey::__get_key() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
 void ::TMPro::GlyphPairKey::_ctor(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphPairKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, firstGlyphIndex, secondGlyphIndex);
}
 void ::TMPro::GlyphPairKey::_ctor(::TMPro::TMP_GlyphPairAdjustmentRecord record)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphPairKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_GlyphPairAdjustmentRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, record);
}
} // end anonymous namespace
