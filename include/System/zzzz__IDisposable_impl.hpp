#pragma once
namespace {
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::IDisposable.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IDisposable::*)()>(&::System::IDisposable::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IDisposable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IDisposable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::System::IDisposable::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IDisposable>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
