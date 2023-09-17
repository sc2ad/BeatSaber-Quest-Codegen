#pragma once
namespace {
#include "Zenject/zzzz__StaticContext_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::Zenject::StaticContext.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Zenject::StaticContext::Clear)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d7b3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticContext.get_HasContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Zenject::StaticContext::get_HasContainer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d7b42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext>::get(),
                            "get_HasContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::StaticContext.get_Container
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer (*)()>(&::Zenject::StaticContext::get_Container)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d76e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext>::get(),
                            "get_Container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Zenject::StaticContext::__set__container(::Zenject::DiContainer value)  {
::cordl_internals::setStaticField<::Zenject::DiContainer, "_container", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext>::get>(std::forward<::Zenject::DiContainer>(value));
}
 ::Zenject::DiContainer ::Zenject::StaticContext::__get__container()  {
return ::cordl_internals::getStaticField<::Zenject::DiContainer, "_container", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext>::get>();
}
 void ::Zenject::StaticContext::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 bool ::Zenject::StaticContext::get_HasContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext>::get(),
                            "get_HasContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 ::Zenject::DiContainer ::Zenject::StaticContext::get_Container()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::StaticContext>::get(),
                            "get_Container",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
