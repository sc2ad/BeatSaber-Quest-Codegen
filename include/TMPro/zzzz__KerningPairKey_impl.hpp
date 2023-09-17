#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "TMPro/zzzz__KerningPairKey_def.hpp"
//  Writing Method size for method: ::TMPro::KerningPairKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::KerningPairKey::*)(uint32_t, uint32_t)>(&::TMPro::KerningPairKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a7896c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::KerningPairKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "ascii_Left", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascii_Right", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::KerningPairKey::KerningPairKey(uint32_t ascii_Left, uint32_t ascii_Right, uint32_t key) noexcept : ::bs_hook::ValueTypeWrapper() {this->ascii_Left = ascii_Left;
this->ascii_Right = ascii_Right;
this->key = key;
}
constexpr void ::TMPro::KerningPairKey::__set_ascii_Left(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::TMPro::KerningPairKey::__get_ascii_Left() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::TMPro::KerningPairKey::__set_ascii_Right(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::TMPro::KerningPairKey::__get_ascii_Right() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void ::TMPro::KerningPairKey::__set_key(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::TMPro::KerningPairKey::__get_key() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
 void ::TMPro::KerningPairKey::_ctor(uint32_t ascii_left, uint32_t ascii_right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::KerningPairKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, ascii_left, ascii_right);
}
} // end anonymous namespace
