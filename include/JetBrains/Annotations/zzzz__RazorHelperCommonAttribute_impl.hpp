#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__RazorHelperCommonAttribute_def.hpp"
//  Writing Method size for method: JetBrains::Annotations::RazorHelperCommonAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::RazorHelperCommonAttribute::*)()>(&JetBrains::Annotations::RazorHelperCommonAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d414a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::RazorHelperCommonAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 JetBrains::Annotations::RazorHelperCommonAttribute::RazorHelperCommonAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<RazorHelperCommonAttribute>())) {}
 void JetBrains::Annotations::RazorHelperCommonAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<JetBrains::Annotations::RazorHelperCommonAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
