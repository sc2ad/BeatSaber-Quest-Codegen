#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__ItemCanBeNullAttribute_def.hpp"
//  Writing Method size for method: JetBrains::Annotations::ItemCanBeNullAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::ItemCanBeNullAttribute::*)()>(&JetBrains::Annotations::ItemCanBeNullAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d40a74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::ItemCanBeNullAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 JetBrains::Annotations::ItemCanBeNullAttribute JetBrains::Annotations::ItemCanBeNullAttribute::New_ctor()  {
JetBrains::Annotations::ItemCanBeNullAttribute o{THROW_UNLESS(::il2cpp_utils::New<JetBrains::Annotations::ItemCanBeNullAttribute>())};
return o;
}
 void JetBrains::Annotations::ItemCanBeNullAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::ItemCanBeNullAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
