#pragma once
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: Zenject::ISubContainerCreator.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (Zenject::ISubContainerCreator::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>, Zenject::InjectContext)>(&Zenject::ISubContainerCreator::CreateSubContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::ISubContainerCreator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ISubContainerCreator>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 Zenject::DiContainer Zenject::ISubContainerCreator::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ISubContainerCreator>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
