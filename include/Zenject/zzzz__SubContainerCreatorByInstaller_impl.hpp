#pragma once
namespace {
#include "Zenject/zzzz__SubContainerCreatorByInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByInstaller::*)(::Zenject::DiContainer, ::Zenject::SubContainerCreatorBindInfo, ::System::Type, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>)>(&::Zenject::SubContainerCreatorByInstaller::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2d91aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByInstaller::*)(::Zenject::DiContainer, ::Zenject::SubContainerCreatorBindInfo, ::System::Type)>(&::Zenject::SubContainerCreatorByInstaller::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d91b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByInstaller.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer (::Zenject::SubContainerCreatorByInstaller::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>, ::Zenject::InjectContext)>(&::Zenject::SubContainerCreatorByInstaller::CreateSubContainer)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2d91c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstaller>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::ISubContainerCreator
constexpr  ::Zenject::SubContainerCreatorByInstaller::operator ::Zenject::ISubContainerCreator() const noexcept {
return ::Zenject::ISubContainerCreator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SubContainerCreatorByInstaller::__set__installerType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::Zenject::SubContainerCreatorByInstaller::__get__installerType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SubContainerCreatorByInstaller::__set__container(::Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::DiContainer>(value));
}
constexpr ::Zenject::DiContainer ::Zenject::SubContainerCreatorByInstaller::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SubContainerCreatorByInstaller::__set__extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> ::Zenject::SubContainerCreatorByInstaller::__get__extraArgs() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SubContainerCreatorByInstaller::__set__containerBindInfo(::Zenject::SubContainerCreatorBindInfo value)  {
::cordl_internals::setInstanceField<::Zenject::SubContainerCreatorBindInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::SubContainerCreatorBindInfo>(value));
}
constexpr ::Zenject::SubContainerCreatorBindInfo ::Zenject::SubContainerCreatorByInstaller::__get__containerBindInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::SubContainerCreatorBindInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installerType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "extraArgs", ty: "::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>", modifiers: "", def_value: None }]
 ::Zenject::SubContainerCreatorByInstaller::SubContainerCreatorByInstaller(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Type installerType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArgs)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByInstaller>(container, containerBindInfo, installerType, extraArgs))) {}
 void ::Zenject::SubContainerCreatorByInstaller::_ctor(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Type installerType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair> extraArgs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, containerBindInfo, installerType, extraArgs);
}
// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }, CppParam { name: "installerType", ty: "::System::Type", modifiers: "", def_value: None }]
 ::Zenject::SubContainerCreatorByInstaller::SubContainerCreatorByInstaller(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Type installerType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByInstaller>(container, containerBindInfo, installerType))) {}
 void ::Zenject::SubContainerCreatorByInstaller::_ctor(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo, ::System::Type installerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstaller>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, containerBindInfo, installerType);
}
 ::Zenject::DiContainer ::Zenject::SubContainerCreatorByInstaller::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByInstaller>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
} // end anonymous namespace
