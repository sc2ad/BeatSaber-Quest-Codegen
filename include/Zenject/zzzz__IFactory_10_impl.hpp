#pragma once
namespace {
#include "Zenject/zzzz__IFactory_10_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
//  Writing Method size for method: ::Zenject::IFactory_10.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Zenject::IFactory_10::*)(TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9)>(&::Zenject::IFactory_10::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::IFactory_10),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_10>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::IFactory
constexpr  ::Zenject::IFactory_10::operator ::Zenject::IFactory() const noexcept {
return ::Zenject::IFactory(::bs_hook::Il2CppWrapperType::instance);
}
 TValue ::Zenject::IFactory_10::Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6, TParam7 param7, TParam8 param8, TParam9 param9)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_10>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam7>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam8>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam9>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, param1, param2, param3, param4, param5, param6, param7, param8, param9);
}
} // end anonymous namespace
