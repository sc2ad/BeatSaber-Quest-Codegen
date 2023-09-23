#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__NonEventAttribute_def.hpp"
//  Writing Method size for method: System::Diagnostics::Tracing::NonEventAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::NonEventAttribute::*)()>(&System::Diagnostics::Tracing::NonEventAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240e264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Tracing::NonEventAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Diagnostics::Tracing::NonEventAttribute::NonEventAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<NonEventAttribute>())) {}
 void System::Diagnostics::Tracing::NonEventAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Tracing::NonEventAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
