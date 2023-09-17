#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__DefaultContractResolver_impl.hpp"
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__CamelCasePropertyNamesContractResolver_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)()>(&::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24f6bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver.ResolvePropertyName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::*)(::StringW)>(&::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolvePropertyName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24f6c78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::CamelCasePropertyNamesContractResolver()  : ::Newtonsoft::Json::Serialization::DefaultContractResolver(THROW_UNLESS(::il2cpp_utils::New<CamelCasePropertyNamesContractResolver>())) {}
 void ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver::ResolvePropertyName(::StringW propertyName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::CamelCasePropertyNamesContractResolver>::get(),
                            "ResolvePropertyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, propertyName);
}
} // end anonymous namespace
