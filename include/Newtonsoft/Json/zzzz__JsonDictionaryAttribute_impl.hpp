#pragma once
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_impl.hpp"
namespace {
#include "Newtonsoft/Json/zzzz__JsonDictionaryAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonDictionaryAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonDictionaryAttribute::*)()>(&::Newtonsoft::Json::JsonDictionaryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c7384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonDictionaryAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonDictionaryAttribute::*)(::StringW)>(&::Newtonsoft::Json::JsonDictionaryAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24c7394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Newtonsoft::Json::JsonDictionaryAttribute::JsonDictionaryAttribute()  : ::Newtonsoft::Json::JsonContainerAttribute(THROW_UNLESS(::il2cpp_utils::New<JsonDictionaryAttribute>())) {}
 void ::Newtonsoft::Json::JsonDictionaryAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }]
 ::Newtonsoft::Json::JsonDictionaryAttribute::JsonDictionaryAttribute(::StringW id)  : ::Newtonsoft::Json::JsonContainerAttribute(THROW_UNLESS(::il2cpp_utils::New<JsonDictionaryAttribute>(id))) {}
 void ::Newtonsoft::Json::JsonDictionaryAttribute::_ctor(::StringW id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonDictionaryAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id);
}
} // end anonymous namespace
