#pragma once
namespace {
#include "GlobalNamespace/zzzz__AlphabetScrollInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data::*)(char16_t, int32_t)>(&::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1f74a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data::__set_character(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t ::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data::__get_character() const {
return ::cordl_internals::getInstanceField<char16_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data::__set_cellIdx(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data::__get_cellIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "cellIdx", ty: "int32_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data::____GlobalNamespace__AlphabetScrollInfo__Data(char16_t character, int32_t cellIdx)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__AlphabetScrollInfo__Data>(character, cellIdx))) {}
 void ::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data::_ctor(char16_t character, int32_t cellIdx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__AlphabetScrollInfo__Data>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, character, cellIdx);
}
//  Writing Method size for method: ::GlobalNamespace::AlphabetScrollInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlphabetScrollInfo::*)()>(&::GlobalNamespace::AlphabetScrollInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f74a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlphabetScrollInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::GlobalNamespace::AlphabetScrollInfo::AlphabetScrollInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AlphabetScrollInfo>())) {}
 void ::GlobalNamespace::AlphabetScrollInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlphabetScrollInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
