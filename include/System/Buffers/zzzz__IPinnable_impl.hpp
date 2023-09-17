#pragma once
namespace {
#include "System/Buffers/zzzz__IPinnable_def.hpp"
//  Writing Method size for method: ::System::Buffers::IPinnable.Unpin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::IPinnable::*)()>(&::System::Buffers::IPinnable::Unpin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Buffers::IPinnable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::IPinnable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::System::Buffers::IPinnable::Unpin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::IPinnable>::get(),
                            "Unpin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
