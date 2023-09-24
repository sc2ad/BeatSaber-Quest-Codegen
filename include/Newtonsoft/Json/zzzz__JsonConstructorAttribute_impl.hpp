#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConstructorAttribute_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::JsonConstructorAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::JsonConstructorAttribute::*)()>(&Newtonsoft::Json::JsonConstructorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24c737c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonConstructorAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Newtonsoft::Json::JsonConstructorAttribute Newtonsoft::Json::JsonConstructorAttribute::New_ctor()  {
Newtonsoft::Json::JsonConstructorAttribute o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::JsonConstructorAttribute>())};
return o;
}
 void Newtonsoft::Json::JsonConstructorAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::JsonConstructorAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
