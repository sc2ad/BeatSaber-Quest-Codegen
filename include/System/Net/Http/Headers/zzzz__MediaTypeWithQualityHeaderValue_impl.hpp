#pragma once
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_impl.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeWithQualityHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
//  Writing Method size for method: System::Net::Http::Headers::MediaTypeWithQualityHeaderValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::*)()>(&System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ac1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::MediaTypeWithQualityHeaderValue.TryParseElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Net::Http::Headers::Lexer, ByRef<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>, ByRef<System::Net::Http::Headers::Token>)>(&System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParseElement)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x26ac1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>::get(),
                            "TryParseElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::Headers::Lexer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Http::Headers::Token>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::MediaTypeWithQualityHeaderValue.TryParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int32_t, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>>)>(&System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26ac314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::MediaTypeWithQualityHeaderValue()  : System::Net::Http::Headers::MediaTypeHeaderValue(THROW_UNLESS(::il2cpp_utils::New<MediaTypeWithQualityHeaderValue>())) {}
 void System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParseElement(System::Net::Http::Headers::Lexer lexer, ByRef<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue> parsedValue, ByRef<System::Net::Http::Headers::Token> t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>::get(),
                            "TryParseElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::Headers::Lexer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Net::Http::Headers::Token>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lexer, parsedValue, t);
}
 bool System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParse(::StringW input, int32_t minimalCount, ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, minimalCount, result);
}
