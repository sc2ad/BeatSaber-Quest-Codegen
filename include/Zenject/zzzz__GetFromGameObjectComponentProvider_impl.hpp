#pragma once
#include "Zenject/zzzz__GetFromGameObjectComponentProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: Zenject::GetFromGameObjectComponentProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GetFromGameObjectComponentProvider::*)(System::Type, UnityEngine::GameObject, bool)>(&Zenject::GetFromGameObjectComponentProvider::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d8d710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetFromGameObjectComponentProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::GetFromGameObjectComponentProvider.get_IsCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::GetFromGameObjectComponentProvider::*)()>(&Zenject::GetFromGameObjectComponentProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d8d74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetFromGameObjectComponentProvider>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::GetFromGameObjectComponentProvider.get_TypeVariesBasedOnMemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::GetFromGameObjectComponentProvider::*)()>(&Zenject::GetFromGameObjectComponentProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d8d754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetFromGameObjectComponentProvider>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::GetFromGameObjectComponentProvider.GetInstanceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (Zenject::GetFromGameObjectComponentProvider::*)(Zenject::InjectContext)>(&Zenject::GetFromGameObjectComponentProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d8d75c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetFromGameObjectComponentProvider>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::GetFromGameObjectComponentProvider.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::GetFromGameObjectComponentProvider::*)(Zenject::InjectContext, System::Collections::Generic::List_1<Zenject::TypeValuePair>, ByRef<System::Action>, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&Zenject::GetFromGameObjectComponentProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2d8d764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetFromGameObjectComponentProvider>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IProvider
constexpr  Zenject::GetFromGameObjectComponentProvider::operator Zenject::IProvider() const noexcept {
return Zenject::IProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::GetFromGameObjectComponentProvider::__set__gameObject(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject Zenject::GetFromGameObjectComponentProvider::__get__gameObject() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::GetFromGameObjectComponentProvider::__set__componentType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::GetFromGameObjectComponentProvider::__get__componentType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::GetFromGameObjectComponentProvider::__set__matchSingle(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::GetFromGameObjectComponentProvider::__get__matchSingle() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "componentType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "gameObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "matchSingle", ty: "bool", modifiers: "", def_value: None }]
 Zenject::GetFromGameObjectComponentProvider::GetFromGameObjectComponentProvider(System::Type componentType, UnityEngine::GameObject gameObject, bool matchSingle)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GetFromGameObjectComponentProvider>(componentType, gameObject, matchSingle))) {}
 void Zenject::GetFromGameObjectComponentProvider::_ctor(System::Type componentType, UnityEngine::GameObject gameObject, bool matchSingle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetFromGameObjectComponentProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, componentType, gameObject, matchSingle);
}
 bool Zenject::GetFromGameObjectComponentProvider::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetFromGameObjectComponentProvider>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::GetFromGameObjectComponentProvider::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetFromGameObjectComponentProvider>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type Zenject::GetFromGameObjectComponentProvider::GetInstanceType(Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetFromGameObjectComponentProvider>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void Zenject::GetFromGameObjectComponentProvider::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::GetFromGameObjectComponentProvider>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
