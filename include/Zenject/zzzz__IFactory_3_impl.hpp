#pragma once
namespace {
#include "Zenject/zzzz__IFactory_3_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
//  Writing Method size for method: ::Zenject::IFactory_3.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Zenject::IFactory_3::*)(TParam1, TParam2)>(&::Zenject::IFactory_3::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::IFactory_3),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_3>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::IFactory
constexpr  ::Zenject::IFactory_3::operator ::Zenject::IFactory() const noexcept {
return ::Zenject::IFactory(::bs_hook::Il2CppWrapperType::instance);
}
 TValue ::Zenject::IFactory_3::Create(TParam1 param1, TParam2 param2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_3>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, param1, param2);
}
} // end anonymous namespace
