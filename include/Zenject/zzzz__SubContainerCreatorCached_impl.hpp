#pragma once
#include "Zenject/zzzz__SubContainerCreatorCached_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
//  Writing Method size for method: Zenject::SubContainerCreatorCached._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorCached::*)(Zenject::ISubContainerCreator)>(&Zenject::SubContainerCreatorCached::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d93ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorCached>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ISubContainerCreator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerCreatorCached.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (Zenject::SubContainerCreatorCached::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>, Zenject::InjectContext)>(&Zenject::SubContainerCreatorCached::CreateSubContainer)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2d93ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorCached>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::ISubContainerCreator
constexpr  Zenject::SubContainerCreatorCached::operator Zenject::ISubContainerCreator() const noexcept {
return Zenject::ISubContainerCreator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerCreatorCached::__set__subCreator(Zenject::ISubContainerCreator value)  {
::cordl_internals::setInstanceField<Zenject::ISubContainerCreator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::ISubContainerCreator>(value));
}
constexpr Zenject::ISubContainerCreator Zenject::SubContainerCreatorCached::__get__subCreator() const {
return ::cordl_internals::getInstanceField<Zenject::ISubContainerCreator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerCreatorCached::__set__isLookingUp(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::SubContainerCreatorCached::__get__isLookingUp() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerCreatorCached::__set__subContainer(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::SubContainerCreatorCached::__get__subContainer() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::SubContainerCreatorCached Zenject::SubContainerCreatorCached::New_ctor(Zenject::ISubContainerCreator subCreator)  {
Zenject::SubContainerCreatorCached o{THROW_UNLESS(::il2cpp_utils::New<Zenject::SubContainerCreatorCached>(subCreator))};
return o;
}
 void Zenject::SubContainerCreatorCached::_ctor(Zenject::ISubContainerCreator subCreator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorCached>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ISubContainerCreator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, subCreator);
}
 Zenject::DiContainer Zenject::SubContainerCreatorCached::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorCached>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
