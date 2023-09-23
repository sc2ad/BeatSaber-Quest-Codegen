#pragma once
#include "GlobalNamespace/zzzz__StringBuilderExtension_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: GlobalNamespace::StringBuilderExtension.Swap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder, int32_t, int32_t)>(&GlobalNamespace::StringBuilderExtension::Swap)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1f7b9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StringBuilderExtension>::get(),
                            "Swap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StringBuilderExtension.AppendNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder, int32_t)>(&GlobalNamespace::StringBuilderExtension::AppendNumber)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1f7ba58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StringBuilderExtension>::get(),
                            "AppendNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::StringBuilderExtension.AppendNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Text::StringBuilder, uint32_t)>(&GlobalNamespace::StringBuilderExtension::AppendNumber)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1f7bb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StringBuilderExtension>::get(),
                            "AppendNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::StringBuilderExtension::__set_charToInt(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "charToInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StringBuilderExtension>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> GlobalNamespace::StringBuilderExtension::__get_charToInt()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "charToInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StringBuilderExtension>::get>();
}
 void GlobalNamespace::StringBuilderExtension::Swap(System::Text::StringBuilder sb, int32_t startIndex, int32_t endIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StringBuilderExtension>::get(),
                            "Swap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, startIndex, endIndex);
}
 void GlobalNamespace::StringBuilderExtension::AppendNumber(System::Text::StringBuilder sb, int32_t number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StringBuilderExtension>::get(),
                            "AppendNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, number);
}
 void GlobalNamespace::StringBuilderExtension::AppendNumber(System::Text::StringBuilder sb, uint32_t unumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::StringBuilderExtension>::get(),
                            "AppendNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, unumber);
}
