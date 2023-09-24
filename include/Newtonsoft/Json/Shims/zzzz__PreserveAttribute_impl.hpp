#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/Shims/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Shims::PreserveAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Shims::PreserveAttribute::*)()>(&Newtonsoft::Json::Shims::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f2324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Shims::PreserveAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Newtonsoft::Json::Shims::PreserveAttribute Newtonsoft::Json::Shims::PreserveAttribute::New_ctor()  {
Newtonsoft::Json::Shims::PreserveAttribute o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Shims::PreserveAttribute>())};
return o;
}
 void Newtonsoft::Json::Shims::PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Shims::PreserveAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
