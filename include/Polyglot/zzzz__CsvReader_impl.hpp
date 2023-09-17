#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Polyglot/zzzz__CsvReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Polyglot::____Polyglot__CsvReader__ParsingMode::____Polyglot__CsvReader__ParsingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Polyglot::____Polyglot__CsvReader__ParsingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Polyglot::____Polyglot__CsvReader__ParsingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Polyglot::____Polyglot__CsvReader__ParsingMode  ::Polyglot::____Polyglot__CsvReader__ParsingMode::None{0};
constexpr ::Polyglot::____Polyglot__CsvReader__ParsingMode  ::Polyglot::____Polyglot__CsvReader__ParsingMode::OutQuote{1};
constexpr ::Polyglot::____Polyglot__CsvReader__ParsingMode  ::Polyglot::____Polyglot__CsvReader__ParsingMode::InQuote{2};
//  Writing Method size for method: ::Polyglot::CsvReader.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>> (*)(::StringW)>(&::Polyglot::CsvReader::Parse)> {
  constexpr static std::size_t size = 0x7e8;
  constexpr static std::size_t addrs = 0x266f56c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::CsvReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::CsvReader::*)()>(&::Polyglot::CsvReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266fd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>> ::Polyglot::CsvReader::Parse(::StringW src)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>>, false>(nullptr, ___internal_method, src);
}
// Ctor Parameters []
 ::Polyglot::CsvReader::CsvReader()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CsvReader>())) {}
 void ::Polyglot::CsvReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::CsvReader>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
