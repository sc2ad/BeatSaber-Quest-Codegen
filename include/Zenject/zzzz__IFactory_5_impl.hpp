#pragma once
#include "Zenject/zzzz__IFactory_5_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
//  Writing Method size for method: Zenject::IFactory_5.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (Zenject::IFactory_5::*)(TParam1, TParam2, TParam3, TParam4)>(&Zenject::IFactory_5::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IFactory_5),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactory_5>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IFactory
constexpr  Zenject::IFactory_5::operator Zenject::IFactory() const noexcept {
return Zenject::IFactory(::bs_hook::Il2CppWrapperType::instance);
}
 TValue Zenject::IFactory_5::Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactory_5>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4);
}
