#pragma once
namespace {
#include "Zenject/zzzz__IFixedTickable_def.hpp"
//  Writing Method size for method: ::Zenject::IFixedTickable.FixedTick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::IFixedTickable::*)()>(&::Zenject::IFixedTickable::FixedTick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::IFixedTickable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFixedTickable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::Zenject::IFixedTickable::FixedTick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFixedTickable>::get(),
                            "FixedTick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
