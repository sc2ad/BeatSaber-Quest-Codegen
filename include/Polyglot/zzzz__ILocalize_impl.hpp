#pragma once
namespace {
#include "Polyglot/zzzz__ILocalize_def.hpp"
//  Writing Method size for method: ::Polyglot::ILocalize.OnLocalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::ILocalize::*)()>(&::Polyglot::ILocalize::OnLocalize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Polyglot::ILocalize),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::ILocalize>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::Polyglot::ILocalize::OnLocalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::ILocalize>::get(),
                            "OnLocalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace