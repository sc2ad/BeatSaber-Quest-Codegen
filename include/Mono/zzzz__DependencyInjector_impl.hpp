#pragma once
#include "Mono/zzzz__DependencyInjector_def.hpp"
#include "Mono/zzzz__ISystemDependencyProvider_def.hpp"
//  Writing Method size for method: Mono::DependencyInjector.get_SystemProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::ISystemDependencyProvider (*)()>(&Mono::DependencyInjector::get_SystemProvider)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x22a48e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::DependencyInjector>::get(),
                            "get_SystemProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::DependencyInjector.Register
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Mono::ISystemDependencyProvider)>(&Mono::DependencyInjector::Register)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x22a4c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::DependencyInjector>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::ISystemDependencyProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::DependencyInjector.ReflectionLoad
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::ISystemDependencyProvider (*)()>(&Mono::DependencyInjector::ReflectionLoad)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x22a4ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::DependencyInjector>::get(),
                            "ReflectionLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Mono::DependencyInjector::__set_locker(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "locker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::DependencyInjector>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType Mono::DependencyInjector::__get_locker()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "locker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::DependencyInjector>::get>();
}
 void Mono::DependencyInjector::__set_systemDependency(Mono::ISystemDependencyProvider value)  {
::cordl_internals::setStaticField<Mono::ISystemDependencyProvider, "systemDependency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::DependencyInjector>::get>(std::forward<Mono::ISystemDependencyProvider>(value));
}
 Mono::ISystemDependencyProvider Mono::DependencyInjector::__get_systemDependency()  {
return ::cordl_internals::getStaticField<Mono::ISystemDependencyProvider, "systemDependency", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::DependencyInjector>::get>();
}
 Mono::ISystemDependencyProvider Mono::DependencyInjector::get_SystemProvider()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::DependencyInjector>::get(),
                            "get_SystemProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::ISystemDependencyProvider, false>(nullptr, ___internal_method);
}
 void Mono::DependencyInjector::Register(Mono::ISystemDependencyProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::DependencyInjector>::get(),
                            "Register",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::ISystemDependencyProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider);
}
 Mono::ISystemDependencyProvider Mono::DependencyInjector::ReflectionLoad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::DependencyInjector>::get(),
                            "ReflectionLoad",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::ISystemDependencyProvider, false>(nullptr, ___internal_method);
}
