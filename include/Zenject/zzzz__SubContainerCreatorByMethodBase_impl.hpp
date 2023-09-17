#pragma once
namespace {
#include "Zenject/zzzz__SubContainerCreatorByMethodBase_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorByMethodBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::SubContainerCreatorByMethodBase::*)(::Zenject::DiContainer, ::Zenject::SubContainerCreatorBindInfo)>(&::Zenject::SubContainerCreatorByMethodBase::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d92220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethodBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByMethodBase.CreateSubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer (::Zenject::SubContainerCreatorByMethodBase::*)(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>, ::Zenject::InjectContext)>(&::Zenject::SubContainerCreatorByMethodBase::CreateSubContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Zenject::SubContainerCreatorByMethodBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethodBase>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SubContainerCreatorByMethodBase.CreateEmptySubContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer (::Zenject::SubContainerCreatorByMethodBase::*)()>(&::Zenject::SubContainerCreatorByMethodBase::CreateEmptySubContainer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d9224c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethodBase>::get(),
                            "CreateEmptySubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::ISubContainerCreator
constexpr  ::Zenject::SubContainerCreatorByMethodBase::operator ::Zenject::ISubContainerCreator() const noexcept {
return ::Zenject::ISubContainerCreator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SubContainerCreatorByMethodBase::__set__container(::Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::DiContainer>(value));
}
constexpr ::Zenject::DiContainer ::Zenject::SubContainerCreatorByMethodBase::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::SubContainerCreatorByMethodBase::__set__containerBindInfo(::Zenject::SubContainerCreatorBindInfo value)  {
::cordl_internals::setInstanceField<::Zenject::SubContainerCreatorBindInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::SubContainerCreatorBindInfo>(value));
}
constexpr ::Zenject::SubContainerCreatorBindInfo ::Zenject::SubContainerCreatorByMethodBase::__get__containerBindInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::SubContainerCreatorBindInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "::Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "containerBindInfo", ty: "::Zenject::SubContainerCreatorBindInfo", modifiers: "", def_value: None }]
 ::Zenject::SubContainerCreatorByMethodBase::SubContainerCreatorByMethodBase(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SubContainerCreatorByMethodBase>(container, containerBindInfo))) {}
 void ::Zenject::SubContainerCreatorByMethodBase::_ctor(::Zenject::DiContainer container, ::Zenject::SubContainerCreatorBindInfo containerBindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethodBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, containerBindInfo);
}
 ::Zenject::DiContainer ::Zenject::SubContainerCreatorByMethodBase::CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ::Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethodBase>::get(),
                            "CreateSubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method, args, context);
}
 ::Zenject::DiContainer ::Zenject::SubContainerCreatorByMethodBase::CreateEmptySubContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorByMethodBase>::get(),
                            "CreateEmptySubContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
