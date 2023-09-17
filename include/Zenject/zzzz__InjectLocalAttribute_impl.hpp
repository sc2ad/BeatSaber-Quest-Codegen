#pragma once
#include "Zenject/zzzz__InjectAttributeBase_impl.hpp"
namespace {
#include "Zenject/zzzz__InjectLocalAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::InjectLocalAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectLocalAttribute::*)()>(&::Zenject::InjectLocalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d40300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectLocalAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Zenject::InjectLocalAttribute::InjectLocalAttribute()  : ::Zenject::InjectAttributeBase(THROW_UNLESS(::il2cpp_utils::New<InjectLocalAttribute>())) {}
 void ::Zenject::InjectLocalAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectLocalAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
