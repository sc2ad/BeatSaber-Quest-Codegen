#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspMvcDisplayTemplateAttribute_def.hpp"
//  Writing Method size for method: JetBrains::Annotations::AspMvcDisplayTemplateAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::AspMvcDisplayTemplateAttribute::*)()>(&JetBrains::Annotations::AspMvcDisplayTemplateAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d41130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::AspMvcDisplayTemplateAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 JetBrains::Annotations::AspMvcDisplayTemplateAttribute::AspMvcDisplayTemplateAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<AspMvcDisplayTemplateAttribute>())) {}
 void JetBrains::Annotations::AspMvcDisplayTemplateAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::AspMvcDisplayTemplateAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
