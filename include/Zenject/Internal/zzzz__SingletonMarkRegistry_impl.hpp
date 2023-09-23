#pragma once
#include "Zenject/Internal/zzzz__SingletonMarkRegistry_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: Zenject::Internal::SingletonMarkRegistry.MarkNonSingleton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::SingletonMarkRegistry::*)(System::Type)>(&Zenject::Internal::SingletonMarkRegistry::MarkNonSingleton)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2da7f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::SingletonMarkRegistry>::get(),
                            "MarkNonSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::SingletonMarkRegistry.MarkSingleton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::SingletonMarkRegistry::*)(System::Type)>(&Zenject::Internal::SingletonMarkRegistry::MarkSingleton)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2da8018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::SingletonMarkRegistry>::get(),
                            "MarkSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Internal::SingletonMarkRegistry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::SingletonMarkRegistry::*)()>(&Zenject::Internal::SingletonMarkRegistry::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2da80ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::SingletonMarkRegistry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::SingletonMarkRegistry::__set__boundSingletons(System::Collections::Generic::HashSet_1<System::Type> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<System::Type>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<System::Type>>(value));
}
constexpr System::Collections::Generic::HashSet_1<System::Type> Zenject::Internal::SingletonMarkRegistry::__get__boundSingletons() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<System::Type>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::SingletonMarkRegistry::__set__boundNonSingletons(System::Collections::Generic::HashSet_1<System::Type> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<System::Type>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<System::Type>>(value));
}
constexpr System::Collections::Generic::HashSet_1<System::Type> Zenject::Internal::SingletonMarkRegistry::__get__boundNonSingletons() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<System::Type>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Zenject::Internal::SingletonMarkRegistry::MarkNonSingleton(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::SingletonMarkRegistry>::get(),
                            "MarkNonSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
 void Zenject::Internal::SingletonMarkRegistry::MarkSingleton(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::SingletonMarkRegistry>::get(),
                            "MarkSingleton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
// Ctor Parameters []
 Zenject::Internal::SingletonMarkRegistry::SingletonMarkRegistry()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SingletonMarkRegistry>())) {}
 void Zenject::Internal::SingletonMarkRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::SingletonMarkRegistry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
