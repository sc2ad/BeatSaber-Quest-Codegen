#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__ZenAutoInjecter_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Zenject::Zenject__ZenAutoInjecter__ContainerSources::Zenject__ZenAutoInjecter__ContainerSources(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Zenject::Zenject__ZenAutoInjecter__ContainerSources::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::Zenject__ZenAutoInjecter__ContainerSources::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Zenject::Zenject__ZenAutoInjecter__ContainerSources  Zenject::Zenject__ZenAutoInjecter__ContainerSources::SceneContext{0};
constexpr Zenject::Zenject__ZenAutoInjecter__ContainerSources  Zenject::Zenject__ZenAutoInjecter__ContainerSources::ProjectContext{1};
constexpr Zenject::Zenject__ZenAutoInjecter__ContainerSources  Zenject::Zenject__ZenAutoInjecter__ContainerSources::SearchHierarchy{2};
//  Writing Method size for method: Zenject::ZenAutoInjecter.get_ContainerSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Zenject__ZenAutoInjecter__ContainerSources (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::get_ContainerSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da6728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "get_ContainerSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenAutoInjecter.set_ContainerSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenAutoInjecter::*)(Zenject::Zenject__ZenAutoInjecter__ContainerSources)>(&Zenject::ZenAutoInjecter::set_ContainerSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da6730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "set_ContainerSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__ZenAutoInjecter__ContainerSources>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenAutoInjecter.Construct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::Construct)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2da6738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenAutoInjecter.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::Awake)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2da677c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenAutoInjecter.LookupContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::LookupContainer)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2da67c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "LookupContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenAutoInjecter.GetContainerForCurrentScene
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::DiContainer (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::GetContainerForCurrentScene)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2da691c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "GetContainerForCurrentScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenAutoInjecter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenAutoInjecter::*)()>(&Zenject::ZenAutoInjecter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2da69ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenAutoInjecter.__zenInjectMethod0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::ZenAutoInjecter::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2da69bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenAutoInjecter.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::ZenAutoInjecter::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2da6a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::ZenAutoInjecter::__set__containerSource(Zenject::Zenject__ZenAutoInjecter__ContainerSources value)  {
::cordl_internals::setInstanceField<Zenject::Zenject__ZenAutoInjecter__ContainerSources, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::Zenject__ZenAutoInjecter__ContainerSources>(value));
}
constexpr Zenject::Zenject__ZenAutoInjecter__ContainerSources Zenject::ZenAutoInjecter::__get__containerSource() const {
return ::cordl_internals::getInstanceField<Zenject::Zenject__ZenAutoInjecter__ContainerSources, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ZenAutoInjecter::__set__hasInjected(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::ZenAutoInjecter::__get__hasInjected() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__ZenAutoInjecter__ContainerSources Zenject::ZenAutoInjecter::get_ContainerSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "get_ContainerSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::Zenject__ZenAutoInjecter__ContainerSources, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::ZenAutoInjecter::set_ContainerSource(Zenject::Zenject__ZenAutoInjecter__ContainerSources value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "set_ContainerSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__ZenAutoInjecter__ContainerSources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Zenject::ZenAutoInjecter::Construct()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::ZenAutoInjecter::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::DiContainer Zenject::ZenAutoInjecter::LookupContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "LookupContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::DiContainer Zenject::ZenAutoInjecter::GetContainerForCurrentScene()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "GetContainerForCurrentScene",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DiContainer, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Zenject::ZenAutoInjecter::ZenAutoInjecter()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ZenAutoInjecter>())) {}
 void Zenject::ZenAutoInjecter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::ZenAutoInjecter::__zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 Zenject::InjectTypeInfo Zenject::ZenAutoInjecter::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenAutoInjecter>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
