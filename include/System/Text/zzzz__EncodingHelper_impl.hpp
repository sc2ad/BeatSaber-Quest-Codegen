#pragma once
namespace {
#include "System/Text/zzzz__EncodingHelper_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Text::EncodingHelper.get_UTF8Unmarked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding (*)()>(&::System::Text::EncodingHelper::get_UTF8Unmarked)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x22e3eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get(),
                            "get_UTF8Unmarked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingHelper.InternalCodePage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<int32_t>)>(&::System::Text::EncodingHelper::InternalCodePage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22e40a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get(),
                            "InternalCodePage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingHelper.GetDefaultEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding (*)()>(&::System::Text::EncodingHelper::GetDefaultEncoding)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x22e0d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get(),
                            "GetDefaultEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::EncodingHelper.InvokeI18N
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::System::Text::EncodingHelper::InvokeI18N)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x22df19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get(),
                            "InvokeI18N",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::Text::EncodingHelper::__set_utf8EncodingWithoutMarkers(::System::Text::Encoding value)  {
::cordl_internals::setStaticField<::System::Text::Encoding, "utf8EncodingWithoutMarkers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get>(std::forward<::System::Text::Encoding>(value));
}
 ::System::Text::Encoding ::System::Text::EncodingHelper::__get_utf8EncodingWithoutMarkers()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding, "utf8EncodingWithoutMarkers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get>();
}
 void ::System::Text::EncodingHelper::__set_lockobj(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "lockobj", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType ::System::Text::EncodingHelper::__get_lockobj()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "lockobj", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get>();
}
 void ::System::Text::EncodingHelper::__set_i18nAssembly(::System::Reflection::Assembly value)  {
::cordl_internals::setStaticField<::System::Reflection::Assembly, "i18nAssembly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get>(std::forward<::System::Reflection::Assembly>(value));
}
 ::System::Reflection::Assembly ::System::Text::EncodingHelper::__get_i18nAssembly()  {
return ::cordl_internals::getStaticField<::System::Reflection::Assembly, "i18nAssembly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get>();
}
 void ::System::Text::EncodingHelper::__set_i18nDisabled(bool value)  {
::cordl_internals::setStaticField<bool, "i18nDisabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get>(std::forward<bool>(value));
}
 bool ::System::Text::EncodingHelper::__get_i18nDisabled()  {
return ::cordl_internals::getStaticField<bool, "i18nDisabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get>();
}
 ::System::Text::Encoding ::System::Text::EncodingHelper::get_UTF8Unmarked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get(),
                            "get_UTF8Unmarked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding, false>(nullptr, ___internal_method);
}
 ::StringW ::System::Text::EncodingHelper::InternalCodePage(ByRef<int32_t> code_page)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get(),
                            "InternalCodePage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, code_page);
}
 ::System::Text::Encoding ::System::Text::EncodingHelper::GetDefaultEncoding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get(),
                            "GetDefaultEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding, false>(nullptr, ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Text::EncodingHelper::InvokeI18N(::StringW name, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::EncodingHelper>::get(),
                            "InvokeI18N",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, name, args);
}
} // end anonymous namespace
