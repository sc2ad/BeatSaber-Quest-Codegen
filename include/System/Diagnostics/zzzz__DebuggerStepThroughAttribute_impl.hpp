#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Diagnostics/zzzz__DebuggerStepThroughAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggerStepThroughAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DebuggerStepThroughAttribute::*)()>(&::System::Diagnostics::DebuggerStepThroughAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240bf38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerStepThroughAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Diagnostics::DebuggerStepThroughAttribute::DebuggerStepThroughAttribute()  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<DebuggerStepThroughAttribute>())) {}
 void ::System::Diagnostics::DebuggerStepThroughAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerStepThroughAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
