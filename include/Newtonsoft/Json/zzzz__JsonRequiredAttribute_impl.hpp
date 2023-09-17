#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "Newtonsoft/Json/zzzz__JsonRequiredAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonRequiredAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonRequiredAttribute::*)()>(&::Newtonsoft::Json::JsonRequiredAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c7f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonRequiredAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Newtonsoft::Json::JsonRequiredAttribute::JsonRequiredAttribute()  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<JsonRequiredAttribute>())) {}
 void ::Newtonsoft::Json::JsonRequiredAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonRequiredAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
