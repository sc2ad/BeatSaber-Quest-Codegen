#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType  ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType::None{0};
constexpr ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType  ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType::Default{1};
constexpr ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType  ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType::Lobby{2};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects.get_menuEnvironmentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType (::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::*)()>(&::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::get_menuEnvironmentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222cc40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects>::get(),
                            "get_menuEnvironmentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects.get_wrapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::*)()>(&::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::get_wrapper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222cc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects>::get(),
                            "get_wrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::*)()>(&::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222cc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::__set__menuEnvironmentType(::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::__get__menuEnvironmentType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::__set__wrapper(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::__get__wrapper() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::get_menuEnvironmentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects>::get(),
                            "get_menuEnvironmentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::GameObject ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::get_wrapper()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects>::get(),
                            "get_wrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects>())) {}
 void ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)()>(&::GlobalNamespace::MenuEnvironmentManager::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222cab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager.ShowEnvironmentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)(::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType)>(&::GlobalNamespace::MenuEnvironmentManager::ShowEnvironmentType)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x222cab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager>::get(),
                            "ShowEnvironmentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)()>(&::GlobalNamespace::MenuEnvironmentManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x222cc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MenuEnvironmentManager::__set__data(::ArrayW<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects> ::GlobalNamespace::MenuEnvironmentManager::__get__data() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MenuEnvironmentManager::__set__prevMenuEnvironmentType(::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType ::GlobalNamespace::MenuEnvironmentManager::__get__prevMenuEnvironmentType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MenuEnvironmentManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MenuEnvironmentManager::ShowEnvironmentType(::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType menuEnvironmentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager>::get(),
                            "ShowEnvironmentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, menuEnvironmentType);
}
// Ctor Parameters []
 ::GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentManager()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MenuEnvironmentManager>())) {}
 void ::GlobalNamespace::MenuEnvironmentManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
