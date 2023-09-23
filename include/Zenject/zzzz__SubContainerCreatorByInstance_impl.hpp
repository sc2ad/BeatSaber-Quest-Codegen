#pragma once
#include "Zenject/zzzz__SubContainerCreatorByInstance_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: Zenject::SubContainerCreatorByInstance._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorByInstance::*)(Zenject::DiContainer)>(&Zenject::SubContainerCreatorByInstance::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d920e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByInstance>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerCreatorByInstance.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (Zenject::SubContainerCreatorByInstance::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>, Zenject::InjectContext)>(&Zenject::SubContainerCreatorByInstance::CreateSubContainer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d9210c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByInstance>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::ISubContainerCreator
constexpr  Zenject::SubContainerCreatorByInstance::operator Zenject::ISubContainerCreator() const noexcept {
return Zenject::ISubContainerCreator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerCreatorByInstance::__set__subcontainer(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::SubContainerCreatorByInstance::__get__subcontainer() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "subcontainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
 Zenject::SubContainerCreatorByInstance::SubContainerCreatorByInstance(Zenject::DiContainer subcontainer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByInstance>(subcontainer))) {}
 void Zenject::SubContainerCreatorByInstance::_ctor(Zenject::DiContainer subcontainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByInstance>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subcontainer);
}
 Zenject::DiContainer Zenject::SubContainerCreatorByInstance::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByInstance>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
