#pragma once
namespace {
#include "Zenject/zzzz__InstantiateOnPrefabComponentProvider_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Zenject::InstantiateOnPrefabComponentProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InstantiateOnPrefabComponentProvider::*)(::System::Type, ::Zenject::IPrefabInstantiator)>(&::Zenject::InstantiateOnPrefabComponentProvider::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d8def8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateOnPrefabComponentProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabInstantiator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstantiateOnPrefabComponentProvider.get_IsCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::InstantiateOnPrefabComponentProvider::*)()>(&::Zenject::InstantiateOnPrefabComponentProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d8df24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateOnPrefabComponentProvider>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstantiateOnPrefabComponentProvider.get_TypeVariesBasedOnMemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::InstantiateOnPrefabComponentProvider::*)()>(&::Zenject::InstantiateOnPrefabComponentProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d8df2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateOnPrefabComponentProvider>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstantiateOnPrefabComponentProvider.GetInstanceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::Zenject::InstantiateOnPrefabComponentProvider::*)(::Zenject::InjectContext)>(&::Zenject::InstantiateOnPrefabComponentProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d8df34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateOnPrefabComponentProvider>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InstantiateOnPrefabComponentProvider.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InstantiateOnPrefabComponentProvider::*)(::Zenject::InjectContext, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>, ByRef<::System::Action>, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&::Zenject::InstantiateOnPrefabComponentProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2d8df3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateOnPrefabComponentProvider>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::IProvider
constexpr  ::Zenject::InstantiateOnPrefabComponentProvider::operator ::Zenject::IProvider() const noexcept {
return ::Zenject::IProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::InstantiateOnPrefabComponentProvider::__set__prefabInstantiator(::Zenject::IPrefabInstantiator value)  {
::cordl_internals::setInstanceField<::Zenject::IPrefabInstantiator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::IPrefabInstantiator>(value));
}
constexpr ::Zenject::IPrefabInstantiator ::Zenject::InstantiateOnPrefabComponentProvider::__get__prefabInstantiator() const {
return ::cordl_internals::getInstanceField<::Zenject::IPrefabInstantiator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::InstantiateOnPrefabComponentProvider::__set__componentType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::Zenject::InstantiateOnPrefabComponentProvider::__get__componentType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "componentType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "prefabInstantiator", ty: "::Zenject::IPrefabInstantiator", modifiers: "", def_value: None }]
 ::Zenject::InstantiateOnPrefabComponentProvider::InstantiateOnPrefabComponentProvider(::System::Type componentType, ::Zenject::IPrefabInstantiator prefabInstantiator)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InstantiateOnPrefabComponentProvider>(componentType, prefabInstantiator))) {}
 void ::Zenject::InstantiateOnPrefabComponentProvider::_ctor(::System::Type componentType, ::Zenject::IPrefabInstantiator prefabInstantiator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateOnPrefabComponentProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IPrefabInstantiator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, componentType, prefabInstantiator);
}
 bool ::Zenject::InstantiateOnPrefabComponentProvider::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateOnPrefabComponentProvider>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Zenject::InstantiateOnPrefabComponentProvider::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateOnPrefabComponentProvider>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Type ::Zenject::InstantiateOnPrefabComponentProvider::GetInstanceType(::Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateOnPrefabComponentProvider>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::Zenject::InstantiateOnPrefabComponentProvider::GetAllInstancesWithInjectSplit(::Zenject::InjectContext context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair> args, ByRef<::System::Action> injectAction, ::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InstantiateOnPrefabComponentProvider>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
} // end anonymous namespace
