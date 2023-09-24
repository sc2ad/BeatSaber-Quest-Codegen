#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__OnErrorAttribute_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Serialization::OnErrorAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::OnErrorAttribute::*)()>(&Newtonsoft::Json::Serialization::OnErrorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2517920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::OnErrorAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Newtonsoft::Json::Serialization::OnErrorAttribute Newtonsoft::Json::Serialization::OnErrorAttribute::New_ctor()  {
Newtonsoft::Json::Serialization::OnErrorAttribute o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Serialization::OnErrorAttribute>())};
return o;
}
 void Newtonsoft::Json::Serialization::OnErrorAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::OnErrorAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
