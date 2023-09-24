#pragma once
#include "Zenject/zzzz__IfNotBoundBinder_impl.hpp"
#include "Zenject/zzzz__NonLazyBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__IfNotBoundBinder_def.hpp"
//  Writing Method size for method: Zenject::NonLazyBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::NonLazyBinder::*)(Zenject::BindInfo)>(&Zenject::NonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d61d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::NonLazyBinder.NonLazy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IfNotBoundBinder (Zenject::NonLazyBinder::*)()>(&Zenject::NonLazyBinder::NonLazy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d61d48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NonLazyBinder>::get(),
                            "NonLazy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::NonLazyBinder.Lazy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IfNotBoundBinder (Zenject::NonLazyBinder::*)()>(&Zenject::NonLazyBinder::Lazy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d61d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NonLazyBinder>::get(),
                            "Lazy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Zenject::NonLazyBinder Zenject::NonLazyBinder::New_ctor(Zenject::BindInfo bindInfo)  {
Zenject::NonLazyBinder o{THROW_UNLESS(::il2cpp_utils::New<Zenject::NonLazyBinder>(bindInfo))};
return o;
}
 void Zenject::NonLazyBinder::_ctor(Zenject::BindInfo bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo);
}
 Zenject::IfNotBoundBinder Zenject::NonLazyBinder::NonLazy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NonLazyBinder>::get(),
                            "NonLazy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IfNotBoundBinder, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IfNotBoundBinder Zenject::NonLazyBinder::Lazy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::NonLazyBinder>::get(),
                            "Lazy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IfNotBoundBinder, false>(const_cast<void*>(instance), ___internal_method);
}
