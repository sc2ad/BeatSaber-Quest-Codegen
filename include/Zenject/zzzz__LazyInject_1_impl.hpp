#pragma once
#include "Zenject/zzzz__LazyInject_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
//  Writing Method size for method: Zenject::LazyInject_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::LazyInject_1::*)(Zenject::DiContainer, Zenject::InjectContext)>(&Zenject::LazyInject_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::LazyInject_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::LazyInject_1.Zenject_IValidatable_Validate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::LazyInject_1::*)()>(&Zenject::LazyInject_1::Zenject_IValidatable_Validate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::LazyInject_1>::get(),
                            "Zenject.IValidatable.Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::LazyInject_1.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<T (Zenject::LazyInject_1::*)()>(&Zenject::LazyInject_1::get_Value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::LazyInject_1>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IValidatable
constexpr  Zenject::LazyInject_1::operator Zenject::IValidatable() const noexcept {
return Zenject::IValidatable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::LazyInject_1::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::LazyInject_1::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::LazyInject_1::__set__context(Zenject::InjectContext value)  {
::cordl_internals::setInstanceField<Zenject::InjectContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InjectContext>(value));
}
constexpr Zenject::InjectContext Zenject::LazyInject_1::__get__context() const {
return ::cordl_internals::getInstanceField<Zenject::InjectContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::LazyInject_1::__set__hasValue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::LazyInject_1::__get__hasValue() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::LazyInject_1::__set__value(T value)  {
::cordl_internals::setInstanceField<T, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<T>(value));
}
constexpr T Zenject::LazyInject_1::__get__value() const {
return ::cordl_internals::getInstanceField<T, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "context", ty: "Zenject::InjectContext", modifiers: "", def_value: None }]
 Zenject::LazyInject_1::LazyInject_1(Zenject::DiContainer container, Zenject::InjectContext context)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LazyInject_1>(container, context))) {}
 void Zenject::LazyInject_1::_ctor(Zenject::DiContainer container, Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::LazyInject_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, context);
}
 void Zenject::LazyInject_1::Zenject_IValidatable_Validate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::LazyInject_1>::get(),
                            "Zenject.IValidatable.Validate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 T Zenject::LazyInject_1::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::LazyInject_1>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
