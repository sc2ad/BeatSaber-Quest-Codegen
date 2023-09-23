#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Microsoft/CodeAnalysis/zzzz__EmbeddedAttribute_def.hpp"
//  Writing Method size for method: Microsoft::CodeAnalysis::EmbeddedAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::CodeAnalysis::EmbeddedAttribute::*)()>(&Microsoft::CodeAnalysis::EmbeddedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a4d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::CodeAnalysis::EmbeddedAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Microsoft::CodeAnalysis::EmbeddedAttribute::EmbeddedAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<EmbeddedAttribute>())) {}
 void Microsoft::CodeAnalysis::EmbeddedAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::CodeAnalysis::EmbeddedAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
