#pragma once
#include "Zenject/zzzz__SubContainerCreatorByNewPrefab_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
//  Writing Method size for method: Zenject::SubContainerCreatorByNewPrefab._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerCreatorByNewPrefab::*)(Zenject::DiContainer, Zenject::IPrefabProvider, Zenject::GameObjectCreationParameters)>(&Zenject::SubContainerCreatorByNewPrefab::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d92aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByNewPrefab>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IPrefabProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::GameObjectCreationParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerCreatorByNewPrefab.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (Zenject::SubContainerCreatorByNewPrefab::*)(System::Collections::Generic::List_1<Zenject::TypeValuePair>, Zenject::InjectContext)>(&Zenject::SubContainerCreatorByNewPrefab::CreateSubContainer)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2d92ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByNewPrefab>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::ISubContainerCreator
constexpr  Zenject::SubContainerCreatorByNewPrefab::operator Zenject::ISubContainerCreator() const noexcept {
return Zenject::ISubContainerCreator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerCreatorByNewPrefab::__set__gameObjectBindInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::SubContainerCreatorByNewPrefab::__get__gameObjectBindInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerCreatorByNewPrefab::__set__prefabProvider(Zenject::IPrefabProvider value)  {
::cordl_internals::setInstanceField<Zenject::IPrefabProvider, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IPrefabProvider>(value));
}
constexpr Zenject::IPrefabProvider Zenject::SubContainerCreatorByNewPrefab::__get__prefabProvider() const {
return ::cordl_internals::getInstanceField<Zenject::IPrefabProvider, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerCreatorByNewPrefab::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::SubContainerCreatorByNewPrefab::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::SubContainerCreatorByNewPrefab Zenject::SubContainerCreatorByNewPrefab::New_ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo)  {
Zenject::SubContainerCreatorByNewPrefab o{THROW_UNLESS(::il2cpp_utils::New<Zenject::SubContainerCreatorByNewPrefab>(container, prefabProvider, gameObjectBindInfo))};
return o;
}
 void Zenject::SubContainerCreatorByNewPrefab::_ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByNewPrefab>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IPrefabProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::GameObjectCreationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, prefabProvider, gameObjectBindInfo);
}
 Zenject::DiContainer Zenject::SubContainerCreatorByNewPrefab::CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext parentContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerCreatorByNewPrefab>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, parentContext);
}
