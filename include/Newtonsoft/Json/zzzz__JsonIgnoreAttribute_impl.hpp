#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "Newtonsoft/Json/zzzz__JsonIgnoreAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonIgnoreAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonIgnoreAttribute::*)()>(&::Newtonsoft::Json::JsonIgnoreAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d129c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonIgnoreAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Newtonsoft::Json::JsonIgnoreAttribute::JsonIgnoreAttribute()  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<JsonIgnoreAttribute>())) {}
 void ::Newtonsoft::Json::JsonIgnoreAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonIgnoreAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace