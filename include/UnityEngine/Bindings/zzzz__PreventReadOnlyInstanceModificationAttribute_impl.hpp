#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "UnityEngine/Bindings/zzzz__PreventReadOnlyInstanceModificationAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute::*)()>(&::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba1824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute::PreventReadOnlyInstanceModificationAttribute()  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<PreventReadOnlyInstanceModificationAttribute>())) {}
 void ::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::PreventReadOnlyInstanceModificationAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace