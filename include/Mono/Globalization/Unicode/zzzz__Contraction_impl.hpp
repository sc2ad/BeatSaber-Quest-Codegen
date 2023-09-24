#pragma once
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
//  Writing Method size for method: Mono::Globalization::Unicode::Contraction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::Contraction::*)(int32_t, ::ArrayW<char16_t>, ::StringW, ::ArrayW<uint8_t>)>(&Mono::Globalization::Unicode::Contraction::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22a7f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::Contraction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Globalization::Unicode::Contraction::__set_Index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Globalization::Unicode::Contraction::__get_Index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::Contraction::__set_Source(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> Mono::Globalization::Unicode::Contraction::__get_Source() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::Contraction::__set_Replacement(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Mono::Globalization::Unicode::Contraction::__get_Replacement() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Globalization::Unicode::Contraction::__set_SortKey(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Mono::Globalization::Unicode::Contraction::__get_SortKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Mono::Globalization::Unicode::Contraction Mono::Globalization::Unicode::Contraction::New_ctor(int32_t index, ::ArrayW<char16_t> source, ::StringW replacement, ::ArrayW<uint8_t> sortkey)  {
Mono::Globalization::Unicode::Contraction o{THROW_UNLESS(::il2cpp_utils::New<Mono::Globalization::Unicode::Contraction>(index, source, replacement, sortkey))};
return o;
}
 void Mono::Globalization::Unicode::Contraction::_ctor(int32_t index, ::ArrayW<char16_t> source, ::StringW replacement, ::ArrayW<uint8_t> sortkey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Globalization::Unicode::Contraction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, source, replacement, sortkey);
}
