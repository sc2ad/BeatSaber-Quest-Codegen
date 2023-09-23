#pragma once
#include "Zenject/zzzz__FactoryProviderWrapper_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
//  Writing Method size for method: Zenject::FactoryProviderWrapper_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FactoryProviderWrapper_1::*)(Zenject::IProvider, Zenject::InjectContext)>(&Zenject::FactoryProviderWrapper_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryProviderWrapper_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FactoryProviderWrapper_1.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TContract (Zenject::FactoryProviderWrapper_1::*)()>(&Zenject::FactoryProviderWrapper_1::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryProviderWrapper_1>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FactoryProviderWrapper_1.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::FactoryProviderWrapper_1::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryProviderWrapper_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FactoryProviderWrapper_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::FactoryProviderWrapper_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryProviderWrapper_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IFactory_1<TContract>
constexpr  Zenject::FactoryProviderWrapper_1::operator Zenject::IFactory_1<TContract>() const noexcept {
return Zenject::IFactory_1<TContract>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Zenject::IFactory
constexpr  Zenject::FactoryProviderWrapper_1::operator Zenject::IFactory() const noexcept {
return Zenject::IFactory(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::FactoryProviderWrapper_1::__set__provider(Zenject::IProvider value)  {
::cordl_internals::setInstanceField<Zenject::IProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IProvider>(value));
}
constexpr Zenject::IProvider Zenject::FactoryProviderWrapper_1::__get__provider() const {
return ::cordl_internals::getInstanceField<Zenject::IProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::FactoryProviderWrapper_1::__set__injectContext(Zenject::InjectContext value)  {
::cordl_internals::setInstanceField<Zenject::InjectContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InjectContext>(value));
}
constexpr Zenject::InjectContext Zenject::FactoryProviderWrapper_1::__get__injectContext() const {
return ::cordl_internals::getInstanceField<Zenject::InjectContext, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "provider", ty: "Zenject::IProvider", modifiers: "", def_value: None }, CppParam { name: "injectContext", ty: "Zenject::InjectContext", modifiers: "", def_value: None }]
 Zenject::FactoryProviderWrapper_1::FactoryProviderWrapper_1(Zenject::IProvider provider, Zenject::InjectContext injectContext)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<FactoryProviderWrapper_1>(provider, injectContext))) {}
 void Zenject::FactoryProviderWrapper_1::_ctor(Zenject::IProvider provider, Zenject::InjectContext injectContext)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryProviderWrapper_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, provider, injectContext);
}
 TContract Zenject::FactoryProviderWrapper_1::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryProviderWrapper_1>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TContract, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::FactoryProviderWrapper_1::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryProviderWrapper_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::FactoryProviderWrapper_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FactoryProviderWrapper_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
