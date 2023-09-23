#pragma once
#include "Zenject/Internal/zzzz__IDecoratorProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: Zenject::Internal::IDecoratorProvider.GetAllInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::IDecoratorProvider::*)(Zenject::IProvider, Zenject::InjectContext, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&Zenject::Internal::IDecoratorProvider::GetAllInstances)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::Internal::IDecoratorProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::IDecoratorProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void Zenject::Internal::IDecoratorProvider::GetAllInstances(Zenject::IProvider provider, Zenject::InjectContext context, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::IDecoratorProvider>::get(),
                            "GetAllInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, provider, context, buffer);
}
