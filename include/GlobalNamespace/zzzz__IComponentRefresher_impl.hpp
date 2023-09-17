#pragma once
namespace {
#include "GlobalNamespace/zzzz__IComponentRefresher_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IComponentRefresher.__Refresh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IComponentRefresher::*)()>(&::GlobalNamespace::IComponentRefresher::__Refresh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IComponentRefresher),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IComponentRefresher>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::IComponentRefresher::__Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IComponentRefresher>::get(),
                            "__Refresh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
