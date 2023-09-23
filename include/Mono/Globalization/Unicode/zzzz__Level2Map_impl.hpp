#pragma once
#include "Mono/Globalization/Unicode/zzzz__Level2Map_def.hpp"
//  Writing Method size for method: Mono::Globalization::Unicode::Level2Map._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::Level2Map::*)(uint8_t, uint8_t)>(&Mono::Globalization::Unicode::Level2Map::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22a809c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::Level2Map>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Globalization::Unicode::Level2Map::__set_Source(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t Mono::Globalization::Unicode::Level2Map::__get_Source() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::Level2Map::__set_Replace(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t Mono::Globalization::Unicode::Level2Map::__get_Replace() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "source", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "replace", ty: "uint8_t", modifiers: "", def_value: None }]
 Mono::Globalization::Unicode::Level2Map::Level2Map(uint8_t source, uint8_t replace)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Level2Map>(source, replace))) {}
 void Mono::Globalization::Unicode::Level2Map::_ctor(uint8_t source, uint8_t replace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::Level2Map>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, source, replace);
}
