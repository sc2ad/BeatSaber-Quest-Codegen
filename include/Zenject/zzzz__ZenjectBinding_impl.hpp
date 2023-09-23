#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__ZenjectBinding_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__Context_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Zenject::Zenject__ZenjectBinding__BindTypes::Zenject__ZenjectBinding__BindTypes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Zenject::Zenject__ZenjectBinding__BindTypes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::Zenject__ZenjectBinding__BindTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Zenject::Zenject__ZenjectBinding__BindTypes  Zenject::Zenject__ZenjectBinding__BindTypes::Self{0};
constexpr Zenject::Zenject__ZenjectBinding__BindTypes  Zenject::Zenject__ZenjectBinding__BindTypes::AllInterfaces{1};
constexpr Zenject::Zenject__ZenjectBinding__BindTypes  Zenject::Zenject__ZenjectBinding__BindTypes::AllInterfacesAndSelf{2};
constexpr Zenject::Zenject__ZenjectBinding__BindTypes  Zenject::Zenject__ZenjectBinding__BindTypes::BaseType{3};
//  Writing Method size for method: Zenject::ZenjectBinding.get_UseSceneContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_UseSceneContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7c6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_UseSceneContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenjectBinding.get_IfNotBound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_IfNotBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7c6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_IfNotBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenjectBinding.get_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Context (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7c6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenjectBinding.set_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectBinding::*)(Zenject::Context)>(&Zenject::ZenjectBinding::set_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7c700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "set_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Context>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenjectBinding.get_Components
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Component> (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_Components)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7c708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_Components",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenjectBinding.get_Identifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7c710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_Identifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenjectBinding.get_BindType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Zenject__ZenjectBinding__BindTypes (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::get_BindType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7c718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_BindType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenjectBinding.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d7c720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenjectBinding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectBinding::*)()>(&Zenject::ZenjectBinding::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d7c724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ZenjectBinding.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::ZenjectBinding::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2d7c77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::ZenjectBinding::__set__components(::ArrayW<UnityEngine::Component> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Component>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Component>>(value));
}
constexpr ::ArrayW<UnityEngine::Component> Zenject::ZenjectBinding::__get__components() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Component>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ZenjectBinding::__set__identifier(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Zenject::ZenjectBinding::__get__identifier() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ZenjectBinding::__set__useSceneContext(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::ZenjectBinding::__get__useSceneContext() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ZenjectBinding::__set__ifNotBound(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::ZenjectBinding::__get__ifNotBound() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ZenjectBinding::__set__context(Zenject::Context value)  {
::cordl_internals::setInstanceField<Zenject::Context, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::Context>(value));
}
constexpr Zenject::Context Zenject::ZenjectBinding::__get__context() const {
return ::cordl_internals::getInstanceField<Zenject::Context, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ZenjectBinding::__set__bindType(Zenject::Zenject__ZenjectBinding__BindTypes value)  {
::cordl_internals::setInstanceField<Zenject::Zenject__ZenjectBinding__BindTypes, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::Zenject__ZenjectBinding__BindTypes>(value));
}
constexpr Zenject::Zenject__ZenjectBinding__BindTypes Zenject::ZenjectBinding::__get__bindType() const {
return ::cordl_internals::getInstanceField<Zenject::Zenject__ZenjectBinding__BindTypes, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool Zenject::ZenjectBinding::get_UseSceneContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_UseSceneContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::ZenjectBinding::get_IfNotBound()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_IfNotBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::Context Zenject::ZenjectBinding::get_Context()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::Context, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::ZenjectBinding::set_Context(Zenject::Context value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "set_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Context>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Component> Zenject::ZenjectBinding::get_Components()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_Components",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Component>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Zenject::ZenjectBinding::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_Identifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::Zenject__ZenjectBinding__BindTypes Zenject::ZenjectBinding::get_BindType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "get_BindType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::Zenject__ZenjectBinding__BindTypes, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::ZenjectBinding::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Zenject::ZenjectBinding::ZenjectBinding()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ZenjectBinding>())) {}
 void Zenject::ZenjectBinding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::InjectTypeInfo Zenject::ZenjectBinding::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ZenjectBinding>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
